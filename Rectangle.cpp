//Rectangle.cpp is the Rectangle class function implementation file.
#include "Rectangle.h"

//if length entered is valid, copy it to length
bool Rectangle::setLength(double len)
{
    bool validData = true;

    if (len >= 0)
        length = len;
    else
        validData = false;

    return validData;
}

//if width entered is valid, copy it to width
bool Rectangle::setWidth(double w)
{
    bool validData = true;

    if (w >= 0)
        width = w;
    else
        validData = false;

    return validData;
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::calcArea()
{
    return length * width;
}