function(nso_target target)
    add_nso_target(${target})
    set_target_properties(${target} PROPERTIES LINK_FLAGS "-specs ${CMAKE_BINARY_DIR}/switch.specs -g ${ARCH} -Wl,-init=__custom_init -Wl,-fini=__custom_fini -Wl,-Map,${CMAKE_BINARY_DIR}/${CMAKE_PROJECT_NAME}.map -Wl,-init=__custom_init -Wl,-fini=__custom_fini -Wl,--version-script=${CMAKE_BINARY_DIR}/exported.txt")
endfunction()

function(release_target target patches exefs romfs)
    add_custom_command(
            OUTPUT ${CMAKE_SOURCE_DIR}/release/${target}
            DEPENDS ${CMAKE_BINARY_DIR}/${CMAKE_PROJECT_NAME}.nso ${CMAKE_BINARY_DIR}/ips_patches
            # Create release file structure
            COMMAND mkdir -p "${CMAKE_SOURCE_DIR}/release/${target}/${patches}"
            COMMAND mkdir -p "${CMAKE_SOURCE_DIR}/release/${target}/${exefs}"
            COMMAND mkdir -p "${CMAKE_SOURCE_DIR}/release/${target}/${romfs}"
            # Copy IPS patches
            COMMAND sh -c 'cp ${CMAKE_BINARY_DIR}/ips_patches/*.ips ${CMAKE_SOURCE_DIR}/release/${target}/${patches}'
            # Copy exefs
            COMMAND cp "${CMAKE_BINARY_DIR}/${CMAKE_PROJECT_NAME}.nso" "${CMAKE_SOURCE_DIR}/release/${target}/${exefs}/subsdk1"
    )

    add_custom_target(
            release_${target}
            DEPENDS ${CMAKE_SOURCE_DIR}/release/${target}
            COMMAND mkdir -p "${CMAKE_SOURCE_DIR}/release/${target}/${patches}"
            COMMAND mkdir -p "${CMAKE_SOURCE_DIR}/release/${target}/${exefs}"
            COMMAND mkdir -p "${CMAKE_SOURCE_DIR}/release/${target}/${romfs}"
    )
endfunction()

function(zip_target target)
    add_custom_command(
            OUTPUT ${CMAKE_SOURCE_DIR}/release/mod_${target}.zip
            DEPENDS ${CMAKE_SOURCE_DIR}/release/${target}
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/release/${target}
            COMMAND sh -c 'zip -r ../mod_${target}.zip *'
    )
    add_custom_target(
            zip_${target}
            DEPENDS ${CMAKE_SOURCE_DIR}/release/mod_${target}.zip
    )
endfunction()

function(ftp_target target)
    add_custom_target(
            send_${target}
            DEPENDS ${CMAKE_SOURCE_DIR}/release/${target}
            COMMAND python3 ${CMAKE_SOURCE_DIR}/scripts/send_patch.py ${SWITCH_IP} ${CMAKE_SOURCE_DIR}/release/${target}
    )
endfunction()
