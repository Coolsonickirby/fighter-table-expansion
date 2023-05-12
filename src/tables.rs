use std::collections::HashMap;

use crate::table::*;
use once_cell::sync::Lazy;

use crate::offsets;

pub static mut FIGHTER_NAMES: Lazy<StringRelocatedTable> =
    Lazy::new(|| StringRelocatedTable::new(offsets::FIGHTER_NAMES_OFFSET, offsets::FIGHTER_SIZE));
pub static mut UPPERCASE_FIGHTER_NAMES: Lazy<StringRelocatedTable> = Lazy::new(|| {
    StringRelocatedTable::new(
        offsets::UPPERCASE_FIGHTER_NAMES_TABLE_OFFSET,
        offsets::FIGHTER_SIZE,
    )
});
pub static mut LOWERCASE_FIGHTER_NAMES: Lazy<StringRelocatedTable> = Lazy::new(|| {
    StringRelocatedTable::new(
        offsets::LOWERCASE_FIGHTER_NAMES_TABLE_OFFSET,
        offsets::FIGHTER_SIZE,
    )
});

// Used for general stuff?
pub static mut FIGHTER_KIND_TABLE: Lazy<HashRelocatedTable> = Lazy::new(|| {
    HashRelocatedTable::new(offsets::FIGHTER_KIND_TABLE_OFFSET, offsets::FIGHTER_SIZE)
});

// Used for FighterParamAccessor2
pub static mut FIGHTER_KIND_TABLE_2: Lazy<HashRelocatedTable> = Lazy::new(|| {
    HashRelocatedTable::new(offsets::FIGHTER_KIND_TABLE_2_OFFSET, unsafe { offsets::ACTUAL_FIGHTER_SIZE })
});

pub static mut FIGHTER_ID_BY_ARTICLE_IDX: Lazy<u32RelocatedTable> = Lazy::new(|| {
    u32RelocatedTable::new(offsets::FIGHTER_ID_BY_ARTICLE_IDX_OFFSET, offsets::FIGHTER_ID_BY_ARTICLE_IDX_SIZE)
});

pub static mut FIGHTER_VTABLES: Lazy<VtableRelocatedTable> = Lazy::new(|| {
    VtableRelocatedTable::new(offsets::FIGHTER_VTABLES_OFFSET, unsafe { offsets::ACTUAL_FIGHTER_SIZE })
});

pub static mut FIGHTER_COUNT_REFS: Lazy<TableRefs> =
    Lazy::new(|| TableRefs::new(0x76, vec![
        0x2e3538, // used for calculation
        0x2e6520, // used for calculation
        0x3315c8, // used for calculation
        0x6d9ffc, // unsure but crashes so better safe than sorry
        // 0x160b5a8, // unsure - need to confirm later
        // 0x160b6dc, // unsure - need to confirm later
        // 0x26c54e8, // unsure - need to confirm later
        // 0x339f750, // unsure - need to confirm later
    ]));

pub static mut FIGHTER_KIND_PARAM_ACCESSOR_COUNT_REFS: Lazy<TableRefs> =
    Lazy::new(|| TableRefs::new(0x5E, vec![
        0x00d1a30,
        0x02f5f88, // unk
        // 0x0331d98, // near fighter kind table but not too sure about it's purpose
        0x3917a04, // Lua Related
        0x3917f94, // Lua Related
        0x391ab88, // Lua Related
        0x391aba4, // Lua Related
        0x391af5c, // Lua Related
        0x391afbc, // Lua Related
        0x391b138, // Lua Related
        0x391b22c, // Lua Related
        0x391b594, // Lua Related
        0x391b6e4, // Lua Related
        0x391b964, // Lua Related
    ]));

