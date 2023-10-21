add_library (
    Point3D STATIC
    Point3D.cpp
    Point3D.h
)
target_include_directories (
    Point3D
    PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
)
add_library (
    Vector3D STATIC
    Vector3D.cpp
    Vector3D.h
)
target_include_directories (
    Vector3D
    PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
)
add_library (
    Curve STATIC
    Curve.cpp Curve.h
)
target_include_directories (
    Curve
    PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
)
target_link_libraries (
    Curve Point3D
    Vector3D
)
