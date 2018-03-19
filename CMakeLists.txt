cmake_minimum_required(VERSION 3.2)

include(./macros.cmake)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})
set(BUILD_FOLDER build)

set(VENDOR_DIR ${PROJECT_SOURCE_DIR}/vendor)
set(SOURCE_DIR ${PROJECT_SOURCE_DIR}/src)

# make cmake detects inner projects
add_subdirectory(src)
add_subdirectory(test)

