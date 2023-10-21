#include "Circle.h"

Circle::Circle(double radius, double zCenter) : radius(radius), zCenter(zCenter)
{}

Point3D Circle::getPoint(double t) const
{
    return {radius * cos(t), radius * sin(t), zCenter};
}

Vector3D Circle::getDerivative(double t) const
{
    return {-radius * sin(t), radius * cos(t), 0.0};
}

double Circle::getRadius() const
{
    return radius;
}
