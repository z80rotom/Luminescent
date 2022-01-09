set(CMAKE_EXECUTABLE_SUFFIX ".elf")

# Main executable
add_executable(${CMAKE_PROJECT_NAME} ${SOURCES_ASM} ${SOURCES_C} ${SOURCES_CXX})

# Generate exported.txt
add_custom_command(
        TARGET ${CMAKE_PROJECT_NAME}
        PRE_LINK
        COMMAND bash ${CMAKE_SOURCE_DIR}/fill_templates.sh "${DEVKITA64}/bin/aarch64-none-elf-nm" "${CMAKE_BINARY_DIR}/CMakeFiles/${CMAKE_PROJECT_NAME}.dir/" "${CMAKE_SOURCE_DIR}" "${CMAKE_BINARY_DIR}"
        BYPRODUCTS "${CMAKE_BINARY_DIR}/exported.txt"
)

# IPS patches
add_custom_target(
        ${CMAKE_PROJECT_NAME}_ips
        COMMAND python ${CMAKE_SOURCE_DIR}/scripts/gen_patch.py ${CMAKE_SOURCE_DIR} ${CMAKE_BINARY_DIR}/${CMAKE_PROJECT_NAME}.map
        DEPENDS ${CMAKE_PROJECT_NAME}
)

# Build nso
nso_target(${CMAKE_PROJECT_NAME})
