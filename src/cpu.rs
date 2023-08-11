/* Everything here (excluding the instructions not found in the original code)
 * was written by jam1garner and can be found in the following repo:
 * https://github.com/jam1garner/stage-table-refs
 */

pub struct Adrp {
    pub imm: u32,
    pub rd: u8,
}

impl Adrp {
    const MASK: u32 = 0b1_00_11111_0000000000000000000_00000;
    const MASKED: u32 = 0b1_00_10000_0000000000000000000_00000;

    pub fn decode(instr: u32) -> Option<Self> {
        if instr & Self::MASK == Self::MASKED {
            let rd = (instr & 0b11111) as u8;
            let immhi = (instr >> 5) & 0x7FFFF;
            let immlo = (instr >> 29) & 0b11;

            let imm = (immhi << 14) + (immlo << 12);

            Some(Self { imm, rd })
        } else {
            None
        }
    }

    pub fn encode(&self) -> u32 {
        let immlo = (self.imm >> 12) & 0b11;
        let immhi = self.imm >> 14;

        Self::MASKED | (immlo << 29) | (immhi << 5) | (self.rd as u32)
    }
}

pub struct AddImm {
    pub imm12: u16,
    pub shift: u8,
    pub rn: u8,
    pub rd: u8,
    pub is_64_bit: bool,
}

impl AddImm {
    const ADD_MASK: u32   = 0b01111111_00_000000000000_00000_00000; // 64-bit ADD immediate
    const ADD_MASKED: u32 = 0b00010001_00_000000000000_00000_00000;
                         // 0b10010001_00_000000000001_00000_00000   
                         // 0b10010001_00_000000000001_00001_00000

    pub fn encode(&self) -> u32 {
        let size = if self.is_64_bit { 1 } else { 0 };
        let imm12 = (self.imm12 as u32) << 10;
        let rn = (self.rn as u32) << 5;
        let rd = self.rd as u32;

        Self::ADD_MASKED | (size << 31) | imm12 | rn | rd
    }

    pub fn decode(instr: u32) -> Option<Self> {
        if instr & Self::ADD_MASK == Self::ADD_MASKED {
            let rn = ((instr >> 5) & 0x1F) as u8;
            let rd = (instr & 0x1F) as u8;
            let imm12 = ((instr >> 10) & 0xFFF) as u16;
            let shift = ((instr >> 22) & 0x3) as u8;
            let is_64_bit = (instr >> 31) == 1;

            Some(AddImm {
                imm12,
                shift,
                rn,
                rd,
                is_64_bit,
            })
        } else {
            None
        }
    }
}


#[derive(Debug, PartialEq)]
pub struct LdrRegisterImmediate {
    pub imm12: u16,
    pub rn: u8,
    pub rt: u8,
    pub size: u8,
}

impl LdrRegisterImmediate {
    const MASK: u32 = 0x3fc00000;
    const MASKED: u32 = 0x39400000;

    pub fn encode(&self) -> Option<u32> {
        let size = (self.size as u32) << 0x1E;
        let imm12 = ((self.imm12 as u32) >> self.size) << 10;
        let rn = (self.rn as u32) << 5;
        let rt = self.rt as u32;

        let encoded = Self::MASKED | size | imm12 | rn | rt;

        if let Some(decoded) = Self::decode(encoded) {
            if decoded == *self {
                Some(encoded)
            } else {
                None
            }
        } else {
            None
        }
    }

    pub fn decode(instruction: u32) -> Option<Self> {
        if instruction & Self::MASK == Self::MASKED {
            let size = ((instruction >> 0x1E) & 0xFF) as u8;
            let imm12 = (((instruction >> 10) & 0xFFF) << size) as u16;
            let rn = ((instruction >> 5) & 0x1F) as u8;
            let rt = (instruction & 0x1F) as u8;
            return  Some(Self { imm12, rn, rt, size });
        }
        None
    }
}

#[derive(Debug, PartialEq)]
pub struct StrRegisterImmediate {
    pub imm12: u16,
    pub rn: u8,
    pub rt: u8,
    pub size: u8,
}

impl StrRegisterImmediate {
    const MASK: u32 = 0x3f000000;
    const MASKED: u32 = 0x39000000;

    pub fn encode(&self) -> Option<u32> {
        let size = (self.size as u32) << 0x1E;
        let imm12 = ((self.imm12 as u32) >> self.size) << 10;
        let rn = (self.rn as u32) << 5;
        let rt = self.rt as u32;

        let encoded = Self::MASKED | size | imm12 | rn | rt;
        if let Some(decoded) = Self::decode(encoded) {
            if decoded == *self {
                Some(encoded)
            } else {
                None
            }
        } else {
            None
        }
    }

    pub fn decode(instruction: u32) -> Option<Self> {
        if instruction & Self::MASK == Self::MASKED {
            let size = ((instruction >> 0x1E) & 0xFF) as u8;
            let imm12 = (((instruction >> 10) & 0xFFF) << size) as u16;
            let rn = ((instruction >> 5) & 0x1F) as u8;
            let rt = (instruction & 0x1F) as u8;
            return  Some(Self { imm12, rn, rt, size });
        }
        None
    }
}

#[derive(Debug, PartialEq)]
pub struct LdrswPostImmediate {
    pub imm9: u16,
    pub rn: u8,
    pub rt: u8,
    pub size: u8,
}

impl LdrswPostImmediate {
    const MASK: u32 = 0b111111100000000000000000000000;
    const MASKED: u32 = 0b111001100000000000000000000000;

