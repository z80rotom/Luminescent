# Target: Atmosphere

# Folder structure:
# /atmosphere
#   /contents/0100000011D90000
#     /exefs
#       subsdk1
#     /romfs
#
#   /exefs_patches/${CMAKE_PROJECT_NAME}
#     *.ips


add_custom_target(
        starlight_atmosphere ALL
        COMMAND mkdir -p "starlight_patch_${BDSPVER}/atmosphere/exefs_patches/${CMAKE_PROJECT_NAME}"
        COMMAND mkdir -p "starlight_patch_${BDSPVER}/atmosphere/contents/0100000011D90000/exefs/"
        COMMAND sh -c "mv starlight_patch_${BDSPVER}/*.ips starlight_patch_${BDSPVER}/atmosphere/exefs_patches/${CMAKE_PROJECT_NAME}/"
        COMMAND mv ${CMAKE_SOURCE_DIR}/${CMAKE_PROJECT_NAME}${BDSPVER}.nso starlight_patch_${BDSPVER}/atmosphere/contents/0100000011D90000/exefs/subsdk1
        DEPENDS compile_mod
)

create_transfer(atmosphere)
create_export(atmosphere)
