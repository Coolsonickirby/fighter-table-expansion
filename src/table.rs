#![feature(array_windows)]
use skyline::hooks::{getRegionAddress, Region};
use std::collections::HashMap;
use std::ffi::CString;
use std::io::BufReader;
use std::{mem, ptr};

use crate::cpu::{CmpImmediate, BL, BLR};
use crate::globals::Data;
use crate::{
    cpu::{AddImm, Adrp, MovK, MovZ},
    refs::*,
};

/* Everything here was written by jam1garner and can be found in the following repo:
 * https://github.com/jam1garner/stage-table-refs
 *
 * - Renamed structs to be more generic
 * - Changed todo! to actual stuff
 */

pub fn get_text() -> &'static [u8] {
    unsafe {
        let ptr = getRegionAddress(Region::Text) as *const u8;
        let size = (getRegionAddress(Region::Rodata) as usize) - (ptr as usize);
        std::slice::from_raw_parts(ptr, size)
    }
}

pub fn get_data() -> &'static [u8] {
    unsafe {
        let ptr = getRegionAddress(Region::Data) as *const u8;
        let size = (getRegionAddress(Region::Bss) as usize) - (ptr as usize);
        std::slice::from_raw_parts(ptr, size)
    }
}

pub fn get_rodata() -> &'static [u8] {
    unsafe {
        let ptr = getRegionAddress(Region::Rodata) as *const u8;
        let size = (getRegionAddress(Region::Data) as usize) - (ptr as usize);
        std::slice::from_raw_parts(ptr, size)
    }
}

// ended up going unused
pub fn create_cave(register: u8, value: usize, cave_offset: usize, source_offset: usize) {
    let source_offset = (source_offset + 4);

    let lower_4 = (value & 0xFFFF) as u32;
    let middle_4 = ((value >> 16) & 0xFFFF) as u32;
    let upper_2 = ((value >> 16) >> 16) as u32;

    let new_movz: MovZ = MovZ {
        imm16: lower_4,
        rd: register,
        is_64_bit: true,
    };
    let new_movk_lsl_16: MovK = MovK {
        imm16: middle_4,
        rd: register,
        lsl_16: true,
        lsl_32: false,
    };
    let new_movk_lsl_32: MovK = MovK {
        imm16: upper_2,
        rd: register,
        lsl_16: false,
        lsl_32: true,
    };

    skyline::patching::Patch::in_text(cave_offset)
        .data(new_movz.encode())
        .unwrap();
    skyline::patching::Patch::in_text(cave_offset + 4)
        .data(new_movk_lsl_16.encode())
        .unwrap();
    skyline::patching::Patch::in_text(cave_offset + 8)
        .data(new_movk_lsl_32.encode())
        .unwrap();

    let instruction_offset = source_offset - (cave_offset + 12);
    let branch = BL {
        imm26: instruction_offset as u64,
    };

    skyline::patching::Patch::in_text(cave_offset + 12).data(branch.encode()).unwrap();
}

pub struct CaveInstrOffset {
    pub cave_offset: usize,
    pub register: u8,
}

pub fn patch_id_and_jump_xrefs(ptr: usize, xrefs: &Vec<PatchLocation>) {
    for xref in xrefs {
        patch_id_and_jump_at_offset(ptr, xref.adrp.rd, xref.text_offset);
    }
}

pub fn patch_id_and_jump_at_offset(ptr: usize, register: u8, text_offset: usize){
    let data = Data {
        ptr,
        register
    };

    let movz = MovZ {
        imm16: match crate::globals::get_id_if_data_exists(&data) {
            Some(id) => id as u32,
            None => crate::globals::insert_data(data) as u32,
        },
        rd: 18,
        is_64_bit: true,
    };

    unsafe {
        println!("{:?}", crate::globals::HOOK_DATA_FOR_ID.get(&(movz.imm16 as u16)).unwrap());
    }

    skyline::patching::Patch::in_text(text_offset)
        .data(movz.encode())
        .unwrap();

    skyline::patching::Patch::in_text(text_offset + 4)
        .nop()
        .unwrap();

    unsafe {
        println!("HOOK LOCATION: {:#x} - {:#x}", text_offset, getRegionAddress(Region::Text) as usize + text_offset);
        crate::hooks::A64InlineHook((getRegionAddress(Region::Text) as usize + text_offset + 4) as _, crate::hooks::inline_hook_for_table_adrp_skyline_internal_original_fn as _);
    }
}