    pub fn encode(&self) -> Option<u32> {
        let size = (self.size as u32) << 0x1E;
        let imm9 = ((self.imm9 as u32) >> self.size) << 10;
        let rn = (self.rn as u32) << 5;
        let rt = self.rt as u32;

        let encoded = Self::MASKED | size | imm9 | rn | rt;
        if let Some(decoded) = Self::decode(encoded) {
            if decoded == *self {
                Some(encoded)
            } else {
                None
            }
        } else {
            None
        }
    }

    pub fn decode(instruction: u32) -> Option<Self> {
        if instruction & Self::MASK == Self::MASKED {
            let size = ((instruction >> 0x1E) & 0xFF) as u8;
            let imm9 = (((instruction >> 10) & 0xFFF) << size) as u16;
            let rn = ((instruction >> 5) & 0x1F) as u8;
            let rt = (instruction & 0x1F) as u8;
            return Some(Self { imm9, rn, rt, size });
        }
        None
    }
}

pub struct CmpImmediate {
    pub imm12: u16,
    pub reg: u8,
    pub is_64_bit: bool,
}

impl CmpImmediate {
    const MASK: u32 = 0b011111111_0_000000000000_00000_11111;
    const MASKED: u32 = 0b011100010_0_000000000000_00000_11111;

    pub fn decode(instr: u32) -> Option<Self> {
        if instr & Self::MASK == Self::MASKED {
            let reg = ((instr >> 5) & 0b11111) as u8;
            let imm12 = ((instr >> 10) & 0b111111111111) as u16;
            let is_64_bit = (instr >> 31) == 1;

            Some(Self {
                reg,
                imm12,
                is_64_bit,
            })
        } else {
            None
        }
    }

    pub fn encode(&self) -> u32 {
        let sh = 0;
        let sf = if self.is_64_bit { 1 } else { 0 };
        let imm12 = (self.imm12 & 0b111111111111) as u32;
        let rn = (self.reg & 0b11111) as u32;

        Self::MASKED | (imm12 << 10) | (rn << 5) | (sf << 31) | (sh << 22)
    }
}

pub struct MovK {
    pub imm16: u32,
    pub rd: u8,
    pub lsl_16: bool,
    pub lsl_32: bool
}

impl MovK {
    const MASKED: u32 =     0b111100101_00_0000000000000000_00000;
                     //     0b111100101_00_0010000110000001_00000
            // LSL #16      0b111100101_01_0010000110000001_00000
        // Normal mov       0b110100101_01_0000000010011100_00000
                    //      0b111100101_10_0000000000000000_00000
                    //      0b111100101_01_0000000000000000_00000
// movk x8, #0x52, lsl #16  0b111100101_01_0000000001010010_01000
// movk x8, #0x52, lsl #32  0b111100101_10_0000000001010010_01000

    pub fn encode(&self) -> u32 {
        Self::MASKED | (if self.lsl_32 {1} else {0} << 22) | (if self.lsl_16 {1} else {0} << 21) | (self.imm16 << 5) | (self.rd as u32)
    }
}


pub struct MovZ { 
    pub imm16: u32,
    pub rd: u8,
    pub is_64_bit: bool,
}

impl MovZ {
    const MASKED: u32 = 0b010100101_00_0000000000000000_00000;

    pub fn encode(&self) -> u32 {
        (if self.is_64_bit {1} else {0} << 31) | Self::MASKED | (if self.imm16 > 0xFFFF {1} else {0} << 21) | (if self.imm16 > 0xFFFF {self.imm16 >> 16} else {self.imm16} << 5) | (self.rd as u32)
    }
    pub fn decode(instruction: u32) -> Self {
        if instruction & (1 << 21) == (1 << 21) {
            todo!("");
        } else {
            let is_64_bit = instruction & (1 << 31) == (1 << 31);
            let imm16 = (instruction >> 5) & 0xFFFF;
            let rd = (instruction & 0x1F) as u8;
            Self {
                imm16,
                rd,
                is_64_bit,
            }
        }
    }
}

pub struct LdrLiteralX { 
    pub imm19: u32,
    pub rd: u8,
}

impl LdrLiteralX {
    const MASKED: u32 = 0b01011000_0000000000000000000_00000;

    pub fn encode(&self) -> u32 {
        Self::MASKED | ({self.imm19} << 5) | (self.rd as u32)
    }
}

pub struct BLR { 
    pub imm26: u64,
}

impl BLR {
    const MASKED: u32 = 0b100101_000_00000000000000000000000;
                    //  0b100101_111_01110100011100011111000
                    //  0b101111_111_01110100011100011111000
    pub fn encode(&self) -> u32 {
        let overflow = self.imm26 > (u32::MAX as u64);
        let imm16: u32 = if overflow {
            (self.imm26 & 0xFFFFFF) as u32
        } else {
            self.imm26 as u32
        };
        
        Self::MASKED | if overflow { 0b111 << 23 } else {0} | (imm16 >> 2)
    }
}

pub struct BL { 
    pub imm26: u64,
}

impl BL {
    const MASKED: u32 = 0b000101_000_00000000000000000000000;

    pub fn encode(&self) -> u32 {
        let overflow = self.imm26 > (u32::MAX as u64);
        let imm16: u32 = if overflow {
            (self.imm26 & 0xFFFFFF) as u32
        } else {
            self.imm26 as u32
        };
        
        Self::MASKED | if overflow { 0b111 << 23 } else {0} | (imm16 >> 2)
    }
}