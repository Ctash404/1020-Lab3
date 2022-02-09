//trapezoid class function implementation file
#include "Trapezoid.h"

//if base1 entered is valid, copy it to base1
bool Trapezoid::setBase1(double bas1)
{
    bool validData = true;

    if (bas1 >= 0)
        base1 = bas1;
    else
        validData = false;

    return validData;
}


bool Trapezoid::setBase2(double bas2)
{
    bool validData = true;

    if (bas2 >= 0)
        base2 = bas2;
    else
        validData = false;

    return validData;
}

bool Trapezoid::setHeight(double hei)
{
    bool validData = true;

    if (hei >= 0)
        height = hei;
    else
        validData = false;

    return validData;
}

double Trapezoid::getBase1()
{
    return base1;
}

double Trapezoid::getBase2()
{
    return base2;
}

double Trapezoid::getHeight()
{
    return height;
}

double Trapezoid::calcArea()
{
    return ((base1 + base2)/2) * height;
}