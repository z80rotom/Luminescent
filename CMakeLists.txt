cmake_minimum_required(VERSION 3.7)

get_filename_component(PROJ_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME_WE)
project(${PROJ_NAME})

enable_language(ASM C CXX)

set(BDSPVER 113)
set(BDSPVERSTR 1.1.3)

include(${PROJECT_SOURCE_DIR}/config.cmake)

include(cmake/functions.cmake)
include(cmake/common.cmake)
include(cmake/target_atmosphere.cmake)
include(cmake/target_modmanager.cmake)
include(cmake/target_ryujinx.cmake)
include(cmake/target_yuzu.cmake)
