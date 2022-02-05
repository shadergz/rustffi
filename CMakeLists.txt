cmake_minimum_required (VERSION 3.14)

project (rustffi VERSION 0.0.1)

list (APPEND CMAKE_MODULE_PATH 
    ${CMAKE_SOURCE_DIR}/cmake/
)

message (AUTHOR_WARNING "Modules paths: ${CMAKE_MODULE_PATH}")

find_package (fmt)

enable_language (Rust)
include (CMakeCargo)

add_subdirectory (lib)

include_directories (inc)
add_subdirectory (src)
