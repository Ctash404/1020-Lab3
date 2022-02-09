//square.h is the square class specification file.
#ifndef SQUARE_H
#define SQUARE_H

//Square class declaration
class Square
{
    private:
        double side;
    public:
        bool setSide(double); 
        double getSide();
        double calcArea();
};

#endif