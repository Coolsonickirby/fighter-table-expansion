offsets = [
    "CREATE_AGENT_FIGHTER_ANIMCMD_EFFECT_FOR_FIGHTER",
    "CREATE_AGENT_FIGHTER_ANIMCMD_EFFECT_SHARE_FOR_FIGHTER",
    "CREATE_AGENT_FIGHTER_ANIMCMD_EXPRESSION_FOR_FIGHTER",
    "CREATE_AGENT_FIGHTER_ANIMCMD_EXPRESSION_SHARE_FOR_FIGHTER",
    "CREATE_AGENT_FIGHTER_ANIMCMD_GAME_FOR_FIGHTER",
    "CREATE_AGENT_FIGHTER_ANIMCMD_GAME_SHARE_FOR_FIGHTER",
    "CREATE_AGENT_FIGHTER_ANIMCMD_SOUND_FOR_FIGHTER",
    "CREATE_AGENT_FIGHTER_ANIMCMD_SOUND_SHARE_FOR_FIGHTER",
    "CREATE_AGENT_FIGHTER_STATUS_SCRIPT_FOR_FIGHTER",
]

text = '''#[hook(offset = offsets::%s)]
fn %s(
    battleObject: u64,
    boma: &mut BattleObjectModuleAccessor,
    lua_state: &mut lua_State,
) -> *const u64 {
    unsafe {
        let kind = *((battleObject + 0xC) as *const u32);
        let original = call_original!(battleObject, boma, lua_state);
        println!("[%s] Fighter Kind: {} - {:#x}", kind, kind);
        original
    }
}'''

for x in offsets:
    lowercase = x.lower()
    # print(text % (x, lowercase, lowercase))
    print("%s," % lowercase)