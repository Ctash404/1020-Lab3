#ifndef CIRLCE_H
#define CIRLCE_H

//Circle class declaration
class Circle
{
    private:
        double radius;
    public:
        bool setRadius(double); 
        double getRadius();
        double calcArea();
};

#endif