cmake_minimum_required (
    VERSION 3.0
    FATAL_ERROR
)

set (PROJECT_NAME CADEX)

project (${PROJECT_NAME}
         VERSION 0.2
)

set (
    CMAKE_RUNTIME_OUTPUT_DIRECTORY
    ${CMAKE_SOURCE_DIR}/bin
)
add_subdirectory (
    src/lib
)
add_subdirectory (
    src/sources
)
