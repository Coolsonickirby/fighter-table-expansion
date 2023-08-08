#![feature(array_windows)]
#![feature(pointer_byte_offsets)]
/* to-do (in no particular order) (percentages are just a rough estimation (also they look cool)):
 * - look into 0x6079b0
 * 
 * 
 * notes:
 * 0x17f0fd0 -> works with manual modification in gdb (fixing this will allow us to at least get in a match with a added fighter kind)
 * (although said added kind is being modified into roy's id)
 * 
 * - Fix the recursive dir info bug in ARCropolis (confirm if this is an issue with fighters first)
 *      - confirmed it is an issue with fighters ;_;
 * - Add the fighter to the fighter dir infos -> Done with test fighter
 * - Expand the fighter tables (90%)
 *      - Expand the TitleCase fighter names   (100%)                         (uses StringRelocatedTable)
 *      - Expand the UPPERCASE fighter names   (100%)                         (uses StringRelocatedTable)
 *      - Expand the lowercase fighter names   (100%)                         (uses StringRelocatedTable)
 *      - Expand the FIGHTER_KIND_X            (100%)                           (uses HashRelocatedTable)
 *      - Expand the FIGHTER_ID_BY_ARTICLE_IDX (100%)                            (uses u32RelocatedTable)
 *      - Expand the FIGHTER_VTABLES           (100%)            (need to implement VtableRelocatedTable)
 *      - Expand the FighterParamAccessor2       (0%)                    (being a major pita rn tbh lmao)
 *          - Expand the inner fighter_entries array: two approaches, both suck
 * - Hook functions that look up fighter stuff and expand (10%?)
 *      - Expanded the fighter_kind -> id lookup (100%)
 *      - some other functions that I do not know about(?)
 * - Patch all fighter count checks if there are any (100%)
 *      - Some checks use 75 instead of 76 -> Done
 *      - Some checks are 0x5E instead of 75/76 -> Done
 *      - Filter out instructions that don't affect fighter stuff -> Done
 * - Add references to your new fighters in all prcs
 * - a handful of other stuff I'm probably missing
 * - Decompile and re-write a fighter nro (workaround: use another fighter NRO and switch out the key name (as well as the extern function?))
 */

use helpers::add_fighter;
use skyline::hooks::{Region, getRegionAddress};
use structs::FighterDAT;

mod fpa2;
mod cpu;
mod refs;
mod table;
mod offsets;
mod tables;
mod function_hooks;
mod hooks;
mod globals;
mod helpers;
mod structs;


#[skyline::main(name = "fighter-addition")]
pub fn main() {
    std::panic::set_hook(Box::new(|info| {
        let location = info.location().unwrap();

        let msg = match info.payload().downcast_ref::<&'static str>() {
            Some(s) => *s,
            None => {
                match info.payload().downcast_ref::<String>() {
                    Some(s) => &s[..],
                    None => "Box<Any>",
                }
            },
        };

        let err_msg = format!("manager has panicked at '{}', {}", msg, location);
        skyline::error::show_error(
            69,
            "manager has panicked! Please open the details and send a screenshot to the developer, then close the game.\n\0",
            err_msg.as_str(),
        );
    }));

    unsafe {
        for x in 0..tables::FIGHTER_ID_BY_ARTICLE_IDX.table.len() {
            if tables::FIGHTER_ID_BY_ARTICLE_IDX.table[x] == 2 {
                println!("Article IDX {:#x} matches Fighter ID 2", x);
            }
        }
    }


    function_hooks::install();

        
    add_fighter(&helpers::FighterInfo { 
        fighter_name: String::from("roy"), // set to Roy so it loads stuff from Roy's directories, but just change the name for new fighter
        fighter_kind: 0x11324a5d7f // FIGHTER_KIND_ADOL
    });
        
    // skyline::patching::Patch::in_text(0x6d9ffc).bytes(0x7101D81F_u32.to_le_bytes()).unwrap();
}
