cmake_minimum_required(VERSION 3.21)
get_filename_component(PROJ_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME_WE)
project(${PROJ_NAME})

set(CMAKE_CXX_STANDARD 14)

enable_language(ASM C CXX)

include(${CMAKE_SOURCE_DIR}/config.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/common.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/functions.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/target.cmake)
