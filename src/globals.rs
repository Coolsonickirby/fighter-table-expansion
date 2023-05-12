use std::collections::HashMap;
use once_cell::sync::Lazy;


#[derive(Debug)]
pub struct Data {
    pub ptr: usize,
    pub register: u8
}

impl<'a, 'b> PartialEq<Data> for Data {
    fn eq(&self, other: &Data) -> bool {
        self.ptr == other.ptr && self.register == other.register
    }
}

// (ptr, data)
pub static mut HOOK_DATA_FOR_ID: Lazy<HashMap<u16, Data>> = Lazy::new(|| HashMap::new());

static mut DATA_ID: u16 = 0;
fn get_data_id() -> u16 {
    unsafe {
        let d = DATA_ID;
        DATA_ID += 1;
        d
    }
}

pub fn get_id_if_data_exists(data: &Data) -> Option<u16> {
    let mut r: Option<u16> = None;
    unsafe {
        for (key, value) in &*HOOK_DATA_FOR_ID {
            if *data == *value {
                r = Some(*key);
                break;
            }
        }
    }
    r
}

pub fn insert_data(data: Data) -> u16{
    unsafe {
        let id = get_data_id();
        HOOK_DATA_FOR_ID.insert(id, data);
        id
    }
}