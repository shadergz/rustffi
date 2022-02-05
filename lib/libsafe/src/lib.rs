/*
 *  Source code written by Gabriel Correia
*/

#[no_mangle]
pub extern "C" fn Rust_add (x: i32, y: i32) -> i64 
{
    i64::from (x + y)
}

