#ifndef RECTANGLE_H
#define RECTANGLE_H

//rectangle class declaration
class Rectangle
{
    private:
        double length, width;
    public:
        bool setLength(double);
        bool setWidth(double); 
        double getLength();
        double getWidth();
        double calcArea();
};

#endif