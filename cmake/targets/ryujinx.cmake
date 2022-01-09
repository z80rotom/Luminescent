# Target: Ryujinx

# Folder structure:
# /mods/contents/0100000011D90000/${CMAKE_PROJECT_NAME}
#   /exefs
#     subsdk1
#     *.ips
#   /romfs
#

release_target(
        ryujinx
        "/mods/contents/0100000011D90000/${CMAKE_PROJECT_NAME}/exefs/"
        "/mods/contents/0100000011D90000/${CMAKE_PROJECT_NAME}/exefs/"
        "/mods/contents/0100000011D90000/${CMAKE_PROJECT_NAME}/romfs/"
)
zip_target(ryujinx)
