use skyline::{self, hook, hooks::{InlineCtx, getRegionAddress, Region}, patching::{Patch, sky_memcpy}, install_hooks};
use smash::{app::*, cpp};

use crate::cpu;

#[repr(C)]
pub struct FighterParamAccessor2Ex {
    pub original: FighterParamAccessor2, // 0x19a8
    pub relocated_entries: [FPA2Entry; 255],
    pub relocated_entries_2: [FPA2Entry2; 255],
}

#[hook(offset = 0x70c33c, inline)]
pub unsafe fn destroy_entries(ctx: &mut InlineCtx) {
    let table = *ctx.registers[0].x.as_ref() as *mut FighterParamAccessor2Ex;
    *ctx.registers[21].x.as_mut() = (*table).relocated_entries.as_ptr() as u64;
}

#[hook(offset = 0x709d68, inline)]
pub unsafe fn destroy_entries2(ctx: &mut InlineCtx) {
    let table = *ctx.registers[0].x.as_ref() as *mut FighterParamAccessor2Ex;
    *ctx.registers[21].x.as_mut() = (*table).relocated_entries.as_ptr() as u64;
}

#[hook(offset = 0x709b08, inline)]
pub unsafe fn destroy_entries3(ctx: &mut InlineCtx) {
    let table = *ctx.registers[19].x.as_ref() as *mut FighterParamAccessor2Ex;
    *ctx.registers[21].x.as_mut() = (*table).relocated_entries.as_ptr() as u64;
}

#[hook(offset = 0x66ef48, inline)]
pub unsafe fn init_entries(ctx: &mut InlineCtx) {
    let table = *ctx.registers[20].x.as_ref() as *mut FighterParamAccessor2Ex;
    println!("[fpa2::init_entries] Instance: {:#x}", table as usize);
    println!("[fpa2::init_entries] Original Table 1: {:#x}", table as usize + 0x60);
    println!("[fpa2::init_entries] Original Table 2: {:#x}", table as usize + 0x14F0);
    println!("[fpa2::init_entries] Relocated Table 1: {:#x}", table as usize + 0x19A8);
    println!("[fpa2::init_entries] Relocated Table 2: {:#x}", table as usize + 0x5170);
    for entry in (*table).relocated_entries.iter_mut() {
        entry.unk1 = 0;
        entry.unk2 = 0;
        entry.unk3.vtable = (getRegionAddress(Region::Text) as *const ()).byte_offset(0x4f88b50);
        entry.unk4.vtable = (getRegionAddress(Region::Text) as *const ()).byte_offset(0x4f88b70);
        entry.unk3.unk = cpp::SharedPtr::null();
        entry.unk4.unk = cpp::SharedPtr::null();
    }
    (*table).relocated_entries_2.fill(FPA2Entry2 { unk1: 0, unk2: 0, unk3: 0 });
}

