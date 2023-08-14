use std::time::Duration;

use skyline::{hooks::*, patching::Patch, install_hooks, hook, install_hook};
use smash::{cpp, app::*, lib};

use crate::cpu::*;

#[repr(C)]
#[derive(Debug)]
pub struct FighterParamAccessor2Ex {
    pub fighter_param: cpp::SharedPtr<FighterParam>,
    pub fighter_param_motion: cpp::SharedPtr<lib::ParameterReceiver>, 
    pub fighter_param_thrown: cpp::SharedPtr<lib::ParameterReceiver>,
    pub spirits: cpp::SharedPtr<lib::ParameterReceiver>,
    pub amiibo: cpp::SharedPtr<lib::ParameterReceiver>,
    pub the_other_prcs: cpp::SharedPtr<()>,
    pub entries: [FPA2Entry; 256],
    pub entries_2: [FPA2Entry2; 256],
    pub unk: cpp::SharedPtr<lib::ParameterReceiver>,
    pub unk_ref_count: u64, // NOT an atomic
    pub unk2: cpp::SharedPtr<lib::ParameterReceiver>,
    pub unk2_ref_count: u64, // NOT an atomic
    pub lock: cpp::Mutex, // std::recursive_mutex
}

// References to FighterParamAccessor2::unk via LdrRegisterImmediate
static LDR_UNK: [usize; 26] = [
    0x651b94,
    0x652ef0,
    0x709aa4,
    0x709af8,
    0x70a8d8,
    0x7216c8,
    0x721708,
    0x33b5c7c,
    0x33b5c80,
    0x33b6364,
    0x34c8f98,
    0x34c8fa4,
    0x34ca058,
    0x34ca064,
    0x34cd520,
    0x34cd528,
    0x34cdfc4,
    0x34cf99c,
    0x34cdfc8,
    0x34ce1f4,
    0x34ce1fc,
    0x34cf9a4,
    0x34ca250,
    0x34ca258,
    0x34c6b30,
    0x34c6b38,
];

// References to FighterParamAccessor2::unk via StrRegisterImmediate
static STR_UNK: [usize; 8] = [
    0x70a8dc,
    0x70a8e0,
    0x7216cc,
    0x7216d0,
    0x651b98,
    0x651b9c,
    0x652ef4,
    0x652ef8,
];

// References to FighterParamAccessor2::unk_ref_count via LdrRegisterImmediate
static LDR_UNK_REF_COUNT: [usize; 4] = [
    0x652edc,
    0x651b80,
    0x721580,
    0x721714,
];

// References to FighterParamAccessor2::unk_ref_count via StrRegisterImmediate
static STR_UNK_REF_COUNT: [usize; 6] = [
    0x651b8c,
    0x651bd4,
    0x652ee8,
    0x70a91c,
    0x72171c,
    0x652f30,
];

