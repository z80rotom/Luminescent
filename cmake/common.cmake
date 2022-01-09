set(MODULE_NAME ${CMAKE_PROJECT_NAME})
string(LENGTH ${MODULE_NAME} MODULE_NAME_LEN)

# Default compile definitions
add_compile_definitions(
        MODULE_NAME=${CMAKE_PROJECT_NAME}
        MODULE_NAME_LEN=${MODULE_NAME_LEN}
)

# Project sources
include_directories(${PROJECT_SOURCE_DIR}/include/)
file(GLOB_RECURSE SOURCES_ASM ${PROJECT_SOURCE_DIR}/src/*.s)
file(GLOB_RECURSE SOURCES_C ${PROJECT_SOURCE_DIR}/src/*.c)
file(GLOB_RECURSE SOURCES_CXX ${PROJECT_SOURCE_DIR}/src/*.cpp)

# Include nx tools
include(${CMAKE_SOURCE_DIR}/cmake/switch-cmake/cmake/SwitchTools.cmake)
