cmake_minimum_required(VERSION 3.2)
project(tests)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

include_directories(${VENDOR_DIR})
include_directories(${SOURCE_DIR})

set(PROJECTS_SOURCE_FILES "")
subdirlist(PROJECTS_MODULES ${SOURCE_DIR})
foreach(MODULE_DIR ${PROJECTS_MODULES})
    set(files "")
    file(GLOB_RECURSE files "${SOURCE_DIR}/${MODULE_DIR}/*.cpp")
    list(APPEND PROJECTS_SOURCE_FILES ${files})
endforeach()
file(GLOB_RECURSE TESTS_SOURCE_FILES "./*.cpp")

add_executable(tests ${TESTS_SOURCE_FILES} ${PROJECTS_SOURCE_FILES})
install(TARGETS tests DESTINATION ${BUILD_FOLDER})