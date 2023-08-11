use skyline::{hooks::*, patching::Patch, install_hooks, hook};
use smash::{cpp, app::*, lib};

use crate::cpu::*;

#[repr(C)]
pub struct FighterParamAccessor2Ex {
    pub fighter_param: cpp::SharedPtr<FighterParam>,
    pub fighter_param_motion: cpp::SharedPtr<lib::ParameterReceiver>, 
    pub fighter_param_thrown: cpp::SharedPtr<lib::ParameterReceiver>,
    pub spirits: cpp::SharedPtr<lib::ParameterReceiver>,
    pub amiibo: cpp::SharedPtr<lib::ParameterReceiver>,
    pub the_other_prcs: cpp::SharedPtr<()>,
    pub entries: [FPA2Entry; 256],
    pub entries_2: [FPA2Entry2; 256],
    pub unk: cpp::SharedPtr<()>,
    pub unk_ref_count: u32, // NOT an atomic
    pub unk2: cpp::SharedPtr<lib::ParameterReceiver>,
    pub unk2_ref_count: u32, // NOT an atomic
    pub lock: cpp::Mutex, // std::recursive_mutex
}

// References to FighterParamAccessor2::unk via LdrRegisterImmediate
static LDR_UNK: [usize; 10] = [
    0x070a8d8,
    0x0709aa4,
    0x0709af8,
    0x34cdfc4,
    0x0652ef0,
    0x34cf99c,
    0x34cdfc8,
    0x34ce1f4,
    0x34ce1fc,
    0x34cf9a4,
];

// References to FighterParamAccessor2::unk via StrRegisterImmediate
static STR_UNK: [usize; 4] = [
    0x70a8dc,
    0x70a8e0,
    0x652ef4,
    0x652ef8,
];

// References to FighterParamAccessor2::unk_ref_count via LdrRegisterImmediate
static LDR_UNK_REF_COUNT: [usize; 1] = [
    0x652edc,
];

// References to FighterParamAccessor2::unk_ref_count via StrRegisterImmediate
static STR_UNK_REF_COUNT: [usize; 3] = [
    0x652ee8,
    0x70a91c,
    0x652f30,
];

// References to FighterParamAccessor2::unk2 via LdrRegisterImmediate
static LDR_UNK2: [usize; 6] = [
    0x70a918,
    0x721b3c,
    0x709a84,
    0x65121c,
    0x6530a8,
    0x721afc,
];

// References to FighterParamAccessor2::unk2 via StrRegisterImmediate
static STR_UNK2: [usize; 10] = [
    0x721b04,
    0x721b00,
    0x70a920,
    0x70a924,
    0x66ef3c,
    0x66ef38,
    0x651220,
    0x6530ac,
    0x651224,
    0x6530b0,
];

// References to FighterParamAccessor2::unk_ref_count via LdrRegisterImmediate
static LDR_UNK2_REF_COUNT: [usize; 4] = [
    0x721a3c,
    0x721b48,
    0x651208,
    0x653094,
];

// References to FighterParamAccessor2::unk_ref_count via StrRegisterImmediate
static STR_UNK2_REF_COUNT: [usize; 7] = [
    0x721b50,
    0x651214,
    0x6530a0,
    0x70a95c,
    0x66ef34,
    0x65125c,
    0x6530e8,
];

// References to FighterParamAccessor2::lock via an AddRegister/MovZ pair.
static ADD_MOVZ_LOCK: [usize; 5] = [
    // 0x709a7c,
    0x721a28,
    0x6511fc,
    0x653088,
    0x652ed0,
    // 0x66ef28,
    0x607b24,
];

