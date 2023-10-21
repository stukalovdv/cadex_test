#ifndef CURVE_H
#define CURVE_H
#include "Point3D.h"
#include "Vector3D.h"

class Curve
{
public:
    virtual Point3D getPoint(double t) const = 0;
    virtual Vector3D getDerivative(double t) const = 0;
    virtual ~Curve()
    {}
};

#endif  // CURVE_H