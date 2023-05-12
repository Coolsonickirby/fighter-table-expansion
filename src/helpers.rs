use std::ffi::CString;

use crate::tables;

pub struct FighterInfo {
    pub fighter_name: String,
    pub fighter_kind: u64
}

// Thanks to https://stackoverflow.com/a/38406885
fn uppercase_first_letter(s: &str) -> String {
    let mut c = s.chars();
    match c.next() {
        None => String::new(),
        Some(f) => f.to_uppercase().collect::<String>() + c.as_str(),
    }
}

fn add_fighter_name(fighter_name: &str){
    let normal_fighter_name = uppercase_first_letter(fighter_name);
    let uppercase_fighter_name = fighter_name.to_uppercase();
    let lowercase_fighter_name = fighter_name.to_lowercase();
    unsafe {
        let index = crate::offsets::ACTUAL_FIGHTER_SIZE;

        if tables::FIGHTER_NAMES.table.len() < index + 1 {
            tables::FIGHTER_NAMES.push(&normal_fighter_name);
            tables::UPPERCASE_FIGHTER_NAMES.push(&uppercase_fighter_name);
            tables::LOWERCASE_FIGHTER_NAMES.push(&lowercase_fighter_name);
        } else{
            tables::FIGHTER_NAMES.table[index] = CString::new(normal_fighter_name).unwrap();
            tables::UPPERCASE_FIGHTER_NAMES.table[index] = CString::new(uppercase_fighter_name).unwrap();
            tables::LOWERCASE_FIGHTER_NAMES.table[index] = CString::new(lowercase_fighter_name).unwrap();
        }

        
        tables::FIGHTER_NAMES.patch();
        tables::UPPERCASE_FIGHTER_NAMES.patch();
        tables::LOWERCASE_FIGHTER_NAMES.patch();
    }
}

fn add_fighter_kind(fighter_kind: u64) {
    unsafe {
        let index = crate::offsets::ACTUAL_FIGHTER_SIZE;
        tables::FIGHTER_KIND_TO_INDEX.insert(fighter_kind, index as u32);
        
        if tables::FIGHTER_KIND_TABLE.table.len() < index + 1 {
            tables::FIGHTER_KIND_TABLE.push(fighter_kind);
        } else {
            tables::FIGHTER_KIND_TABLE.table[index] = fighter_kind;
        }
        
        if tables::FIGHTER_KIND_TABLE_2.table.len() < index + 1 {
            tables::FIGHTER_KIND_TABLE_2.push(fighter_kind);
        } else {
            tables::FIGHTER_KIND_TABLE_2.table[index] = fighter_kind;
        }

        tables::FIGHTER_KIND_TABLE.patch();
        tables::FIGHTER_KIND_TABLE_2.patch();
    }
}

pub fn add_fighter(fighter: &FighterInfo) {
    add_fighter_name(&fighter.fighter_name);
    add_fighter_kind(fighter.fighter_kind);
    unsafe {
        crate::offsets::ACTUAL_FIGHTER_SIZE += 1;
    }

    unsafe {
        tables::FIGHTER_COUNT_REFS.set_count(tables::FIGHTER_NAMES.table.len() as u16 + 1);
        tables::FIGHTER_COUNT_REFS_0X75.set_count(tables::FIGHTER_NAMES.table.len() as u16);
        
        tables::FIGHTER_KIND_PARAM_ACCESSOR_COUNT_REFS.set_count(tables::FIGHTER_KIND_TABLE_2.table.len() as u16);
        tables::FIGHTER_VTABLES.patch();
    }
}