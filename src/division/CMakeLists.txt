cmake_minimum_required(VERSION 3.2)
project(division C CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

file(GLOB_RECURSE HEADER_FILES "./*.h")
file(GLOB_RECURSE SOURCE_FILES "./*.cpp")


add_library(division SHARED STATIC ${SOURCE_FILES})


install(TARGETS division DESTINATION ${BUILD_FOLDER})
install(FILES ${HEADER_FILES} DESTINATION include/divisible)