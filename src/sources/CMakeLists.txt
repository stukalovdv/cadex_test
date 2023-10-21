add_executable (
    ${PROJECT_NAME}
    main.cpp
)

set (CMAKE_CXX_STANDARD
     20
)
set (
    CMAKE_CXX_STANDARD_REQUIRED
    ON
)
set (CMAKE_CXX_EXTENSIONS
     NO
)

target_compile_options (
    ${PROJECT_NAME}
    PUBLIC -Wall -Wextra
           -Wpedantic
)

target_include_directories (
    ${PROJECT_NAME}
    PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
)
target_include_directories (
    ${PROJECT_NAME}
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/../lib
)

target_link_libraries (
    ${PROJECT_NAME}
    Point3D
    Vector3D
    Curve
    Circle
    Ellipse
    Spiral
)
