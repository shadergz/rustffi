/*
 *  Source code written by Gabriel Correia
*/

/* Provide Rust_add function prototype for the compiler */
#include <fmt/core.h>
#include <safe/safe.h>

int main ()
{
    fmt::print ("{}\n", Rust_add (10, 40));
}