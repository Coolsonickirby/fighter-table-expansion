use skyline::{hook, install_hooks};



use crate::fpa2;
use crate::offsets;
use crate::tables;
static mut INSTALLED: bool = false;

// #[hook(offset = offsets::CREATE_STATUS_SCRIPT_FOR_ARTICLE - 4, inline)]
// fn create_status_script_for_article_inline_before(ctx: &mut InlineCtx) {
//     unsafe {
//         let id = *ctx.registers[22].x.as_ref();
//         println!("Article ID: {} - {:#x}", id, id);
//     }
// }

// #[hook(offset = offsets::CREATE_STATUS_SCRIPT_FOR_ARTICLE, inline)]
// fn create_status_script_for_article_inline_jump(ctx: &mut InlineCtx) {
//     unsafe {
//         let id = *ctx.registers[8].x.as_ref();
//         println!("Fighter ID: {} - {:#x}", id, id);
//         println!("----------------------------------------");
//     }
// }

mod create_agent_fighter {
    use crate::offsets;
    use crate::tables;
    use skyline::hook;
    use skyline::hooks::getRegionAddress;
    use skyline::hooks::Region;
    use skyline::install_hooks;
    use smash::{
        app::{BattleObject, BattleObjectModuleAccessor}, lua_State,
        phx::Hash40,
    };

    #[hook(offset = offsets::CREATE_AGENT_FIGHTER_ANIMCMD_EFFECT_FOR_FIGHTER)]
    fn create_agent_fighter_animcmd_effect_for_fighter(
        battleObject: u64,
        boma: &mut BattleObjectModuleAccessor,
        lua_state: &mut lua_State,
    ) -> *const u64 {
        unsafe {
            let original_kind = *((battleObject + 0xC) as *const u32);

            if original_kind == 0x5e {
                *((battleObject + 0xC) as *mut u32) = 0x1A;
            }

            println!(
                "[create_agent_fighter_animcmd_effect_for_fighter] Fighter Kind: {} - {:#x}",
                original_kind, original_kind
            );
            let original = call_original!(battleObject, boma, lua_state);
            original
        }
    }

    #[hook(offset = offsets::CREATE_AGENT_FIGHTER_ANIMCMD_EFFECT_SHARE_FOR_FIGHTER)]
    fn create_agent_fighter_animcmd_effect_share_for_fighter(
        mut kind: u32,
        battleObject: u64,
        boma: &mut BattleObjectModuleAccessor,
        lua_state: &mut lua_State,
    ) -> *const u64 {
        unsafe {
            let original_kind = kind;

            if kind == 0x5e {
                kind = 0x1A;
            }

            println!(
                "[create_agent_fighter_animcmd_effect_share_for_fighter] Fighter Kind: {} - {:#x}",
                original_kind, original_kind
            );
            let original = call_original!(kind, battleObject, boma, lua_state);
            original
        }
    }

    #[hook(offset = offsets::CREATE_AGENT_FIGHTER_ANIMCMD_EXPRESSION_FOR_FIGHTER)]
    fn create_agent_fighter_animcmd_expression_for_fighter(
        battleObject: u64,
        boma: &mut BattleObjectModuleAccessor,
        lua_state: &mut lua_State,
    ) -> *const u64 {
        unsafe {
            let original_kind = *((battleObject + 0xC) as *const u32);

            if original_kind == 0x5e {
                *((battleObject + 0xC) as *mut u32) = 0x1A;
            }

            println!(
                "[create_agent_fighter_animcmd_expression_for_fighter] Fighter Kind: {} - {:#x}",
                original_kind, original_kind
            );
            let original = call_original!(battleObject, boma, lua_state);
            original
        }
    }

    #[hook(offset = offsets::CREATE_AGENT_FIGHTER_ANIMCMD_EXPRESSION_SHARE_FOR_FIGHTER)]
    fn create_agent_fighter_animcmd_expression_share_for_fighter(
        mut kind: u32,
        battleObject: u64,
        boma: &mut BattleObjectModuleAccessor,
        lua_state: &mut lua_State,
    ) -> *const u64 {
        unsafe {
            let original_kind = kind;

            if kind == 0x5e {
                kind = 0x1A;
            }

            println!("[create_agent_fighter_animcmd_expression_share_for_fighter] Fighter Kind: {} - {:#x}", original_kind, original_kind);
            let original = call_original!(kind, battleObject, boma, lua_state);
            original
        }
    }

    #[hook(offset = offsets::CREATE_AGENT_FIGHTER_ANIMCMD_GAME_FOR_FIGHTER)]
    fn create_agent_fighter_animcmd_game_for_fighter(
        battleObject: u64,
        boma: &mut BattleObjectModuleAccessor,
        lua_state: &mut lua_State,
    ) -> *const u64 {
        unsafe {
            let original_kind = *((battleObject + 0xC) as *const u32);

            if original_kind == 0x5e {
                *((battleObject + 0xC) as *mut u32) = 0x1A;
            }

            println!(
                "[create_agent_fighter_animcmd_game_for_fighter] Fighter Kind: {} - {:#x}",
                original_kind, original_kind
            );
            let original = call_original!(battleObject, boma, lua_state);
            original
        }
    }

