
/* Everything here was written by jam1garner and can be found in the following repo:
 * https://github.com/jam1garner/stage-table-refs
 * 
 * Changed StageRef to TableRef for more generic naming
 */

use std::iter::{Copied, Enumerate, StepBy};
use std::slice::ArrayWindows;
use crate::cpu::*;

pub struct TableRefIter<I: Iterator<Item = [u8; 8]>> {
    pub table_offset: usize,
    pub inner: Enumerate<I>,
}

const BOTTOM_12_BITS: usize = 0b1111_1111_1111;

pub struct PatchLocation {
    pub text_offset: usize,
    pub offset_from_table_start: usize,
    pub adrp: Adrp,
    pub add: AddImm,
}

impl<I: Iterator<Item = [u8; 8]>> Iterator for TableRefIter<I> {
    type Item = PatchLocation;

    fn next(&mut self) -> Option<Self::Item> {
        while let Some((i, bytes)) = self.inner.next() {
            let adrp = u32::from_le_bytes(bytes[..4].try_into().unwrap());
            let add = u32::from_le_bytes(bytes[4..].try_into().unwrap());

            match (Adrp::decode(adrp), AddImm::decode(add)) {
                (Some(adrp), Some(add)) => {
                    if add.rd != add.rn || add.rd != adrp.rd {
                        continue
                    }
                    let adrp_offset = adrp.imm;
                    let add_offset = add.imm12;
                    let instr_loc = i * 4;

                    let offset = (instr_loc & !BOTTOM_12_BITS)
                        + (adrp_offset as usize)
                        + (add_offset as usize);

                    if (self.table_offset..self.table_offset + 0x100).contains(&offset) {
                        return Some(PatchLocation{
                            add,
                            adrp,
                            text_offset: i * 4,
                            offset_from_table_start: offset - self.table_offset,
                        });
                    }
                }
                _ => continue,
            }
        }

        None
    }
}

type TextIter8<'a> = Copied<StepBy<ArrayWindows<'a, u8, 8>>>;

impl<'a> TableRefIter<TextIter8<'a>> {
    pub fn new(text: &'a [u8], table_offset: usize) -> Self {
        Self {
            table_offset,
            inner: text.array_windows().step_by(4).copied().enumerate(),
        }
    }
}

pub struct CmpPatchLocation {
    pub text_offset: usize,
    pub instr: CmpImmediate,
}

type TextIter<'a> = Copied<StepBy<ArrayWindows<'a, u8, 4>>>;

pub struct TableCountRefIter<I: Iterator<Item = [u8; 4]>> {
    pub inner: Enumerate<I>,
    pub count_check: u16
}

impl<'a> TableCountRefIter<TextIter<'a>> {
    pub fn new(text: &'a [u8], count_check: u16) -> Self {
        Self {
            inner: text.array_windows().step_by(4).copied().enumerate(),
            count_check
        }
    }
}

impl<I: Iterator<Item = [u8; 4]>> Iterator for TableCountRefIter<I> {
    type Item = CmpPatchLocation;

    fn next(&mut self) -> Option<Self::Item> {
        while let Some((i, bytes)) = self.inner.next() {
            let instr = u32::from_le_bytes(bytes);
            // if let Some(instr @ CmpImmediate { imm12: 0x76, .. }) = CmpImmediate::decode(instr) {
            //     return Some(CmpPatchLocation { instr, text_offset: i * 4})
            // }
            match CmpImmediate::decode(instr) {
                Some(instr) => {
                    if instr.imm12 == self.count_check {
                        return Some(CmpPatchLocation { instr, text_offset: i * 4});
                    }
                },
                None => {},
            }
        }

        None
    }
}