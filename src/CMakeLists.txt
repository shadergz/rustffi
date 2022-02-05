set (RUST_FFI_SRC)

list (APPEND RUST_FFI_SRC
    main-user.cc
)

add_executable (${PROJECT_NAME} ${RUST_FFI_SRC})

if (WIN32)
    target_link_libraries (${PROJECT_NAME} libsafe ws2_32 userenv fmt::fmt)
else ()
    target_link_libraries (${PROJECT_NAME} libsafe dl pthread fmt::fmt)
endif ()
