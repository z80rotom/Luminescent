# Target: Ryujinx

# Folder structure:
# /mods/contents/0100000011D90000/${CMAKE_PROJECT_NAME}
#   /exefs
#     subsdk1
#     *.ips
#   /romfs
#


add_custom_target(
        starlight_ryujinx
        COMMAND rm -rf ${CMAKE_SOURCE_DIR}/starlight_patch_${BDSPVER}
        COMMAND python3 ${CMAKE_SOURCE_DIR}/scripts/gen_patch.py ${BDSPVER}
        COMMAND mkdir -p "starlight_patch_${BDSPVER}/mods/contents/0100000011D90000/${CMAKE_PROJECT_NAME}/exefs/"
        COMMAND sh -c "mv starlight_patch_${BDSPVER}/*.ips 'starlight_patch_${BDSPVER}/mods/contents/0100000011D90000/${CMAKE_PROJECT_NAME}/exefs/'"
        COMMAND mv ${CMAKE_SOURCE_DIR}/${CMAKE_PROJECT_NAME}${BDSPVER}.nso "starlight_patch_${BDSPVER}/mods/contents/0100000011D90000/${CMAKE_PROJECT_NAME}/exefs/subsdk1"
        DEPENDS compile_mod
)

create_export(ryujinx)
