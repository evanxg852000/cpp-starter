cmake_minimum_required(VERSION 3.2)
project(arithmetic)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

# make cmake detects inner projects
add_subdirectory(addition)
add_subdirectory(division)

#include_directories(include)

file(GLOB SOURCE_FILES "./*.cpp")
add_executable(arithmetic ${SOURCE_FILES})
target_link_libraries(arithmetic addition division)

install(TARGETS arithmetic DESTINATION ${BUILD_FOLDER})