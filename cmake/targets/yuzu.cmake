# Target: Yuzu

# Folder structure:
# /load/0100000011D90000/${CMAKE_PROJECT_NAME}
#   /exefs
#     subsdk1
#     *.ips
#   /romfs
#

release_target(
        yuzu
        "/load/0100000011D90000/${CMAKE_PROJECT_NAME}/exefs/"
        "/load/0100000011D90000/${CMAKE_PROJECT_NAME}/exefs/"
        "/load/0100000011D90000/${CMAKE_PROJECT_NAME}/romfs/"
)
zip_target(yuzu)
