use skyline::{hooks::*, libc};

extern "C" {
    pub fn A64InlineHook(symbol: *const libc::c_void, replace: *const libc::c_void);
}

#[no_mangle]
pub extern "C" fn inline_hook_for_table_adrp_skyline_internal_original_fn(ctx: &mut InlineCtx) {
    unsafe {
        let id = *ctx.registers[18].x.as_ref() as u16;
        let data = crate::globals::HOOK_DATA_FOR_ID.get(&id).unwrap();
        *ctx.registers[(*data).register as usize].x.as_mut() = (*data).ptr as u64;
    }
}

