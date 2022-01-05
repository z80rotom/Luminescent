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

# Common compile task
add_custom_target(
        compile_mod
        SOURCES ${SOURCES_ASM} ${SOURCES_C} ${SOURCES_CXX} ${SOURCES_MISC}

        # Compile
        COMMAND make all -f ${CMAKE_SOURCE_DIR}/MakefileNSO BDSPVER=${BDSPVER} BDSPVERSTR=${BDSPVERSTR} DEFINITIONS="${COMPILE_DEFS}"

        # Remove old ELF
        COMMAND rm ${CMAKE_SOURCE_DIR}/${CMAKE_PROJECT_NAME}${BDSPVER}.elf

        # Remove old output
        COMMAND rm -rf ${CMAKE_SOURCE_DIR}/starlight_patch_${BDSPVER}

        # Generate new patch
        COMMAND python3 ${CMAKE_SOURCE_DIR}/scripts/gen_patch.py ${BDSPVER}
)

# Set outputs for clean
set_property(
        TARGET compile_mod
        APPEND
        PROPERTY ADDITIONAL_CLEAN_FILES build${BDSPVER} starlight_patch_${BDSPVER}
)
