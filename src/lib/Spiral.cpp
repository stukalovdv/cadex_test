#include "Spiral.h"

Spiral::Spiral(double radius, double zStart) : radius(radius), zStart(zStart)
{}

Point3D Spiral::getPoint(double t) const
{
    double x = radius * cos(t);
    double y = radius * sin(t);
    double z = zStart + t;
    return Point3D(x, y, z);
}

Vector3D Spiral::getDerivative(double t) const
{
    double dx_dt = -radius * sin(t);
    double dy_dt = radius * cos(t);
    double dz_dt = 1.0;
    return Vector3D(dx_dt, dy_dt, dz_dt);
}