static LDR_ENTRIES_TABLE_1: [usize; 286] = [
//0x02253a38,
//0x02253b08,
//0x02253bd8,
//0x02253ca8,
//0x02253d78,
//0x02253e48,
//0x02253f18,
//0x02253fe8,
//0x022540b8,
//0x022543f8,
//0x022544c8,
//0x022548d8,
//0x022549a8
//0x02253898,
//0x02253968,
//0x02254188,
//0x02254258,
//0x02254328,
//0x02254598,
//0x02254668,
//0x02254738,
//0x02254808,
//0x034f60ec,
//0x01670f4c,
//0x01670fa8,
0x00a44a88,
0x00a80d78,
0x00ab839c,
0x00ab9800,
0x00aba544,
0x00aba894,
0x00abaa00,
0x00abe82c,
0x00adac44,
0x00adace4,
0x00adb384,
0x00adc140,
0x00af8004,
0x00b0e6d8,
0x00b0e23c,
0x00b2f964,
0x00b3512c,
0x00ba1f44,
0x00ba200c,
0x00ba4664,
0x00c2c6a8,
0x00c2c6c4,
0x00c2c6d0,
0x00c5b72c,
0x00c5be6c,
0x00c5c2ac,
0x00c5c04c,
0x00c5c250,
0x00c02418,
0x00c02528,
0x00c44784,
0x00cb9618,
0x00cd98d8,
0x00cd98e8,
0x00d28a20,
0x00d72ecc,
0x00d5600c,
0x00d7523c,
0x00d9935c,
0x00e2d224,
0x00f02a14,
0x00f03f18,
0x00f03f58,
0x00f03f98,
0x00f6d600,
0x00f6d928,
0x00f6dc2c,
0x00f6f4dc,
0x00f11a80,
0x00f029a8,
0x00f063a8,
0x00f1074c,
0x00f06574,
0x00f06818,
0x00f09044,
0x00f17034,
0x00fbed48,
0x00fbf33c,
0x00fbff0c,
0x00fc02e0,
0x00feef4c,
0x01f813a8,
0x006ce7f0,
0x006d69f4,
0x006d79b0,
0x006d0570,
0x006d7938,
0x006ddeec,
0x006ddf58,
0x006de018,
0x009d9d3c,
0x009dae9c,
0x009dea40,
0x010bb4b8,
0x010bb4c8,
0x011b9b6c,
0x011b9cac,
0x011b8928,
0x011b9638,
0x011d8030,
0x011f4b94,
0x012dbc8c,
0x012ddff0,
0x020a75a0,
0x021c1688,
0x021e0a98,
0x022e8a58,
0x022e8f98,
0x033dbb44,
0x033e7f78,
0x033fafd8,
0x033fb70c,
0x033fb200,
0x034a5f04,
0x034d85a4,
0x034d85d0,
0x034dc5d0,
0x034e5d24,
0x034e5d60,
0x034e6578,
0x034f2f14,
0x034f57ec,
0x034f522c,
0x034fbe60,
0x034fbe68,
0x034fe4d8,
0x0036bc08,
0x0036bc18,
0x0036bc30,
0x0036bc40,
0x0036bc58,
0x0036bc70,
0x0036bc88,
0x0036bca0,
0x0036bcb0,
0x0036bcc8,
0x0036bd18,
0x0036bd28,
0x0036bd40,
0x0036bd50,
0x0036bd68,
0x0036bd80,
0x0036bd98,
0x0036bdb0,
0x0036bdc0,
0x0036bdd8,
0x0036bdec,
0x0036be1c,
0x0036be04,
0x0036be8c,
0x0036be78,
0x0036bea0,
0x0036beb0,
0x0036bec4,
0x0036bed8,
0x0036befc,
0x0036bf5c,
0x0036bf18,
0x0036bf28,
0x0036bf44,
0x0036bf78,
0x0036bf94,
0x0060c690,
0x0060c758,
0x0060c954,
0x0060c978,
0x0060cee4,
0x0065db0c,
0x0069b6d8,
0x0069b6fc,
0x0077eac8,
0x0077eadc,
0x0082daf8,
0x0082dfe0,
0x0085ab2c,
0x0085ae08,
0x0130e3d8,
0x0132d1ac,
0x0166cbc0,
0x0166d0fc,
0x0166d2d0,
0x0166d2e0,
0x0166d2f0,
0x0166d4e8,
0x0166d50c,
0x0166d53c,
0x0166d288,
0x0166d300,
0x0166d524,
0x0166f86c,
0x0166f610,
0x0223a9c0,
0x0223a9d8,
0x0223a9e4,
0x0223aab0,
0x0223aacc,
0x0223aad8,
0x0223aba0,
0x0223ac70,
0x0223ad40,
0x0223ae10,
0x0223aee0,
0x0223afb0,
0x0223b2f0,
0x0223b3c0,
0x0223b57c,
0x0223b080,
0x0223b150,
0x0223b220,
0x0223b490,
0x0223b560,
0x0223b588,
0x0227f3dc,
0x0227f20c,
0x00313bf4,
0x0340cf58,
0x0342e2a0,
0x0342e2cc,
0x0344acf0,
0x0345d4f0,
0x00613c14,
0x00613c74,
0x00827bfc,
0x00830b38,
0x00830c1c,
0x00830d0c,
0x00830dfc,
0x00830ef4,
0x00855ca4,
0x00855f78,
0x00857de4,
0x00858ae0,
0x00858b5c,
0x00858bf8,
0x00858c6c,
0x00858d20,
0x00858dd4,
0x00858e60,
0x00858fe0,
0x00859fe8,
0x00931b18,
0x00934ca0,
0x00934ea4,
0x01266a60,
0x01266b24,
0x01326fcc,
0x01661fec,
0x01662cac,
0x01663a54,
0x01664afc,
0x01667ebc,
0x01677bd8,
0x02152d98,
0x03499d18,
0x03525ee4,
0x006960b8,
0x008314b0,
0x008504f4,
0x008587b8,
0x008588e4,
0x008589fc,
0x008597f4,
0x009361c0,
0x011623e4,
0x016657dc,
0x016671ac,
0x034428c8,
0x0069364c,
0x0083143c,
0x0085731c,
0x0085775c,
0x0100624c,
0x0166650c,
0x0344171c,
0x0344277c,
0x0349475c,
0x00621884,
0x00693628,
0x00857540,
0x00857978,
0x00858830,
0x00858954,
0x00859058,
0x00859108,
0x00859190,
0x00859284,
0x00859304,
0x00859384,
0x00859488,
0x00859508,
0x00859588,
0x00859608,
0x00859718,
0x00859884,
0x00859990,
0x01227824,
0x01328590,
0x01663818,
0x01663838,
0x01663858,
0x01663878,
0x01663898,
0x01669194,
0x01669284,
0x03490520,
0x03490890,
];

