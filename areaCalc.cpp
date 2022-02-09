// This program will get the user's choice from a listed table and calculate the area
// according to the shape.
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Trapezoid.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int userInput;
    double radius, side, length, width, base1, base2, height;

    // Presents the menus until the user enters a valid choice
    do
    {
        cout << "1 -- circle\n";
        cout << "2 -- square\n";
        cout << "3 -- rectangle\n";
        cout << "4 -- trapezoid\n";
        cout << "5 -- quit\n";
        cout << "Enter one of the choices listed below: ";
        cin >> userInput;
    }
    while((userInput > 5) || (userInput < 1));

    // Calculates the area of a circle
    if (userInput == 1)
    {
        Circle circleArea;
        cout << "Enter the radius length of the circle: ";
         cin >> radius;

        if(!circleArea.setRadius(radius))
        {
             cout << "Invalid radius entered." << endl;
        }
        else
        {
            cout << endl;
            cout << "Radius: " << fixed << setprecision(1) << circleArea.getRadius() << endl;
            cout << "Area: " << circleArea.calcArea() << endl;
        }
    }
    // Calculates the arae of a square
    else if (userInput == 2)
    {
        Square sqaureArea;
        //get side length
        cout << "\nThis will calculate the area of a square. Enter the side length: ";
        cin >> side;

        //if square length is <0
            if(!sqaureArea.setSide(side))
            {
                cout << "Invalid side entered." << endl;
            }
            else
            {
                cout << endl;
                cout << "Side: " << fixed << setprecision(1) << sqaureArea.getSide() << endl;
                cout << "Area: " << sqaureArea.calcArea() << endl;
            }
    }
    // Calculates area of a rectangle
    else if (userInput == 3)
    {
        Rectangle rectangleArea;
        //get length and width  
        cout << "\nThis will calculate the area of a rectangle. Enter the rectangle's length: ";
        cin >> length;
        cout << "Enter the rectangle's width: ";
        cin >> width;

            //if rectangle length is <0
            if(!rectangleArea.setLength(length))
            {
                cout << "Invalid length entered." << endl;
            }
            //if rectangle width is <0
            else if(!rectangleArea.setWidth(width))
            {
                cout << "Invalid width entered." << endl;
            }
            //if rectangle length and width are valid
            else
            {
                cout << endl;
                cout << "Length: " << fixed << setprecision(1) << rectangleArea.getLength() << endl;
                cout << "Width: " << rectangleArea.getWidth() << endl;
                cout << "Area: " << rectangleArea.calcArea() << endl;
            }
    }
    // Calculates the are of a trapezoid
    else if (userInput == 4)
    {
        Trapezoid trapezoidArea;
    
        //get length and width  
        cout << "\nThis will calculate the area of a trapezoid. Enter the first base length: ";
        cin >> base1;
        cout << "Enter the second base length: ";
        cin >> base2;
        cout << "Enter the height: ";
        cin >> height;

        //if base1 is <0
        if(!trapezoidArea.setBase1(base1))
        {
            cout << "Invalid first base length entered." << endl;
        }
        //if base2 is <0
        else if(!trapezoidArea.setBase2(base2))
        {
            cout << "Invalid second base length entered." << endl;
        }
        //if height is <0
        else if(!trapezoidArea.setHeight(height))
        {
            cout << "Invalid height entered." << endl;
        }
                
        //if base1, base2 and height are valid
        else
        {
            cout << endl;
            cout << "Base1: " << fixed << setprecision(1) << trapezoidArea.getBase1() << endl;
            cout << "Base2: " << trapezoidArea.getBase2() << endl;
            cout << "Height: " << trapezoidArea.getHeight() << endl;
            cout << "Area: " << trapezoidArea.calcArea() << endl;
        }
    }
    // Exit the program
    else if (userInput == 5)
    {
        return 0;
    }

    return 0;
}