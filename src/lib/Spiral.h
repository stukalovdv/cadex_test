#ifndef SPIRAL_H
#define SPIRAL_H

#include <cmath>

#include "Curve.h"

class Spiral : public Curve
{
public:
    Spiral(double radius, double zStart);

    Point3D getPoint(double t) const override;
    Vector3D getDerivative(double t) const override;

private:
    double radius;
    double zStart;
};

#endif  // SPIRAL_H
