cmake_minimum_required(VERSION 3.2)
project(addition C CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

file(GLOB_RECURSE HEADER_FILES "./*.h")
file(GLOB_RECURSE SOURCE_FILES "./*.cpp")


add_library(addition SHARED STATIC ${SOURCE_FILES})


install(TARGETS addition DESTINATION ${BUILD_FOLDER})
install(FILES ${HEADER_FILES} DESTINATION include/addition)