pub static mut FIGHTER_COUNT_REFS_0X75: Lazy<TableRefs> =
    Lazy::new(|| TableRefs::new(0x75, vec![
        // 0x2e3538, // used for calculation
        // 0x2e6520, // used for calculation
        // 0x3315c8, // used for calculation
        // 0x6d9ffc, // unsure but crashes so better safe than sorry
        // // 0x160b5a8, // unsure - need to confirm later
        // // 0x160b6dc, // unsure - need to confirm later
        // // 0x26c54e8, // unsure - need to confirm later
        // // 0x339f750, // unsure - need to confirm later
        0x01ba590, // Memory Managment Related
        0x01ba6d4, // Memory Managment Related
        0x01ba590, // Memory Managment Related
        0x01ba6d4, // Memory Managment Related
        0x01baa94, // Memory Managment Related
        0x01bab04, // Memory Managment Related
        0x02a3908, // ARC Magic Check?
        0x02a3b08, // ARC Magic Check?
        0x02a3c70, // ARC Magic Check?
        0x02a3dec, // ARC Magic Check?
        0x02a4da8, // ARC Magic Check?
        0x02a4fa8, // ARC Magic Check?
        0x02a5110, // ARC Magic Check?
        0x02a5308, // ARC Magic Check?
        0x02a5504, // ARC Magic Check?
        0x02a56f4, // ARC Magic Check?
        0x02a6638, // ARC Magic Check?
        0x02a6838, // ARC Magic Check?
        0x02a69a0, // ARC Magic Check?
        0x02a7978, // ARC Magic Check?
        0x02a7b78, // ARC Magic Check?
        0x02a7ce0, // ARC Magic Check?
        0x02a8bc8, // ARC Magic Check?
        0x02a8dc8, // ARC Magic Check?
        0x02a8f30, // ARC Magic Check?
        0x02a9128, // ARC Magic Check?
        // 0x02dfe24, // undecided - looks related to AI
        0x02e34f0, // used for calculation
        0x02e64dc, // used for calculation
        // 0x03316ec, // undecided - looks like it's for fighter kind table
        // 0x033174c, // undecided - looks like it's for fighter kind table
        // 0x0331784, // undecided - looks like it's for fighter kind table
        // 0x03318d8, // undecided - looks like it's for fighter kind table
        // 0x03319b0, // undecided - looks like it's for fighter kind table
        // 0x0331ab0, // undecided - looks like it's for fighter kind table
        0x0620b54, // not a table lookup (I think)
        0x063228c, // not a table lookup (also code in ghidra not genereated + instr after is b.eq and not b.hi)
        0x06eeec8, // undecided - looks like it's a fighter id check but set up weird? Need to take a more in-depth look later
        0x082c870, // undecided - looks like it's a fighter id check but set up weird? Need to take a more in-depth look later
        0x08bc32c, // undecided - looks like it's a fighter id check but set up weird? Need to take a more in-depth look later
        0x090a3c8, // undecided - looks like it's a fighter id check but set up weird? Need to take a more in-depth look later
        0x09a7494, // undecided - looks like it's a fighter id check but set up weird? Need to take a more in-depth look later
        0x0a4a81c, // undecided - looks like it's a fighter id check but set up weird? Need to take a more in-depth look later
        0x0a67afc, // undecided - looks like it's a fighter id check but set up weird? Need to take a more in-depth look later
        0x0abdec0, // undecided - looks like it's a fighter id check but set up weird? Need to take a more in-depth look later
        0x0b603b8, // undecided - looks like it's a fighter id check but set up weird? Need to take a more in-depth look later
        0x0c08e30, // undecided - looks like it's a fighter id check but set up weird? Need to take a more in-depth look later
        0x0f549e0, // used for calculation
        0x0fb8c6c, // no idea
        0x1081b44, // undecided - looks like it's a fighter id check but set up weird? Need to take a more in-depth look later
        0x116f234, // undecided - looks like it's a fighter id check but set up weird? Need to take a more in-depth look later
        0x11d9764, // used for calculation
        0x15bad78, // used for calculation?
        0x15bae68, // used for calculation?
        0x15bc180, // used for items?
        0x15bd2d0, // used for calculation?
        0x15bd394, // used for calculation?
        0x15bd424, // used for items?
        0x15da568, // used for items?
        0x15da748, // used for something that's not fighter related
        0x15da7f4, // used for something that's not fighter related
        0x15db6e4, // used for items
        0x17e7c5c, // idk
        // 0x23a84b8, // INVESTIGATE LATER!
        // 0x33ab610, // for projectile article. comment out if it breaks the switch case ig
        // 0x33ac548, // for projectile article. comment out if it breaks the switch case ig
        // 0x33ad4a8, // for projectile article. comment out if it breaks the switch case ig
        // 0x33ae408, // for projectile article. comment out if it breaks the switch case ig
        // 0x341a980, // for projectile article. comment out if it breaks the switch case ig
        0x376f918, // UI Layout Related
        0x3780a00, // UI Layout Related
        0x3780cc4, // UI Layout Related
        0x3780ff4, // UI Layout Related
        0x3793d68, // UI Layout Related
        0x3793ff0, // UI Layout Related
        0x3964f6c, // some magic check
]));    

pub static mut FIGHTER_KIND_TO_INDEX: Lazy<HashMap<u64, u32>> = Lazy::new(|| HashMap::new());