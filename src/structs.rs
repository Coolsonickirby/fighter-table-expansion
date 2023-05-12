#[repr(C)]
#[derive(Debug, Clone)]
pub struct FirstFighterDatPTR {
    pub another_pointer: *const FirstFighterDatPtrChild,
    pub some_number: u64
}

#[repr(C)]
#[derive(Debug, Clone)]
pub struct FirstFighterDatPtrChild {
    pub unk_1: u64,
    pub some_func_ptr_1: *const (),
    pub unk_2: u64,
    pub unk_3: u64,
    pub unk_4: u64,
    pub unk_5: u64,
    pub some_func_ptr_2: *const (),
    pub some_func_ptr_3: *const (),
    pub some_func_ptr_4: *const (),
    pub some_func_ptr_5: *const (),
    pub some_func_ptr_6: *const (),
    pub func_ptr_that_returns_0: *const (),
    pub unk_6: u64, // 0
    pub unk_7: u64, // 0
}

#[repr(C)]
#[derive(Debug, Clone)]
pub struct SecondFighterDatPTR {
    pub havel_hash_1: u64, //?
    pub havel_hash_2: u64, //?
    pub throw_hash: u64, //?
    pub havel_hash_3: u64, //?
    pub some_number: u64, // 9
    pub some_ptr: *const u64,
    pub unk_1: u64, // 0
    pub unk_2: u64, // 0
}

#[repr(C)]
#[derive(Debug, Clone)]
pub struct ThirdFighterDatPTR {
    pub some_ptr: ThirdFighterDatPtrChild,
    pub some_number: u64
}

#[repr(C)]
#[derive(Debug, Clone)]
pub struct ThirdFighterDatPtrChild {
    pub data: [u8; 504],
}

#[repr(C)]
#[derive(Debug, Clone)]
pub struct FourthFighterDatPTR {
    pub some_ptr: FourthFighterDatPtrChild,
    pub unk_1: u32, // 2
    pub unk_2: u32, // 4
}

#[repr(C)]
#[derive(Debug, Clone)]
pub struct FourthFighterDatPtrChild {
    pub havel_hash: u64,
    pub handl_hash: u64,
}


#[repr(C)]
#[derive(Debug, Clone)]
pub struct FighterDAT {
    pub fighter_kind: u64,
    pub dat_ptr_1: *const u64, // FirstFighterDatPTR,
    pub dat_ptr_2: *const u64, // SecondFighterDatPTR,
    pub dat_ptr_3: *const u64, // ThirdFighterDatPTR,
    pub dat_ptr_4: *const u64, // to hash called havel
    pub have_hash: u64, // actually hash called have
    pub another_ptr: *const u64, // FourthFighterDatPTR,
    pub unk: u64, // 0xffffffff
    pub top_hash: u64, // actually hash called top
    pub unk_2: u64, // all 0
}