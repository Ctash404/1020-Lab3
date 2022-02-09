//Trapezoid class specification file
#ifndef TRAPEZOID_H
#define TRAPEZOID_H

//trapezoid class definition
class Trapezoid
{
    private:
        double base1, base2, height;
    public:
        bool setBase1(double);
        bool setBase2(double);
        bool setHeight(double);
        double getBase1();
        double getBase2();
        double getHeight();
        double calcArea();
};

#endif