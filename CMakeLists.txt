cmake_minimum_required(VERSION 3.21)
get_filename_component(PROJ_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME_WE)
project(${PROJ_NAME})

set(CMAKE_CXX_STANDARD 20)
enable_language(ASM C CXX)

# Error if not using switch toolchain file
if (NOT SWITCH)
    message(FATAL_ERROR "Not targeting switch, make sure to specify -DCMAKE_TOOLCHAIN_FILE=cmake/toolchain.cmake")
endif ()

# Create config if missing
if (NOT EXISTS ${CMAKE_SOURCE_DIR}/config.cmake)
    file(COPY ${CMAKE_SOURCE_DIR}/config.cmake.template
            DESTINATION ${CMAKE_BINARY_DIR})
    file(RENAME ${CMAKE_BINARY_DIR}/config.cmake.template ${CMAKE_SOURCE_DIR}/config.cmake)
endif ()

include(${CMAKE_SOURCE_DIR}/config.cmake)

# Global vars
include(${CMAKE_SOURCE_DIR}/cmake/common.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/functions.cmake)

# elf/nso/ips output
include(${CMAKE_SOURCE_DIR}/cmake/main_target.cmake)

# Release folder structures
include(${CMAKE_SOURCE_DIR}/cmake/releases.cmake)

# Logger
add_custom_target(
        logger
        COMMAND python3 ${CMAKE_SOURCE_DIR}/scripts/logger_server.py ${LOGGER_PORT}
)
