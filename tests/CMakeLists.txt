set(PROJECT_NAME "${PROJECT_NAME}_tests")
project(${PROJECT_NAME})

set(TESTS_SOURCE_FILES main.cpp TitchTests.cpp)

include_directories(${PROJECT_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} ${TESTS_SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} ${EXTRA_LIBS} CppUTest CppUTestExt)
