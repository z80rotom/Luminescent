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

release_target(
        atmosphere
        "/exefs_patches/${CMAKE_PROJECT_NAME}/"
        /contents/0100000011D90000/exefs/
        /contents/0100000011D90000/romfs/
)
zip_target(atmosphere)
ftp_target(atmosphere)
