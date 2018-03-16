cmake_minimum_required(VERSION 3.2)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})
set(BUILD_FOLDER build)

set(DIVISIBLE_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/src/divisible)

# make cmake detects inner projects
add_subdirectory(src)
#add_subdirectory(test)