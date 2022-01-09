cmake_minimum_required(VERSION 3.21)
get_filename_component(PROJ_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME_WE)
project(${PROJ_NAME})

set(CMAKE_CXX_STANDARD 14)

enable_language(ASM C CXX)

if (NOT EXISTS ${CMAKE_SOURCE_DIR}/config.cmake)
    file(COPY ${CMAKE_SOURCE_DIR}/config.cmake.template
            DESTINATION ${CMAKE_BINARY_DIR})
    file(RENAME ${CMAKE_BINARY_DIR}/config.cmake.template ${CMAKE_SOURCE_DIR}/config.cmake)
endif()

include(${CMAKE_SOURCE_DIR}/config.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/common.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/functions.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/main_target.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/releases.cmake)