    #[hook(offset = offsets::CREATE_AGENT_FIGHTER_ANIMCMD_GAME_SHARE_FOR_FIGHTER)]
    fn create_agent_fighter_animcmd_game_share_for_fighter(
        mut kind: u32,
        battleObject: u64,
        boma: &mut BattleObjectModuleAccessor,
        lua_state: &mut lua_State,
    ) -> *const u64 {
        unsafe {
            let original_kind = kind;

            if kind == 0x5e {
                kind = 0x1A;
            }

            println!(
                "[create_agent_fighter_animcmd_game_share_for_fighter] Fighter Kind: {} - {:#x}",
                original_kind, original_kind
            );
            let original = call_original!(kind, battleObject, boma, lua_state);
            original
        }
    }

    #[hook(offset = offsets::CREATE_AGENT_FIGHTER_ANIMCMD_SOUND_FOR_FIGHTER)]
    fn create_agent_fighter_animcmd_sound_for_fighter(
        battleObject: u64,
        boma: &mut BattleObjectModuleAccessor,
        lua_state: &mut lua_State,
    ) -> *const u64 {
        unsafe {
            let original_kind = *((battleObject + 0xC) as *const u32);

            if original_kind == 0x5e {
                *((battleObject + 0xC) as *mut u32) = 0x1A;
            }

            println!(
                "[create_agent_fighter_animcmd_sound_for_fighter] Fighter Kind: {} - {:#x}",
                original_kind, original_kind
            );
            let original = call_original!(battleObject, boma, lua_state);
            original
        }
    }

    #[hook(offset = offsets::CREATE_AGENT_FIGHTER_ANIMCMD_SOUND_SHARE_FOR_FIGHTER)]
    fn create_agent_fighter_animcmd_sound_share_for_fighter(
        mut kind: u32,
        battleObject: u64,
        boma: &mut BattleObjectModuleAccessor,
        lua_state: &mut lua_State,
    ) -> *const u64 {
        unsafe {
            let original_kind = kind;

            if kind == 0x5e {
                kind = 0x1A;
            }

            println!(
                "[create_agent_fighter_animcmd_sound_share_for_fighter] Fighter Kind: {} - {:#x}",
                original_kind, original_kind
            );
            let original = call_original!(kind, battleObject, boma, lua_state);
            original
        }
    }

    #[hook(offset = offsets::CREATE_AGENT_FIGHTER_STATUS_SCRIPT_FOR_FIGHTER)]
    fn create_agent_fighter_status_script_for_fighter(
        battleObject: u64,
        boma: &mut BattleObjectModuleAccessor,
        lua_state: &mut lua_State,
    ) -> *const u64 {
        unsafe {
            let original_kind = *((battleObject + 0xC) as *const u32);

            if original_kind == 0x5e {
                *((battleObject + 0xC) as *mut u32) = 0x1A;
            }

            println!(
                "[create_agent_fighter_status_script_for_fighter] Fighter Kind: {} - {:#x}",
                original_kind, original_kind
            );
            let original = call_original!(battleObject, boma, lua_state);
            original
        }
    }

    #[hook(offset = offsets::FIGHTER_NAMESPACE_CREATE_OFFSET)]
    fn fighter_namespace_create(
        this: u64,
        battle_object_id: u32,
        mut kind: u32,
        entry_id: u32,
        hash: u64,
    ) -> *const u64 {
        unsafe {
            let original_kind = kind;

            // if original_kind == 0x5e {
            //     kind = 0x1A;
            // }

            println!(
                "[fighter_namespace_create] Fighter Kind: {} - {:#x}",
                original_kind, original_kind
            );
            let original = call_original!(this, battle_object_id, kind, entry_id, hash);
            original
        }
    }

    #[hook(offset = offsets::GET_FIGHTER_VTABLES_OFFSET)]
    fn get_fighter_vtable(mut fighter_id: u32) -> *const u64 {
        unsafe {
            let original_kind = fighter_id;

            if fighter_id == 0x5e {
                fighter_id = 0x1A;
            }

            println!(
                "[get_fighter_vtable] Fighter Kind: {} - {:#x}",
                original_kind, original_kind
            );
            let original = call_original!(fighter_id);
            original
        }
    }

    #[hook(offset = offsets::GET_DAT_BASED_ON_FIGHTER_ID_OFFSET)]
    fn get_some_dat_based_on_fighter(mut fighter_id: u32) -> *const u64 {
        unsafe {
            let original_kind = fighter_id;

            let result;

            if fighter_id == 0x5e {
                let ptr = (getRegionAddress(Region::Text) as u64 + 0x50303e8)
                    as *mut crate::structs::FighterDAT;
                let mut new = &mut *ptr.clone();
                new.fighter_kind = original_kind as u64;
                result = &*new as *const crate::structs::FighterDAT as *const u64;
            } else {
                result = call_original!(fighter_id);
            }
            println!(
                "[get_some_dat_based_on_fighter] Fighter Kind: {} - {:#x}",
                original_kind, original_kind
            );

            result
        }
    }