pub struct StringRelocatedTable {
    pub offset: usize,                                       // Original table offset
    pub table: Vec<CString>,                                 // The new table
    pub refs: Vec<PatchLocation>, // Where the original table references are
    // pub instruction_offset: HashMap<usize, CaveInstrOffset>, // Offset in the .text where it'll run the mov instructions then jump back
}

impl StringRelocatedTable {
    pub fn new(offset: usize, size: usize) -> StringRelocatedTable {
        // clone table with offset and size
        let data = get_data();

        // Subtract start of data offset
        let mut current_offset = offset - 0x4f15000;

        let mut table: Vec<CString> = vec![];

        for _ in 0..size {
            let entry_pointer =
                usize::from_le_bytes(data[current_offset..current_offset + 8].try_into().unwrap())
                    as *const u8;
            unsafe {
                table.push(CString::new(skyline::from_c_str(entry_pointer)).unwrap());
            }
            current_offset += 8;
        }

        let mut patch_locations: Vec<PatchLocation> =
            TableRefIter::new(&get_text(), offset).into_iter().collect();

        StringRelocatedTable {
            offset: offset,
            table: table,
            refs: patch_locations,
            // instruction_offset: HashMap::new(),
        }
    }

    pub fn push(&mut self, entry: &str) {
        self.table.push(CString::new(entry).unwrap());
    }

    pub fn patch(&mut self) {
        // Patch references to old table
        // Thanks to https://gist.github.com/iskakaushik/1c5b8aa75c77479c33c4320913eebef6
        let mut out = self
            .table
            .clone()
            .into_iter()
            .map(|s| s.into_raw())
            .collect::<Vec<_>>();

        out.shrink_to_fit();
        let ptr = out.as_mut_ptr();
        mem::forget(out);

        let table_ptr = ptr as usize;
        patch_id_and_jump_xrefs(table_ptr, &self.refs);

        // for (key, value) in &self.instruction_offset {
        //     create_cave(value.register, table_ptr, value.cave_offset, *key);
        // }
        /*
        for xref in &self.refs {
            // println!(
            //     ".text+{:#x?} - patch register x{} to table+{:#x?}",
            //     xref.text_offset, xref.add.rd, xref.offset_from_table_start
            // );

            // if !self.instruction_offset.contains_key(&xref.text_offset) {
            //     let ins_offset = crate::offsets::get_code_cave_offset();
            //     let cave_instr = CaveInstrOffset {
            //         cave_offset: ins_offset,
            //         register: xref.adrp.rd,
            //     };
            //     create_cave(
            //         cave_instr.register,
            //         table_ptr,
            //         cave_instr.cave_offset,
            //         xref.text_offset,
            //     );
            //     self.instruction_offset
            //         .insert(xref.text_offset.clone(), cave_instr);
            // }

            // let new_adrp = Adrp {
            //     imm: page as u32,
            //     rd: xref.adrp.rd,
            // };

            // let new_add = AddImm {
            //     imm12: offset as u16,
            //     shift: xref.add.shift,
            //     rn: xref.add.rn,
            //     rd: xref.add.rd,
            //     is_64_bit: xref.add.is_64_bit,
            // };

            // let instruction_offset = self
            //     .instruction_offset
            //     .get(&xref.text_offset)
            //     .unwrap()
            //     .cave_offset
            //     - xref.text_offset;
            // let branch = BL {
            //     imm26: instruction_offset as u64,
            // };

            // if xref.text_offset == 0x17de9c8 {
            //     println!("ins_off: {:#x}", instruction_offset);
            //     println!("encoded: {:#x}", branch.encode());
            // }

            // skyline::patching::Patch::in_text(xref.text_offset)
            //     .data(branch.encode())
            //     .unwrap();
            // skyline::patching::Patch::in_text(xref.text_offset + 4)
            //     .nop()
            //     .unwrap();
            patch_id_and_jump_at_offset(table_ptr, xref.adrp.rd, xref.text_offset);
        }
        */
        println!("{:?}", self.table);
        println!("{:#x}", table_ptr);
    }
}

