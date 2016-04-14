set(TESTLIB01_DIR_NAME "testlib01")
if (USE_TESTLIB01)
    add_subdirectory(${TESTLIB01_DIR_NAME})
    set(EXTRA_LIBS_INCLUDE_PATHS
        "${EXTRA_LIBS_INCLUDE_PATHS}; "
        "${CMAKE_CURRENT_SOURCE_DIR}/${TESTLIB01_DIR_NAME}"
    )
    set(EXTRA_LIBS "${EXTRA_LIBS}" ${TESTLIB01_NAME})
endif (USE_TESTLIB01)

# ----------------------------------------------------------------------------------------------------------------------

set(TESTLIB02_DIR_NAME "TestClassLib01")
add_subdirectory(${TESTLIB02_DIR_NAME})
set(EXTRA_LIBS_INCLUDE_PATHS
        "${EXTRA_LIBS_INCLUDE_PATHS}; "
        "${CMAKE_CURRENT_SOURCE_DIR}/${TESTLIB02_DIR_NAME}"
)
set(EXTRA_LIBS "${EXTRA_LIBS}" ${TESTCLASSLIB01_NAME})

# ----------------------------------------------------------------------------------------------------------------------

set(EXTRA_LIBS_INCLUDE_PATHS ${EXTRA_LIBS_INCLUDE_PATHS} PARENT_SCOPE)
set(EXTRA_LIBS ${EXTRA_LIBS} PARENT_SCOPE)
