function(add_nso_target target)
    # Build the NSO file.
    add_custom_command(
            OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/${target}.nso
            COMMAND ${elf2nso} $<TARGET_FILE:${target}> ${CMAKE_CURRENT_BINARY_DIR}/${target}.nso
            DEPENDS ${target}
            VERBATIM
    )

    # Add the respective NSO target and set the required linker flags for the original target.
    add_custom_target(${target}_nso ALL SOURCES ${CMAKE_CURRENT_BINARY_DIR}/${target}.nso)
    set_target_properties(${target} PROPERTIES LINK_FLAGS "-specs=${LIBNX}/switch.specs")
endfunction()

function(nso_target target)
    add_nso_target(${target})
    set_target_properties(${target} PROPERTIES LINK_FLAGS "-specs ${CMAKE_BINARY_DIR}/switch.specs -g ${ARCH} -Wl,-init=__custom_init -Wl,-fini=__custom_fini -Wl,-Map,${CMAKE_BINARY_DIR}/${CMAKE_PROJECT_NAME}.map -Wl,-init=__custom_init -Wl,-fini=__custom_fini -Wl,--version-script=${CMAKE_BINARY_DIR}/exported.txt")
endfunction()

function(release_target target patches exefs romfs)
    add_custom_target(
            release_${target}
            COMMAND mkdir -p "${CMAKE_SOURCE_DIR}/release/${target}/${patches}"
            COMMAND mkdir -p "${CMAKE_SOURCE_DIR}/release/${target}/${exefs}"
            COMMAND mkdir -p "${CMAKE_SOURCE_DIR}/release/${target}/${romfs}"
            COMMAND sh -c "mv ${CMAKE_BINARY_DIR}/ips_patches/*.ips ${CMAKE_SOURCE_DIR}/release/${target}/${patches}"
            COMMAND mv ${CMAKE_BINARY_DIR}/${CMAKE_PROJECT_NAME}.nso ${CMAKE_SOURCE_DIR}/release/${target}/${exefs}/subsdk1
            DEPENDS ${CMAKE_PROJECT_NAME}_nso ${CMAKE_PROJECT_NAME}_ips
    )
endfunction()

function(zip_target target)
    add_custom_target(
            zip_${target}
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/release/${target}
            COMMAND zip -r ../mod_${target}.zip *
            DEPENDS release_${target}
    )
endfunction()

function(ftp_target target)
    add_custom_target(
            send_${target}
            COMMAND python3 ${CMAKE_SOURCE_DIR}/scripts/send_patch.py ${SWITCH_IP} ${CMAKE_SOURCE_DIR}/release/${target}
            DEPENDS release_${target}
    )
endfunction()
