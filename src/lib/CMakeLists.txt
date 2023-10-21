#Point3D
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
#Vector3D
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
#Curve
add_library (
    Curve STATIC
    Curve.h
)
target_include_directories (
    Curve
    PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
)
target_link_libraries (
    Curve 
    Point3D
    Vector3D
)
#Circle
add_library (
    Circle STATIC
    Circle.cpp Circle.h
)
target_include_directories (
    Circle
    PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
)
target_link_libraries (
    Circle Curve 
    Point3D
    Vector3D
)
#Ellipse
add_library (
    Ellipse STATIC    
    Ellipse.cpp
    Ellipse.h
)
target_include_directories (
    Ellipse
    PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
)
target_link_libraries (
    Ellipse
    Curve
    Point3D
    Vector3D
)
#Spiral
add_library (
    Spiral STATIC
    Spiral.cpp
    Spiral.h
)
target_include_directories (
    Spiral
    PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
)
target_link_libraries (
    Spiral    
    Curve
    Point3D
    Vector3D
)