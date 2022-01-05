function(create_transfer TRANSFER_NAME)
    add_custom_target(
            send_${TRANSFER_NAME}
            COMMAND python3 ${CMAKE_SOURCE_DIR}/scripts/send_patch.py ${SWITCH_IP}
            DEPENDS starlight_${TRANSFER_NAME}
    )
endfunction()

function(create_export EXPORT_NAME)
    add_custom_target(
            export_${EXPORT_NAME}
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/starlight_patch_${BDSPVER}
            COMMAND zip -r ../mod_${EXPORT_NAME}.zip *
            DEPENDS starlight_${EXPORT_NAME}
            BYPRODUCTS ${CMAKE_SOURCE_DIR}/mod_${EXPORT_NAME}.zip
    )
endfunction()