pub struct HashRelocatedTable {
    pub offset: usize,                                       // Original table offset
    pub table: Vec<u64>,                                     // The new table
    pub refs: Vec<PatchLocation>,                            // Where the table references are
    // pub instruction_offset: HashMap<usize, CaveInstrOffset>, // Offset in the .text where it'll run the mov instructions then jump back
}

impl HashRelocatedTable {
    pub fn new(offset: usize, size: usize) -> HashRelocatedTable {
        // clone table with offset and size

        unsafe {
            let data = getRegionAddress(Region::Text) as usize;

            // Subtract start of data offset
            let mut current_offset = offset;

            let mut table: Vec<u64> = vec![];

            for _ in 0..size {
                let hash = *((data + current_offset) as *const u64);
                table.push(hash);
                current_offset += 8;
            }

            let mut patch_locations: Vec<PatchLocation> =
                TableRefIter::new(&get_text(), offset).into_iter().collect();

            HashRelocatedTable {
                offset: offset,
                table: table,
                refs: patch_locations,
                // instruction_offset: HashMap::new(),
            }
        }
    }

    pub fn push(&mut self, entry: u64) {
        self.table.push(entry);
    }

    pub fn patch(&mut self) {
        let table_ptr = self.table.as_ptr() as usize;
        patch_id_and_jump_xrefs(table_ptr, &self.refs);

        // for (key, value) in &self.instruction_offset {
        //     create_cave(value.register, table_ptr, value.cave_offset, *key);
        // }
        /*
        for xref in &self.refs {
            // // println!(
            // //     ".text+{:#x?} - patch register x{} to table+{:#x?}",
            // //     xref.text_offset, xref.add.rd, xref.offset_from_table_start
            // // );

            // if !self.instruction_offset.contains_key(&xref.text_offset) {
            //     let ins_offset = crate::offsets::get_code_cave_offset();
            //     let cave_instr = CaveInstrOffset {
            //         cave_offset: ins_offset,
            //         register: xref.adrp.rd,
            //     };
            //     create_cave(
            //         cave_instr.register,
            //         table_ptr,
            //         cave_instr.cave_offset,
            //         xref.text_offset,
            //     );
            //     self.instruction_offset
            //         .insert(xref.text_offset.clone(), cave_instr);
            // }

            // // let instruction_offset =
            // //     self.instruction_offset.get(&xref.adrp.rd).unwrap() - xref.text_offset;
            // // let branch_link = BLR {
            // //     imm26: instruction_offset as u64,
            // // };

            // skyline::patching::Patch::at_offset(xref.text_offset).branch_to(
            //     self.instruction_offset
            //         .get(&xref.text_offset)
            //         .unwrap()
            //         .cave_offset,
            // );

            patch_id_and_jump_at_offset(table_ptr, xref.adrp.rd, xref.text_offset);
        }
        */
        println!("{:#x?}", self.table);
        println!("{:#x}", table_ptr);
    }
}

pub struct VtableRelocatedTable {
    pub offset: usize,                                       // Original table offset
    pub table: Vec<u64>,                                     // The new table
    pub refs: Vec<PatchLocation>,                            // Where the table references are
}