    pub fn install() {
        install_hooks!(
            create_agent_fighter_animcmd_effect_for_fighter,
            create_agent_fighter_animcmd_effect_share_for_fighter,
            create_agent_fighter_animcmd_expression_for_fighter,
            create_agent_fighter_animcmd_expression_share_for_fighter,
            create_agent_fighter_animcmd_game_for_fighter,
            create_agent_fighter_animcmd_game_share_for_fighter,
            create_agent_fighter_animcmd_sound_for_fighter,
            create_agent_fighter_animcmd_sound_share_for_fighter,
            create_agent_fighter_status_script_for_fighter,
            get_fighter_vtable,
            get_some_dat_based_on_fighter,
            fighter_namespace_create
        );
    }
}

#[hook(offset = offsets::FIGHTER_KIND_TO_ID)]
fn fighter_kind_to_id(fighter_kind: u64) -> u32 {
    unsafe {
        *tables::FIGHTER_KIND_TO_INDEX
            .get(&fighter_kind)
            .unwrap_or(&0xffffffff)
    }
}

unsafe fn setup() {
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1254206ce1, 000);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x135719effd, 001);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x114f87b213, 002);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x126efca05d, 003);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x138d699b25, 004);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x12d025d4d3, 005);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1209f4dd34, 006);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x10f833a6ef, 007);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1484f79606, 008);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x12d1a841b3, 009);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x11009477b6, 010);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x14de9fbfc5, 011);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x12642ccf8c, 012);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1239d9c885, 013);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x120dba0d8b, 014);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1253f95a4e, 015);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x12e8fc7b64, 016);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x124d2c6d14, 017);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x134f84b84e, 018);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x12f0791641, 019);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x12cfa73b00, 020);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x123528955e, 021);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x13906caf9d, 022);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x16ec54781f, 023);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x122af1b944, 024);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x138ced9f4e, 025);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x10941b9dd5, 026);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x122e4c5ba0, 027);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1609f9812f, 028);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x17a0f92309, 029);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x10bf749280, 030);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x119cb9184b, 031);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x16b1945ece, 032);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x127e70e3c2, 033);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x121f10c3e1, 034);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x10f405480f, 035);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x16b9c57bd9, 036);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x18e6e65f1f, 037);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x16a86efc01, 038);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x12c55532a1, 039);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1277079a99, 040);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1277a5240e, 041);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x137590573c, 042);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x135c2b1c9b, 043);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x149970e8e1, 044);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x129656d69b, 045);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x15ef495a02, 046);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1180950000, 047);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1525947ce7, 048);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x14cbc59038, 049);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x131a10f233, 050);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x14ff0713f3, 051);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x164cc41e55, 052);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x15dce2594f, 053);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x15d6fa9492, 054);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x136136f5bd, 055);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x13766c540d, 056);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1289ad2c51, 057);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x148584085a, 058);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x15f8282714, 059);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1081356429, 060);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x10fed06867, 061);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x127c21beab, 062);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x12c30e8564, 063);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x16efa9014d, 064);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1431aaf466, 065);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1367240d3a, 066);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1278631eb0, 067);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x146cb3dd7f, 068);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x124261a72f, 069);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x13251abe2e, 070);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1426792cf8, 071);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x17de1da827, 072);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1989d173d5, 073);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x166e9fae70, 074);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1182e9dd40, 075);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x110b48c23e, 076);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1390e38ebb, 077);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x161d8d1990, 078);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x167050fd7b, 079);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x166a8a2906, 080);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x134b155e5a, 081);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x11d151c23a, 082);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x12a733f9e8, 083);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1250da2f26, 084);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1226f4b6cd, 085);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x13edfdb2d3, 086);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x131b3af789, 087);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x13dfa966e6, 088);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x110c2df884, 089);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x13ea13c533, 090);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x13843785a5, 091);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x12e075ea9a, 092);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x12fc152df0, 093);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x18cc9a036c, 110);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x153248b0b6, 111);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x170835b8c2, 112);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1523e3376e, 113);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1586cc8de4, 114);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x124b43b41e, 115);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x122567f488, 116);
    tables::FIGHTER_KIND_TO_INDEX.insert(0x1431ea5ea7, 117);
}

pub fn install() {
    unsafe {
        if INSTALLED {
            return;
        }

        setup();
        fpa2::install();

        create_agent_fighter::install();

        #[hook(offset = 0x371f890)]
        fn open_prc(some_ptr: u64, file_idx: u32) -> bool {
            println!("IDX: {:#x}", file_idx);
            std::thread::sleep(std::time::Duration::from_millis(1200));
            call_original!(some_ptr, file_idx)
        }

        // Set createStatusScript to return since we'll set the x0 manually and don't wanna deal with anything else ourselves
        // skyline::patching::Patch::in_text(offsets::CREATE_STATUS_SCRIPT).data(0xD65F03C0_u32).unwrap();
        install_hooks!(fighter_kind_to_id);
        INSTALLED = true;
    }
}
