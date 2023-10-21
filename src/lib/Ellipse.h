#ifndef ELLIPSE_H
#define ELLIPSE_H

#include <cmath>

#include "Curve.h"

class Ellipse : public Curve
{
public:
    Ellipse(double a, double b, double zCenter);

    Point3D getPoint(double t) const override;
    Vector3D getDerivative(double t) const override;

private:
    double a;
    double b;
    double zCenter;
};
#endif  // ELLIPSE_H