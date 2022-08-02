# Main executable
set(CMAKE_EXECUTABLE_SUFFIX ".elf")
add_executable(${CMAKE_PROJECT_NAME} ${SOURCES_ASM} ${SOURCES_C} ${SOURCES_CXX})
# target_link_libraries(${CMAKE_PROJECT_NAME} PUBLIC curl nx)

# Generate exported.txt
add_custom_command(
        TARGET ${CMAKE_PROJECT_NAME}
        PRE_LINK
        OUTPUTS "${CMAKE_BINARY_DIR}/exported.txt" "${CMAKE_BINARY_DIR}/switch.specs"
        DEPENDS ${SOURCES_ASM} ${SOURCES_C} ${SOURCES_CXX}
        COMMAND ${CMAKE_COMMAND} -E copy "${CMAKE_SOURCE_DIR}/linkerscripts/symbols.${SWITCH_TARGET}.ld" "${CMAKE_SOURCE_DIR}/linkerscripts/symbols.ld"
        COMMAND bash ${CMAKE_SOURCE_DIR}/fill_templates.sh "${DEVKITA64}/bin/aarch64-none-elf-nm" "${CMAKE_BINARY_DIR}/CMakeFiles/${CMAKE_PROJECT_NAME}.dir/" "${CMAKE_SOURCE_DIR}" "${CMAKE_BINARY_DIR}"
)

# Generate IPS patches
add_custom_command(
        OUTPUT ${CMAKE_BINARY_DIR}/ips_patches
        DEPENDS ${CMAKE_PROJECT_NAME} ${SOURCES_SLPATCH}
        COMMAND python3 ${CMAKE_SOURCE_DIR}/scripts/gen_patch.py "${CMAKE_SOURCE_DIR}" "${CMAKE_BINARY_DIR}/${CMAKE_PROJECT_NAME}.map" "${SWITCH_TARGET}"
)

# Build nso
nso_target(${CMAKE_PROJECT_NAME})
