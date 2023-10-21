#include "Ellipse.h"

Ellipse::Ellipse(double a, double b, double zCenter)
    : a(a), b(b), zCenter(zCenter)
{}

Point3D Ellipse::getPoint(double t) const
{
    double x = a * cos(t);
    double y = b * sin(t);
    return Point3D(x, y, zCenter);
}

Vector3D Ellipse::getDerivative(double t) const
{
    double dx_dt = -a * sin(t);
    double dy_dt = b * cos(t);
    return Vector3D(dx_dt, dy_dt, 0.0);
}