impl VtableRelocatedTable {
    pub fn new(offset: usize, size: usize) -> VtableRelocatedTable {
        // clone table with offset and size

        unsafe {
            let data = getRegionAddress(Region::Text) as usize;

            // Subtract start of data offset
            let mut current_offset = offset;

            let mut table: Vec<u64> = vec![];

            for _ in 0..size {
                let hash = *((data + current_offset) as *const u64);
                table.push(hash);
                current_offset += 8;
            }

            let mut patch_locations: Vec<PatchLocation> =
                TableRefIter::new(&get_text(), offset).into_iter().collect();

            VtableRelocatedTable {
                offset: offset,
                table: table,
                refs: patch_locations,
            }
        }
    }

    pub fn push(&mut self, entry: u64) {
        self.table.push(entry);
    }

    pub fn patch(&mut self) {
        let table_ptr = self.table.as_ptr() as usize;
        patch_id_and_jump_xrefs(table_ptr, &self.refs);
        println!("{:#x?}", self.table);
        println!("{:#x}", table_ptr);
    }
}

pub struct u32RelocatedTable {
    pub offset: usize,                                       // Original table offset
    pub table: Vec<u32>,                                     // The new table
    pub refs: Vec<PatchLocation>,                            // Where the table references are
}

impl u32RelocatedTable {
    pub fn new(offset: usize, size: usize) -> u32RelocatedTable {
        // clone table with offset and size
        unsafe {
            let data = getRegionAddress(Region::Text) as usize;

            // Subtract start of data offset
            let mut current_offset = offset;

            let mut table: Vec<u32> = vec![];

            for _ in 0..size {
                let id = *((data + current_offset) as *const u32);
                table.push(id);
                current_offset += 4;
            }

            let mut patch_locations: Vec<PatchLocation> =
                TableRefIter::new(&get_text(), offset).into_iter().collect();

            u32RelocatedTable {
                offset: offset,
                table: table,
                refs: patch_locations,
            }
        }
    }

    pub fn push(&mut self, entry: u32) {
        self.table.push(entry);
    }

    pub fn patch(&mut self) {
        let table_ptr = self.table.as_ptr() as usize;
        patch_id_and_jump_xrefs(table_ptr, &self.refs);
        /*
        for xref in &self.refs {
            patch_id_and_jump_at_offset(table_ptr, xref.adrp.rd, xref.text_offset);
        }
        */

        println!("{:#x?}", self.table);
        println!("{:#x}", table_ptr);
    }
}


pub struct TableRefs {
    pub refs: Vec<CmpPatchLocation>,     // References to locations
    pub blacklisted_offsets: Vec<usize>, // A list of offsets not to patch
}

impl TableRefs {
    pub fn new(count_to_check: u16, blacklisted_offsets: Vec<usize>) -> TableRefs {
        TableRefs {
            refs: TableCountRefIter::new(get_text(), count_to_check)
                .into_iter()
                .collect(),
            blacklisted_offsets,
        }
    }

    pub fn set_count(&mut self, count: u16) {
        for xref in &self.refs {
            let new_cmp: CmpImmediate = CmpImmediate {
                imm12: count,
                reg: xref.instr.reg,
                is_64_bit: xref.instr.is_64_bit,
            };

            println!(
                ".text+{:#x?} - patch `{}` with `{}` {:#x}",
                xref.text_offset,
                xref.instr,
                new_cmp,
                new_cmp.encode()
            );
            // std::thread::sleep(std::time::Duration::from_millis(1000));
            //
            if !self.blacklisted_offsets.contains(&xref.text_offset) {
                skyline::patching::Patch::in_text(xref.text_offset)
                    .data(new_cmp.encode())
                    .unwrap();
            }
        }
    }
}

use std::fmt;

impl fmt::Display for CmpImmediate {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        if self.is_64_bit {
            write!(f, "cmp x{}, #{:#x?}", self.reg, self.imm12)
        } else {
            write!(f, "cmp w{}, #{:#x?}", self.reg, self.imm12)
        }
    }
}
