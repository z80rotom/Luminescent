function(nso_target target)
    add_nso_target(${target})
    set_target_properties(${target} PROPERTIES LINK_FLAGS "-specs ${CMAKE_BINARY_DIR}/switch.specs -g ${ARCH} -Wl,-init=__custom_init -Wl,-fini=__custom_fini -Wl,-Map,${CMAKE_BINARY_DIR}/${CMAKE_PROJECT_NAME}.map -Wl,-init=__custom_init -Wl,-fini=__custom_fini -Wl,--version-script=${CMAKE_BINARY_DIR}/exported.txt")
endfunction()
