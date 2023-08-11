use skyline::{hooks::*, patching::Patch};
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

// References to FighterParamAccessor2::unk via LdrImmediate
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

// References to FighterParamAccessor2::unk via StrImmediate
static STR_UNK: [usize; 4] = [
    0x70a8dc,
    0x70a8e0,
    0x652ef4,
    0x652ef8,
];

// References to FighterParamAccessor2::unk_ref_count via LdrImmediate
static LDR_UNK_REF_COUNT: [usize; 1] = [
    0x652edc,
];

// References to FighterParamAccessor2::unk_ref_count via StrImmediate
static STR_UNK_REF_COUNT: [usize; 3] = [
    0x652ee8,
    0x70a91c,
    0x652f30,
];

// References to FighterParamAccessor2::unk2 via LdrImmediate
static LDR_UNK2: [usize; 6] = [
    0x70a918,
    0x721b3c,
    0x709a84,
    0x65121c,
    0x6530a8,
    0x721afc,
    
];

// References to FighterParamAccessor2::unk2 via StrImmediate
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

// References to FighterParamAccessor2::unk_ref_count via LdrImmediate
static LDR_UNK2_REF_COUNT: [usize; 6] = [
    0x721a3c,
    0x721b48,
    0x651208,
    0x651208,
    0x653094,
    0x653094,
];

// References to FighterParamAccessor2::unk_ref_count via StrImmediate
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
static ADD_MOVZ_LOCK: [usize; 7] = [
    0x721b50,
    0x651214,
    0x6530a0,
    0x70a95c,
    0x66ef34,
    0x65125c,
    0x6530e8,
];

// References to FighterParamAccessor2::entries_2 via a LdrswImmediate.
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

pub fn install() {
    /* Here, we patch all references to entries_2. */
    // Offset of entries_2 in our new struct.
    let entries_2_offset = 0x3860;

    for entry in LDRSW_ENTRIES_2 {
        unsafe {
            let ldrsw_instr = (getRegionAddress(Region::Text) as usize + entry) as *const u32;
            if let Some(mut ldrsw) = LdrswPostImmediate::decode(*ldrsw_instr) {
                ldrsw.imm9 = ldrsw.imm9 - 0x14F0 + entries_2_offset;
                // Need to use sky_memcpy instead of write
                Patch::in_text(entry).bytes(ldrsw.encode().to_le_bytes()).unwrap();
            } else {
                println!("Failed to decode LDRSW!: {:#x}, {:#x}", entry, *ldrsw_instr);
            }
        }
    }
}