// References to FighterParamAccessor2::entries_2 via a LdrswPostImmediate.
static LDRSW_ENTRIES_2: [usize; 9] = [
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

#[hook(offset = 0x70a488, inline)]
pub unsafe fn some_iter(ctx: &mut InlineCtx) {
    let ptr = *ctx.registers[15].x.as_ref() as usize;
    let w = *ctx.registers[16].w.as_ref() as u32;
    *((ptr + ENTRIES_2_OFFSET) as *mut u32) = w;
}

#[hook(offset = 0x70a4d4, inline)]
pub unsafe fn some_iter2(ctx: &mut InlineCtx) {
    let ptr = *ctx.registers[15].x.as_ref() as usize;
    let w = *ctx.registers[16].w.as_ref() as u32;
    *((ptr + ENTRIES_2_OFFSET + 8) as *mut u32) = w;
}

#[hook(offset = 0x70a520, inline)]
pub unsafe fn some_iter3(ctx: &mut InlineCtx) {
    let ptr = *ctx.registers[15].x.as_ref() as usize;
    let w = *ctx.registers[16].w.as_ref() as u32;
    *((ptr + ENTRIES_2_OFFSET + 4) as *mut u32) = w;
}

#[hook(offset = 0x66ef48, inline)]
pub unsafe fn init_entries(ctx: &mut InlineCtx) {
    let table = *ctx.registers[20].x.as_ref() as *mut FighterParamAccessor2Ex;
    println!("[fpa2::init_entries] Instance: {:#x}", table as usize);
    for entry in (*table).entries.iter_mut() {
        entry.unk1 = 0;
        entry.unk2 = 0;
        entry.unk3.vtable = (getRegionAddress(Region::Text) as *const ()).byte_offset(0x4f88b50);
        entry.unk4.vtable = (getRegionAddress(Region::Text) as *const ()).byte_offset(0x4f88b70);
        entry.unk3.unk = cpp::SharedPtr::null();
        entry.unk4.unk = cpp::SharedPtr::null();
    }
    (*table).entries_2.fill(FPA2Entry2 { unk1: 0, unk2: 0, unk3: 0 });
}

// Offset of entries_2 in our new struct.
const ENTRIES_2_OFFSET: usize = 0x3860;
// Offset of unk in our new struct.
const UNK_OFFSET: usize = 0x4460;
// Offset of unk_ref_count in our new struct.
const UNK_REF_COUNT_OFFSET: usize = 0x4470;
// Offset of unk2 in our new struct.
const UNK2_OFFSET: usize = 0x4478;
// Offset of unk2_ref_count in our new struct.
const UNK2_REF_COUNT_OFFSET: usize = 0x4488;
// Offset of lock in our new struct.
const LOCK_OFFSET: usize = 0x4490;

const CLASS_SIZE: usize = std::mem::size_of::<FighterParamAccessor2Ex>();

pub fn install() {
    // Patch the class size.
    Patch::in_text(0x66ee50).bytes(MovZ {imm16: CLASS_SIZE as u32, rd: 1, is_64_bit: false }.encode().to_le_bytes()).unwrap();
    Patch::in_text(0x66ee70).bytes(MovZ {imm16: CLASS_SIZE as u32, rd: 8, is_64_bit: false }.encode().to_le_bytes()).unwrap();

    // Patch entries accesses that go backwards from entries_2's start.
    Patch::in_text(0x709d5c).bytes(MovZ {imm16: ENTRIES_2_OFFSET as u32, rd: 8, is_64_bit: false }.encode().to_le_bytes()).unwrap();
    Patch::in_text(0x709b00).bytes(MovZ {imm16: ENTRIES_2_OFFSET as u32, rd: 8, is_64_bit: false }.encode().to_le_bytes()).unwrap();
    Patch::in_text(0x70c330).bytes(MovZ {imm16: ENTRIES_2_OFFSET as u32, rd: 8, is_64_bit: false }.encode().to_le_bytes()).unwrap();

    // NOP and inline hook in a few places where the game writes to entries_2.
    Patch::in_text(0x70a488).nop().unwrap();
    Patch::in_text(0x70a4d4).nop().unwrap();
    Patch::in_text(0x70a520).nop().unwrap();
    install_hooks!(some_iter, some_iter2, some_iter3);

    // Patch some accesses to lock. 
    Patch::in_text(0x709a74).bytes(MovZ {imm16: LOCK_OFFSET as u32, rd: 8, is_64_bit: false }.encode().to_le_bytes()).unwrap();
    Patch::in_text(0x66ef1c).bytes(MovZ {imm16: LOCK_OFFSET as u32, rd: 8, is_64_bit: false }.encode().to_le_bytes()).unwrap();

    // Here we patch all remainining references to lock.
    for entry in ADD_MOVZ_LOCK {
        unsafe {
            let movz_instr = (getRegionAddress(Region::Text) as usize + entry - 4) as *const u32;
            let mut movz = MovZ::decode(*movz_instr);
            movz.imm16 = LOCK_OFFSET as u32;

            Patch::in_text(entry).bytes(movz.encode().to_le_bytes()).unwrap();
        }
    }

    // Here, we patch all remaining references to entries_2.
    for entry in LDRSW_ENTRIES_2 {
        unsafe {
            let ldrsw_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            if let Some(mut ldrsw) = LdrswPostImmediate::decode(*ldrsw_instr) {
                ldrsw.imm9 = ldrsw.imm9 - 0x14F0 + (ENTRIES_2_OFFSET as u16);

                Patch::in_text(entry).bytes(ldrsw.encode().to_le_bytes()).unwrap();
            } else {
                println!("Failed to decode LDRSW!: {:#x}, {:#x}", entry, *ldrsw_instr);
            }
        }
    }

    // Here, we patch all references to unk.
    for entry in LDR_UNK {
        unsafe {
            let ldr_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            let mut ldr = LdrRegisterImmediate::decode(*ldr_instr).unwrap();
            ldr.imm12 = ldr.imm12 - 0x1958 + (UNK_OFFSET as u16);

            Patch::in_text(entry).bytes(ldr.encode().to_le_bytes()).unwrap();
        }
    }
    for entry in STR_UNK {
        unsafe {
            let str_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            let mut str = StrRegisterImmediate::decode(*str_instr).unwrap();
            str.imm12 = str.imm12 - 0x1958 + (UNK_OFFSET as u16);

            Patch::in_text(entry).bytes(str.encode().to_le_bytes()).unwrap();
        }
    }
    // Here, we patch all references to unk_ref_count.
    for entry in LDR_UNK_REF_COUNT {
        unsafe {
            let ldr_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            let mut ldr = LdrRegisterImmediate::decode(*ldr_instr).unwrap();
            ldr.imm12 = ldr.imm12 - 0x1968 + (UNK_REF_COUNT_OFFSET as u16);

            Patch::in_text(entry).bytes(ldr.encode().to_le_bytes()).unwrap();
        }
    }
    for entry in STR_UNK_REF_COUNT {
        unsafe {
            let str_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            let mut str = StrRegisterImmediate::decode(*str_instr).unwrap();
            str.imm12 = str.imm12 - 0x1968 + (UNK_REF_COUNT_OFFSET as u16);

            Patch::in_text(entry).bytes(str.encode().to_le_bytes()).unwrap();
        }
    }
    // Here, we patch all references to unk2.
    for entry in LDR_UNK2 {
        unsafe {
            let ldr_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            let mut ldr = LdrRegisterImmediate::decode(*ldr_instr).unwrap();
            ldr.imm12 = ldr.imm12 - 0x1970 + (UNK2_OFFSET as u16);

            Patch::in_text(entry).bytes(ldr.encode().to_le_bytes()).unwrap();
        }
    }
    for entry in STR_UNK2 {
        unsafe {
            let str_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            let mut str = StrRegisterImmediate::decode(*str_instr).unwrap();
            str.imm12 = str.imm12 - 0x1970 + (UNK2_OFFSET as u16);

            Patch::in_text(entry).bytes(str.encode().to_le_bytes()).unwrap();
        }
    }
    // Here, we patch all references to unk2_ref_count.
    for entry in LDR_UNK2_REF_COUNT {
        unsafe {
            let ldr_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            let mut ldr = LdrRegisterImmediate::decode(*ldr_instr).unwrap();
            ldr.imm12 = ldr.imm12 - 0x1980 + (UNK2_REF_COUNT_OFFSET as u16);

            Patch::in_text(entry).bytes(ldr.encode().to_le_bytes()).unwrap();
        }
    }
    for entry in STR_UNK2_REF_COUNT {
        unsafe {
            let str_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            let mut str = StrRegisterImmediate::decode(*str_instr).unwrap();
            str.imm12 = str.imm12 - 0x1980 + (UNK2_REF_COUNT_OFFSET as u16);

            Patch::in_text(entry).bytes(str.encode().to_le_bytes()).unwrap();
        }
    }
}