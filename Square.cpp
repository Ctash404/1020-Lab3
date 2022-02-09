//square.cpp is the Square class function implementation file.
#include "Square.h"

//if side entered is valid, copy it to side
bool Square::setSide(double s)
{
    bool validData = true;

    if (s >= 0)
        side = s;
    else
        validData = false;

    return validData;
}

double Square::getSide()
{
    return side;
}

double Square::calcArea()
{
    return side * side;
}