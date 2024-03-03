//All functions used within this program file are for evaluation of area
//This function is integrated into main()!!!
#include <iostream>
#include <time.h>
#include "my_func.h"

using namespace std;

float num_check(float);
void waiting(unsigned int);

//Classes to obtain the parameters used to getting the area
void displayRectangle()
{
    ///BASE CLASS - to get the parameters for the Rectangle
    class Shapes
    {
    public:
        double length;
        double breadth;
        double getRectangleParam()   //Function to calculate the surface area of the RECTANGLE
        {
            double area = 0.0;
            system("cls");
            cout << "\tTo calculate the surface area of a Rectangle...\n" << endl;
            cout << "Please enter your desired Length and Breadth values" << endl;
            cout << "Length: ";
            cin >> length;
            length = num_check(length);
            cout << "\nBreadth: ";
            cin >> breadth;
            breadth = num_check(breadth);
            if (breadth == length)
            {
                cout << endl;
                while (true)
                {
                    cout << "The sides can not be the same value!" << endl;
                    cout << "Re-enter -> Breadth: ";
                    cin >> breadth;
                    if (breadth != length)
                        break;
                }
            }
            area = length * breadth;    //The surface area is Length * Breadth
            return area;
        }
    };

    Shapes my_Rect;
    double answer = my_Rect.getRectangleParam();
    cout << "The area is: " << answer << endl;
    cout << "The length is: " << my_Rect.length << endl;
    cout << "The breadth is: " << my_Rect.breadth << endl;
    waiting(3000);
    distanceCalc(my_Rect.length, my_Rect.breadth, 'O');

    return;
}

void displayTriangle()
{
    ///Derived Class - to get the parameters for the Triangle
    class Triangle // : public Shapes
    {
    public:
        double height;
        double baselen;
        double getTriangleParam()   //Function to calculate the surface area of the TRIANGLE
        {
            double area = 0.0;
            char right_ang;

            system("cls");
            cout << "\tTo calculate the surface area of a Triangle...\n" << endl;
            cout << "Please enter your desired Base-Length and Height values" << endl;
            cout << "Length of Base: ";
            cin >> baselen;
            baselen = num_check(baselen);
            cout << "\nHeight: ";
            cin >> height;
            height = num_check(height);

            cout << "\n\nWhich of these types are you calculating the area for?" << endl;
            cout << "- Equilateral Triangle \n" <<
                 "- Isosceles Triangle \n" <<
                 "- Right-Angle Triangle \n" << endl;
            cout << "Enter 'R' for right-angle triangle, any other key for the other two..." << endl;
            cout << "(The other two have the same area calculation)\n...";
            cin >> right_ang;
            if (right_ang == 'R' || right_ang == 'r')
            {
                area = baselen * height;          //The surface area is Base * Height
                cout << "\t Calculating for the right-angle triangle...\n";
                waiting(1000);
            }
            else
                area = 0.5 * baselen * height;    //The surface area is 0.5(Base * Height)
            return area;
        }
    };

    Triangle my_Tri;
    double answer = my_Tri.getTriangleParam();
    cout << "The area is: " << answer << endl;
    cout << "The length is: " << my_Tri.baselen << endl;
    cout << "The breadth is: " << my_Tri.height << endl;
    waiting(3000);
    distanceCalc(my_Tri.baselen, my_Tri.height, 'N');

    return;
}

void displaySquare()
{
    ///Derived Class - to get the parameters for the Square
    class Square // : public Shapes
    {
    public:
        double length = 0.0;
        double getSquareParam()   //Function to calculate the surface area of the SQUARE
        {
            double area = 0.0;
            system("cls");
            cout << "\tTo calculate the surface area of a Square...\n" << endl;
            cout << "Please enter your desired Length value" << endl;
            cout << "Length: ";
            cin >> length;
            length = num_check(length);
            //The surface area is Length ^ 2
            area = length * length;
            return area;
        }
    };

    Square my_Sq;
    double answer = my_Sq.getSquareParam();
    cout << "The area is: " << answer << endl;
    cout << "The length is: " << my_Sq.length << endl;
    waiting(3000);
    distanceCalc(my_Sq.length, 0.0, 'O');

    return;
}


///Function to apply timing delay
void waiting(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

/// This is the function to forestall wrong input type expected
float num_check(float v)
{
    while (v <= 0)
    {
        cout << "\nInput must be greater than zero.\nRe-enter: ";
        cin >> v;
        if (v > 0)
            break;
    }
    return v;
}
