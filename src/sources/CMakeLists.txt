add_executable (
    ${PROJECT_NAME}
    main.cpp
)

set_target_properties (
    ${PROJECT_NAME}
    PROPERTIES
        CXX_STANDARD 20
        CXX_STANDARD_REQUIRED
        YES
        CXX_EXTENSIONS
        NO
)

# target_compile_options
# ( ${PROJECT_NAME}
# PUBLIC /std:c++20
# -Wextra )

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
