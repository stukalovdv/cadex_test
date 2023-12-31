#include <corecrt.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <memory>
#include <vector>

#include "Circle.h"
#include "Ellipse.h"
#include "Spiral.h"

using std::cout, std::endl, std::make_unique, std::unique_ptr, std::vector,
    std::sort, std::setw, std::right, std::fixed, std::setprecision, std::left;

#define M_PI 3.1415926535897932

double generateRandomDouble(double, double);

int main()
{
    srand(static_cast<unsigned>(time(0)));

    // 2) Populate a container (e.g. vector or list) of objects of these types
    // created in random manner with random parameters.
    vector<unique_ptr<Curve>> curvesContainer;
    for (size_t i = 0; i < 5; i++)
    {
        double radius = generateRandomDouble(1.0, 5.0);
        double zCenter = generateRandomDouble(-2.0, 2.0);
        curvesContainer.push_back(make_unique<Circle>(radius, zCenter));
    }

    // 3) Print coordinates of points and derivatives of all curves in the
    // container at t = PI / 4.
    cout << "Coordinates and derivatives at t=PI/4:" << endl << fixed;
    for (const auto& curve : curvesContainer)
    {
        Point3D point = curve->getPoint(M_PI / 4);
        Vector3D derivative = curve->getDerivative(M_PI / 4);
        cout << "Point: (" << right << setw(10) << setprecision(6) << point.x
             << left << ", " << right << setw(10) << setprecision(6) << point.y
             << left << ", " << right << setw(10) << setprecision(6) << point.z
             << ")";
        cout << left << setw(18) << "    Derivative: (" << right << setw(10)
             << setprecision(6) << derivative.x << left << ", " << right
             << setw(10) << setprecision(6) << derivative.y << ", " << right
             << setw(10) << setprecision(6) << derivative.z << ")" << endl;
    }

    // 4) Populate a second container that would contain only circles from the
    // first container. Make sure the second container shares (i.e. not clones)
    // circles of the first one, e.g. via pointers.
    vector<Circle*> circlesContainer;
    for (const auto& curve : curvesContainer)
    {
        if (Circle* circle = dynamic_cast<Circle*>(curve.get()))
        {
            circlesContainer.push_back(circle);
        }
    }

    // 5) Sort the second container in the ascending order of circles’ radii.
    // That is, the first element has the smallest radius, the last - the
    // greatest.
    sort(circlesContainer.begin(), circlesContainer.end(),
         [](const auto& a, const auto& b) {
             return a->getRadius() < b->getRadius();
         });

    cout << "Sorted containers:\n";
    for (const auto& circle : circlesContainer)
    {
        cout << "Radius: " << circle->getRadius() << endl;
    }

    // 6) Compute the total sum of radii of all curves in the second container.
    double totalRadiusSum = 0.0;
    for (const auto& circle : circlesContainer)
    {
        totalRadiusSum += circle->getRadius();
    }
    cout << "Total radius sum: " << totalRadiusSum << endl;

    // Memory allocation
    curvesContainer.clear();
    return 0;
}

double generateRandomDouble(double min, double max)
{
    return min + static_cast<double>(rand()) / RAND_MAX * (max - min);
}