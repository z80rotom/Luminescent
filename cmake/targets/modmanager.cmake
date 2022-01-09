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

release_target(
        modmanager
        "/mods/Pokemon Brilliant Diamond/${CMAKE_PROJECT_NAME}/exefs_patches/${CMAKE_PROJECT_NAME}/"
        "/mods/Pokemon Brilliant Diamond/${CMAKE_PROJECT_NAME}/contents/0100000011D90000/exefs/"
        "/mods/Pokemon Brilliant Diamond/${CMAKE_PROJECT_NAME}/contents/0100000011D90000/romfs/"
)
zip_target(modmanager)
ftp_target(modmanager)
