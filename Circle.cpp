//Cirlce.cpp is the Cirlce class function implementation file.
#include "Circle.h"

//if width entered is valid, copy it to width
bool Circle::setRadius(double r)
{
    bool validData = true;

    if (r >= 0)
        radius = r;
    else
        validData = false;

    return validData;
}


double Circle::getRadius()
{
    return radius;
}

double Circle::calcArea()
{
    return 3.14 * radius * radius;
}