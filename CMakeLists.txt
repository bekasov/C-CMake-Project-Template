cmake_minimum_required(VERSION 3.0)
set(PROJECT_NAME "Soundex")

project(${PROJECT_NAME})

set (APP_VERSION_MAJOR 1)
set (APP_VERSION_MINOR 4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(PROJECT_SOURCE_DIR_NAME "src")
set(PROJECT_TESTS_SOURCE_DIR "tests")

add_subdirectory(${PROJECT_SOURCE_DIR_NAME})

add_subdirectory(${PROJECT_TESTS_SOURCE_DIR})

configure_file("SoundexConfig.h.in" "${PROJECT_BINARY_DIR}/SoundexConfig.h")