static ADD_MOVZ_TABLE_1: [usize; 12] = [
    // 0x066eee0,
    // 0x0709d64,
    // 0x070c338,
    // 0x0709b04,
    0x0f03fd0,
    0x0f03f38,
    0x0f03f78,
    0x0f04080,
    0x0f04144,
    0x0f04204,
    0x0f042b4,
    0x0f04378,
    0x0f04438,
    0x0f044e8,
    0x0f045b0,
    0x0f04674,
];

static LDRSW_ENTRIES_TABLE_2: [usize; 9] = [
    0x34b1b4,
    0x85ae04,
    0x6e1f08,
    0x266d20,
    0x6ce8c8,
    0x6d063c,
    0x6e22e0,
    0x6e2520,
    0xf02984,
    // 0x70a520, // This is a STR
];

/*
TODO:
- Other LDR's that are weird (all are related to simon/richter or ice climbers)  
- madd
- smaddl
*/

pub fn install() {
    // patch class size
    let class_size = std::mem::size_of::<FighterParamAccessor2Ex>();
    Patch::in_text(0x66ee50).bytes(cpu::MovZ {imm16: class_size as u32, rd: 1, is_64_bit: false }.encode().to_le_bytes()).unwrap();
    Patch::in_text(0x66ee70).bytes(cpu::MovZ {imm16: class_size as u32, rd: 8, is_64_bit: false }.encode().to_le_bytes()).unwrap();

    // patch table 1 accesses that go backwards from table 2's start
    let table_2_offset = 0x19a8 + 255 * 56;
    Patch::in_text(0x709d5c).bytes(cpu::MovZ {imm16: table_2_offset as u32, rd: 8, is_64_bit: false }.encode().to_le_bytes()).unwrap();
    Patch::in_text(0x709b00).bytes(cpu::MovZ {imm16: table_2_offset as u32, rd: 8, is_64_bit: false }.encode().to_le_bytes()).unwrap();
    Patch::in_text(0x70c330).bytes(cpu::MovZ {imm16: table_2_offset as u32, rd: 8, is_64_bit: false }.encode().to_le_bytes()).unwrap();
    
    // hooks for initialization and also destruction
    install_hooks!(destroy_entries, destroy_entries2, destroy_entries3, init_entries);

    for entry in LDR_ENTRIES_TABLE_1 {
        unsafe {
            let ldr_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            let mut ldr = cpu::LdrImmediate::decode(*ldr_instr).unwrap();
            ldr.imm9 = ldr.imm9 - 0x60 + 0x19a8;
            // Need to use sky_memcpy instead of write
            Patch::in_text(entry).bytes(ldr.encode().to_le_bytes()).unwrap();
        }
    }
    for entry in ADD_MOVZ_TABLE_1 {
        unsafe {
            let movz_instr = (getRegionAddress(Region::Text) as usize + entry - 4) as *const u32;
            let mut movz = cpu::MovZ::decode(*movz_instr);
            movz.imm16 = movz.imm16 - 0x60 + 0x19a8;

            // Need to use sky_memcpy instead of write
            Patch::in_text(entry).bytes(movz.encode().to_le_bytes()).unwrap();
        }
    }
    for entry in LDRSW_ENTRIES_TABLE_2 {
        unsafe {
            let ldrsw_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            if let Some(mut ldrsw) = cpu::LdrswPostImmediate::decode(*ldrsw_instr) {
                ldrsw.imm9 = ldrsw.imm9 - 0x14F0 + table_2_offset;
                // Need to use sky_memcpy instead of write
                Patch::in_text(entry).bytes(ldrsw.encode().to_le_bytes()).unwrap();
            } else {
                println!("Failed to decode LDRSW!: {:#x}, {:#x}", entry, *ldrsw_instr);
            }
        }
    }
}