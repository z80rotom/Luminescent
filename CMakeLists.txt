cmake_minimum_required(VERSION 3.7)

get_filename_component(PROJ_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME_WE)
project(${PROJ_NAME})

enable_language(ASM C CXX)

set(BDSPVER 113)
set(BDSPVERSTR 1.1.3)

include(${PROJECT_SOURCE_DIR}/config.cmake)

# Project sources
include_directories(${PROJECT_SOURCE_DIR}/include/)
file(GLOB_RECURSE SOURCES_ASM ${PROJECT_SOURCE_DIR}/source/*.s)
file(GLOB_RECURSE SOURCES_C ${PROJECT_SOURCE_DIR}/source/*.c)
file(GLOB_RECURSE SOURCES_CXX ${PROJECT_SOURCE_DIR}/source/*.cpp)
set(SOURCES_MISC ${PROJECT_SOURCE_DIR}/patches/codehook.slpatch)

# Apply compile definitions
get_directory_property(COMPILE_DEFS DIRECTORY ${CMAKE_SOURCE_DIR} COMPILE_DEFINITIONS)
list(TRANSFORM COMPILE_DEFS PREPEND "-D")

# Dummy to make clion work
add_library(dummy_do_not_use_ide_metadata_only STATIC ${SOURCES_ASM} ${SOURCES_C} ${SOURCES_CXX})

add_custom_target(
        compile_mod
        COMMAND make all -f ${CMAKE_SOURCE_DIR}/MakefileNSO BDSPVER=${BDSPVER} BDSPVERSTR=${BDSPVERSTR} DEFINITIONS="${COMPILE_DEFS}"
        COMMAND rm ${CMAKE_SOURCE_DIR}/${CMAKE_PROJECT_NAME}${BDSPVER}.elf
        SOURCES ${SOURCES_ASM} ${SOURCES_C} ${SOURCES_CXX} ${SOURCES_MISC}
)

add_custom_target(
        starlight_atmosphere ALL
        COMMAND rm -rf ${CMAKE_SOURCE_DIR}/starlight_patch_${BDSPVER}
        COMMAND python3 ${CMAKE_SOURCE_DIR}/scripts/gen_patch.py ${BDSPVER}
        COMMAND mkdir -p "starlight_patch_${BDSPVER}/atmosphere/exefs_patches/${CMAKE_PROJECT_NAME}"
        COMMAND mkdir -p "starlight_patch_${BDSPVER}/atmosphere/contents/0100000011D90000/exefs/"
        COMMAND sh -c "mv starlight_patch_${BDSPVER}/*.ips starlight_patch_${BDSPVER}/atmosphere/exefs_patches/${CMAKE_PROJECT_NAME}/"
        COMMAND mv ${CMAKE_SOURCE_DIR}/${CMAKE_PROJECT_NAME}${BDSPVER}.nso starlight_patch_${BDSPVER}/atmosphere/contents/0100000011D90000/exefs/subsdk1
        DEPENDS compile_mod
)


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

add_custom_target(
        starlight_yuzu
        COMMAND rm -rf ${CMAKE_SOURCE_DIR}/starlight_patch_${BDSPVER}
        COMMAND python3 ${CMAKE_SOURCE_DIR}/scripts/gen_patch.py ${BDSPVER}
        COMMAND mkdir -p "starlight_patch_${BDSPVER}/load/0100000011D90000/${CMAKE_PROJECT_NAME}/exefs/"
        COMMAND sh -c "mv starlight_patch_${BDSPVER}/*.ips 'starlight_patch_${BDSPVER}/load/0100000011D90000/${CMAKE_PROJECT_NAME}/exefs/'"
        COMMAND mv ${CMAKE_SOURCE_DIR}/${CMAKE_PROJECT_NAME}${BDSPVER}.nso "starlight_patch_${BDSPVER}/load/0100000011D90000/${CMAKE_PROJECT_NAME}/exefs/subsdk1"
        DEPENDS compile_mod
)

add_custom_target(
        starlight_ryujinx
        COMMAND rm -rf ${CMAKE_SOURCE_DIR}/starlight_patch_${BDSPVER}
        COMMAND python3 ${CMAKE_SOURCE_DIR}/scripts/gen_patch.py ${BDSPVER}
        COMMAND mkdir -p "starlight_patch_${BDSPVER}/mods/contents/0100000011D90000/${CMAKE_PROJECT_NAME}/exefs/"
        COMMAND sh -c "mv starlight_patch_${BDSPVER}/*.ips 'starlight_patch_${BDSPVER}/mods/contents/0100000011D90000/${CMAKE_PROJECT_NAME}/exefs/'"
        COMMAND mv ${CMAKE_SOURCE_DIR}/${CMAKE_PROJECT_NAME}${BDSPVER}.nso "starlight_patch_${BDSPVER}/mods/contents/0100000011D90000/${CMAKE_PROJECT_NAME}/exefs/subsdk1"
        DEPENDS compile_mod
)

add_custom_target(
        send_atmosphere
        COMMAND python3 ${CMAKE_SOURCE_DIR}/scripts/send_patch.py ${SWITCH_IP}
        DEPENDS starlight_atmosphere
)

add_custom_target(
        send_modmanager
        COMMAND python3 ${CMAKE_SOURCE_DIR}/scripts/send_patch.py ${SWITCH_IP}
        DEPENDS starlight_modmanager
)

add_custom_target(
        export_atmosphere
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/starlight_patch_${BDSPVER}
        COMMAND zip -r ../mod.zip *
        DEPENDS starlight_atmosphere
        BYPRODUCTS ${CMAKE_SOURCE_DIR}/mod.zip
)

add_custom_target(
        export_modmanager
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/starlight_patch_${BDSPVER}
        COMMAND zip -r ../mod_modmanager.zip *
        DEPENDS starlight_modmanager
        BYPRODUCTS ${CMAKE_SOURCE_DIR}/mod_modmanager.zip
)

add_custom_target(
        export_yuzu
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/starlight_patch_${BDSPVER}
        COMMAND zip -r ../mod_yuzu.zip *
        DEPENDS starlight_yuzu
        BYPRODUCTS ${CMAKE_SOURCE_DIR}/mod_yuzu.zip
)

add_custom_target(
        export_ryujinx
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/starlight_patch_${BDSPVER}
        COMMAND zip -r ../mod_ryujinx.zip *
        DEPENDS starlight_ryujinx
        BYPRODUCTS ${CMAKE_SOURCE_DIR}/mod_ryujinx.zip
)

set_property(
        TARGET compile_mod
        APPEND
        PROPERTY ADDITIONAL_CLEAN_FILES build${BDSPVER} starlight_patch_${BDSPVER}
)