// References to FighterParamAccessor2::unk2 via LdrRegisterImmediate
static LDR_UNK2: [usize; 8] = [
    0x70a918,
    0x721b3c,
    0x709a84,
    0x65121c,
    0x6530a8,
    0x721afc,
    0x33b5cbc,
    0x33b5cc0,
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

// References to FighterParamAccessor2::unk2_ref_count via LdrRegisterImmediate
static LDR_UNK2_REF_COUNT: [usize; 4] = [
    0x721a3c,
    0x721b48,
    0x651208,
    0x653094,
];

// References to FighterParamAccessor2::unk2_ref_count via StrRegisterImmediate
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
static ADD_MOVZ_LOCK: [usize; 8] = [
    0x720e94,
    0x72156c,
    0x721a28,
    0x6511fc,
    0x651b74,
    0x653088,
    0x652ed0,
    0x607b24,
];

// References to FighterParamAccessor2::entries_2 via a LdrswPostImmediate.
static LDRSW_ENTRIES_2: [usize; 67] = [
    0x34b0c8,
    0x34b1b4,
    0x60cf54,
    0x6306c0,
    0x6370e4,
    0x637964,
    0x637a40,
    0x638294,
    0x665218,
    0x6797b0,
    0x686d64,
    0x686da0,
    0x6871b0,
    0x69052c,
    0x6a6618,
    0x6a6cb4,
    0x6a9b08,
    0x6aaf38,
    0x6bdddc,
    0x6c93d8,
    0x6e1f08,
    0x6e22e0,
    0x6e2520,
    0x720fc0,
    0x721034,
    0x721114,
    0x7211bc,
    0x72124c,
    0x7212ec,
    0x7213a8,
    0x72143c,
    0x7214dc,
    0x77d7f0,
    0x77daac,
    0x77ddf4,
    0x90e928,
    0xb9f9d4,
    0xe62434,
    0xf02984,
    0x1083730,
    0x116be60,
    0x11b63a8,
    0x12ae584,
    0x1315f04,
    0x153e2d0,
    0x167aaa8,
    0x199ad40,
    0x1f99b7c,
    0x1f99bec,
    0x1f99c5c,
    0x1f99ccc,
    0x1f99d7c,
    0x20ad0c4,
    0x20ad5c0,
    0x22817dc,
    0x228182c,
    0x228189c,
    0x22e6e94,
    0x33de590,
    0x34c8cdc,
    0x34c8d0c,
    0x34ff224,
    0x34ffad8,
    0x3515dd8,

    0x85ae04,
    0x6ce8c8,
    0x6d063c,
];

// References to FighterParamAccessor2::entries_2 via a StrRegisterImmediate.
static STR_ENTRIES_2: [usize; 3] = [
    0x70a488,
    0x70a4d4,
    0x70a520,
];

#[hook(offset = 0x66ef48, inline)]
pub unsafe fn init_entries(ctx: &mut InlineCtx) {
    let table = *ctx.registers[20].x.as_ref() as *mut FighterParamAccessor2Ex;
    println!("[fpa2::init_entries] Instance: {:#x}", table as usize);
    println!("[fpa2::init_entries] Please look: {:#x}", table as usize + ENTRIES_2_OFFSET + 0x58 * std::mem::size_of::<FPA2Entry2>());
    println!("[fpa2::init_entries] Original Unk: {:#x}", table as usize + 0x1958);
    println!("[fpa2::init_entries] Original UnkRefCount: {:#x}", table as usize + 0x1968);
    println!("[fpa2::init_entries] Original Unk2: {:#x}", table as usize + 0x1970);
    println!("[fpa2::init_entries] Original Unk2RefCount: {:#x}", table as usize + 0x1980);
    println!("[fpa2::init_entries] Original Lock: {:#x}", table as usize + 0x1988);
    std::thread::sleep(Duration::from_secs(5));
    for entry in (*table).entries.iter_mut() {
        // entry.unk1 = 0;
        // entry.unk2 = 0;
        entry.unk3.vtable = (getRegionAddress(Region::Text) as *const ()).byte_offset(0x4f88b50);
        entry.unk4.vtable = (getRegionAddress(Region::Text) as *const ()).byte_offset(0x4f88b70);
        entry.unk3.unk = cpp::SharedPtr::null();
        entry.unk4.unk = cpp::SharedPtr::null();
    }
    (*table).entries_2.fill(FPA2Entry2 { fighter_param_index: 0, fighter_param_motion_index: 0, fighter_param_thrown_index: 0 });
    (*table).unk = cpp::SharedPtr::null();
    (*table).unk_ref_count = 0;
    (*table).unk2 = cpp::SharedPtr::null();
    (*table).unk2_ref_count = 0;
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
    
    install_hook!(init_entries);

    // Patch some accesses to lock. 
    Patch::in_text(0x709a74).bytes(MovZ {imm16: LOCK_OFFSET as u32, rd: 8, is_64_bit: false }.encode().to_le_bytes()).unwrap();
    Patch::in_text(0x66ef1c).bytes(MovZ {imm16: LOCK_OFFSET as u32, rd: 8, is_64_bit: false }.encode().to_le_bytes()).unwrap();

    // Here we patch all remainining references to lock.
    for entry in ADD_MOVZ_LOCK {
        unsafe {
            let movz_instr = (getRegionAddress(Region::Text) as usize + entry - 4) as *const u32;
            let mut movz = MovZ::decode(*movz_instr);
            movz.imm16 = LOCK_OFFSET as u32;

            Patch::in_text(entry - 4).bytes(movz.encode().to_le_bytes()).unwrap();
        }
    }

    // Here, we patch all remaining references to entries_2.
    for entry in LDRSW_ENTRIES_2 {
        unsafe {
            let ldrsw_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            if let Some(mut ldrsw) = LdrswPostImmediate::decode(*ldrsw_instr) {
                ldrsw.imm9 = ldrsw.imm9 - 0x14F0 + (ENTRIES_2_OFFSET as u16);

                Patch::in_text(entry).bytes(ldrsw.encode().unwrap().to_le_bytes()).unwrap();
            } else {
                println!("Failed to decode LDRSW!: {:#x}, {:#x}", entry, *ldrsw_instr);
            }
        }
    }
    for entry in STR_ENTRIES_2 {
        unsafe {
            let str_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            let mut str = StrRegisterImmediate::decode(*str_instr).unwrap();
            str.imm12 = str.imm12 - 0x14F0 + (ENTRIES_2_OFFSET as u16);

            Patch::in_text(entry).bytes(str.encode().unwrap().to_le_bytes()).unwrap();
        }
    }
    Patch::in_text(0x77d114).bytes(LdrRegisterImmediate {imm12: ENTRIES_2_OFFSET as u16, rn: 8, rt: 8, size: 2 }.encode().unwrap().to_le_bytes()).unwrap();

    // Here, we patch all references to unk.
    for entry in LDR_UNK {
        unsafe {
            let ldr_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            let mut ldr = LdrRegisterImmediate::decode(*ldr_instr).unwrap();
            ldr.imm12 = ldr.imm12 - 0x1958 + (UNK_OFFSET as u16);

            if let Some(encoded) = ldr.encode() {
                Patch::in_text(entry).bytes(ldr.encode().unwrap().to_le_bytes()).unwrap();
            } else {
                println!("Failed to re-encode LDR!: {:#x}, {:#x}", entry, *ldr_instr);
            }
        }
    }
    for entry in STR_UNK {
        unsafe {
            let str_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            let mut str = StrRegisterImmediate::decode(*str_instr).unwrap();
            str.imm12 = str.imm12 - 0x1958 + (UNK_OFFSET as u16);

            if let Some(encoded) = str.encode() {
                Patch::in_text(entry).bytes(str.encode().unwrap().to_le_bytes()).unwrap();
            } else {
                println!("Failed to re-encode STR!: {:#x}, {:#x}", entry, *str_instr);
            }
        }
    }
    // Here, we patch all references to unk_ref_count.
    for entry in LDR_UNK_REF_COUNT {
        unsafe {
            let ldr_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            let mut ldr = LdrRegisterImmediate::decode(*ldr_instr).unwrap();
            ldr.imm12 = ldr.imm12 - 0x1968 + (UNK_REF_COUNT_OFFSET as u16);
            ldr.size = 3;

            if let Some(encoded) = ldr.encode() {
                Patch::in_text(entry).bytes(ldr.encode().unwrap().to_le_bytes()).unwrap();
            } else {
                println!("Failed to re-encode LDR!: {:#x}, {:#x}", entry, *ldr_instr);
            }
        }
    }
    for entry in STR_UNK_REF_COUNT {
        unsafe {
            let str_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            let mut str = StrRegisterImmediate::decode(*str_instr).unwrap();
            str.imm12 = str.imm12 - 0x1968 + (UNK_REF_COUNT_OFFSET as u16);
            str.size = 3;

            if let Some(encoded) = str.encode() {
                Patch::in_text(entry).bytes(str.encode().unwrap().to_le_bytes()).unwrap();
            } else {
                println!("Failed to re-encode STR!: {:#x}, {:#x}", entry, *str_instr);
            }
        }
    }
    // Here, we patch all references to unk2.
    for entry in LDR_UNK2 {
        unsafe {
            let ldr_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            let mut ldr = LdrRegisterImmediate::decode(*ldr_instr).unwrap();
            ldr.imm12 = ldr.imm12 - 0x1970 + (UNK2_OFFSET as u16);

            if let Some(encoded) = ldr.encode() {
                Patch::in_text(entry).bytes(ldr.encode().unwrap().to_le_bytes()).unwrap();
            } else {
                println!("Failed to re-encode LDR!: {:#x}, {:#x}", entry, *ldr_instr);
            }
        }
    }
    for entry in STR_UNK2 {
        unsafe {
            let str_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            let mut str = StrRegisterImmediate::decode(*str_instr).unwrap();
            str.imm12 = str.imm12 - 0x1970 + (UNK2_OFFSET as u16);

            if let Some(encoded) = str.encode() {
                Patch::in_text(entry).bytes(str.encode().unwrap().to_le_bytes()).unwrap();
            } else {
                println!("Failed to re-encode STR!: {:#x}, {:#x}", entry, *str_instr);
            }
        }
    }
    // Here, we patch all references to unk2_ref_count.
    for entry in LDR_UNK2_REF_COUNT {
        unsafe {
            let ldr_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            let mut ldr = LdrRegisterImmediate::decode(*ldr_instr).unwrap();
            ldr.imm12 = ldr.imm12 - 0x1980 + (UNK2_REF_COUNT_OFFSET as u16);
            ldr.size = 3;

            if let Some(encoded) = ldr.encode() {
                Patch::in_text(entry).bytes(ldr.encode().unwrap().to_le_bytes()).unwrap();
            } else {
                println!("Failed to re-encode LDR!: {:#x}, {:#x}", entry, *ldr_instr);
            }
        }
    }
    for entry in STR_UNK2_REF_COUNT {
        unsafe {
            let str_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            let mut str = StrRegisterImmediate::decode(*str_instr).unwrap();
            str.imm12 = str.imm12 - 0x1980 + (UNK2_REF_COUNT_OFFSET as u16);
            str.size = 3;

            if let Some(encoded) = str.encode() {
                Patch::in_text(entry).bytes(str.encode().unwrap().to_le_bytes()).unwrap();
            } else {
                println!("Failed to re-encode STR!: {:#x}, {:#x}", entry, *str_instr);
            }
        }
    }
}