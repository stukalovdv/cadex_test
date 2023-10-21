#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>

#include "Circle.h"
using std::vector, std::unique_ptr, std::make_unique, std::sort;
int main()
{
    // Curves container
    vector<Curve*> curvesContainer;
    curvesContainer.push_back(new Circle(3.0, 0.0));

    // Calculation of points and derivatives at t=1
    for (const auto& curve : curvesContainer)
    {
        Point3D point = curve->getPoint(1.0);
        Vector3D derivative = curve->getDerivative(1.0);
        // Some actions with the data
    }

    // Make a copy of curvesContainer
    vector<unique_ptr<Circle>> circlesContainer;
    for (const auto& curve : curvesContainer)
    {
        if (dynamic_cast<Circle*>(curve))
        {
            circlesContainer.push_back(
                make_unique<Circle>(*dynamic_cast<Circle*>(curve)));
        }
    }

    // Sort circlesContainer by radius
    sort(circlesContainer.begin(), circlesContainer.end(),
              [](const auto& a, const auto& b) {
                  return a->getRadius() < b->getRadius();
              });

    // Calculate total radius sum
    double totalRadiusSum = 0.0;
    for (const auto& circle : circlesContainer)
    {
        totalRadiusSum += circle->getRadius();
    }

    // Memory deallocation
    for (const auto& curve : curvesContainer)
    {
        delete curve;
    }

    return 0;
}
