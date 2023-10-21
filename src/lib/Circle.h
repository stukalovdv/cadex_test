#ifndef CIRCLE_H
#define CIRCLE_H

#include <cmath>

#include "Curve.h"


class Circle : public Curve
{
public:
    Circle(double radius, double zCenter);
    Point3D getPoint(double t) const override;
    Vector3D getDerivative(double t) const override;
    double getRadius() const;

private:
    double radius;
    double zCenter;
};

#endif  // CIRCLE_H