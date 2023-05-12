pub const FIGHTER_SIZE: usize = 0x75;

pub static mut ACTUAL_FIGHTER_SIZE: usize = 0x5E;

pub const FIGHTER_ID_BY_ARTICLE_IDX_SIZE: usize = 0x1B7;
pub const UPPERCASE_FIGHTER_NAMES_TABLE_OFFSET: usize = 0x4f7fa70;
pub const LOWERCASE_FIGHTER_NAMES_TABLE_OFFSET: usize = 0x4f7fe20;
pub const FIGHTER_NAMES_OFFSET: usize = 0x4f801d0; // TitleCase
pub const FIGHTER_KIND_TABLE_OFFSET: usize = 0x453a310;
pub const FIGHTER_KIND_TABLE_2_OFFSET: usize = 0x453ada8;
pub const FIGHTER_ID_BY_ARTICLE_IDX_OFFSET: usize = 0x455c934;
pub const FIGHTER_VTABLES_OFFSET: usize = 0x529afd0;
pub const GET_FIGHTER_VTABLES_OFFSET: usize = 0x68d510;
pub const GET_DAT_BASED_ON_FIGHTER_ID_OFFSET: usize = 0x64b710;
pub const FIGHTER_NAMESPACE_CREATE_OFFSET: usize = 0x6079b0;

pub static mut FIGHTER_KIND_TABLE_CODE_CAVE: usize = FIGHTER_KIND_TO_ID + (10 * 4);

pub fn get_code_cave_offset() -> usize {
    unsafe {
        let res = FIGHTER_KIND_TABLE_CODE_CAVE;
        FIGHTER_KIND_TABLE_CODE_CAVE += 6 * 4;
        res
    }
}

// (FighterResource param_1, uint fighter_id, u32 resource_kind, bool expression_flag)
pub const GET_FIGHTER_RESOURCE_PATH_OFFSET: usize = 0x17deb20;

// (fighter_kind_hash)
pub const FIGHTER_KIND_TO_ID: usize = 0x66cd20;
// (InlineHook - cmp table_idx, #0x75 -> ret)
pub const CREATE_STATUS_SCRIPT_FOR_ARTICLE: usize = 0x33ab610;

// (BattleObject *param_1, BattleObjectModuleAccessor *param_2, lua_State *param_3)
pub const CREATE_AGENT_FIGHTER_ANIMCMD_EFFECT_FOR_FIGHTER:           usize = 0x64c910;
pub const CREATE_AGENT_FIGHTER_ANIMCMD_EFFECT_SHARE_FOR_FIGHTER:     usize = 0x64e280;

pub const CREATE_AGENT_FIGHTER_ANIMCMD_EXPRESSION_FOR_FIGHTER:       usize = 0x64cf30;
pub const CREATE_AGENT_FIGHTER_ANIMCMD_EXPRESSION_SHARE_FOR_FIGHTER: usize = 0x64e890;

pub const CREATE_AGENT_FIGHTER_ANIMCMD_GAME_FOR_FIGHTER:             usize = 0x64c2f0;
pub const CREATE_AGENT_FIGHTER_ANIMCMD_GAME_SHARE_FOR_FIGHTER:       usize = 0x64db70;

pub const CREATE_AGENT_FIGHTER_ANIMCMD_SOUND_FOR_FIGHTER:            usize = 0x64d550;
pub const CREATE_AGENT_FIGHTER_ANIMCMD_SOUND_SHARE_FOR_FIGHTER:      usize = 0x64eea0;

pub const CREATE_AGENT_FIGHTER_STATUS_SCRIPT_FOR_FIGHTER:            usize = 0x64bbb0;
