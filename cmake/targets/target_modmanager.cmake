# Target: SimpleModManager

# Folder structure:
# /mods/Pokemon Brilliant Diamond/${CMAKE_PROJECT_NAME}
#   /contents/0100000011D90000
#     /exefs
#       subsdk1
#     /romfs
#
#   /exefs_patches/${CMAKE_PROJECT_NAME}
#     *.ips


add_custom_target(
        starlight_modmanager
        COMMAND rm -rf ${CMAKE_SOURCE_DIR}/starlight_patch_${BDSPVER}
        COMMAND python3 ${CMAKE_SOURCE_DIR}/scripts/gen_patch.py ${BDSPVER}
        COMMAND mkdir -p "starlight_patch_${BDSPVER}/mods/Pokemon Brilliant Diamond/${CMAKE_PROJECT_NAME}/exefs_patches/${CMAKE_PROJECT_NAME}/"
        COMMAND mkdir -p "starlight_patch_${BDSPVER}/mods/Pokemon Brilliant Diamond/${CMAKE_PROJECT_NAME}/contents/0100000011D90000/exefs/"
        COMMAND sh -c "mv starlight_patch_${BDSPVER}/*.ips 'starlight_patch_${BDSPVER}/mods/Pokemon Brilliant Diamond/${CMAKE_PROJECT_NAME}/exefs_patches/${CMAKE_PROJECT_NAME}/'"
        COMMAND mv ${CMAKE_SOURCE_DIR}/${CMAKE_PROJECT_NAME}${BDSPVER}.nso "starlight_patch_${BDSPVER}/mods/Pokemon Brilliant Diamond/${CMAKE_PROJECT_NAME}/contents/0100000011D90000/exefs/subsdk1"
        DEPENDS compile_mod
)

create_transfer(modmanager)
create_export(modmanager)
