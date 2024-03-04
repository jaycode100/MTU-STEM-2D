//This file contains the functions for calculating the distance between any two points
#include <iostream>
#include <cmath>
#include <conio.h>
#include "formattings.h"

using namespace std;

/// Function to calculate the distance between any two points
void calculateDistance()
{
    //Distance Between Two Points, d
    //d = sqrt((x2-x1)^2 + (y2-y1)^2)
    void calculateMid(float, float, float, float);
    float x, y, xx, yy, X, Y, expression = 0.0;

    system("cls");
    cout << "Please enter the points A, B..." << endl;
    cout << "\n  A" << endl;
    cout << " (*x1, y1): ";
    cin >> x;
    cout << " (x1, *y1): ";
    cin >> y;
    cout << "\n B" << endl;
    cout << " (*x2, y2): ";
    cin >> xx;
    cout << " (x2, *y2): ";
    cin >> yy;

    X = xx - x;
    Y = yy - y;
    expression = (X * X) + (Y * Y);

    cout << "\n\n\t\tCALCULATING THE DISTANCE...\n" << endl;
    cout << "\t\t Point 1: A (" << x << ", " << y << ") \n";
    cout << "\t\t Point 2: B (" << xx << ", " << yy << ") \n";
    cout << "\n\n\t\t DISTANCE |AB| is: " << sqrt(expression) << endl;
    cout << "\n\t\tPress any key to continue.";
    getch();
    cout << "\n\n\nWe also calculate midpoint :)" << endl;
    waiting(2000);
    calculateMid(x, y, xx, yy);
}

/// Function to calculate the mid-point of any two given coordinates
void calculateMid(float x_1, float y_1, float x_2, float y_2)
{
    float mid_1, mid_2 = 0.0;

    mid_1 = (x_1 + x_2) / 2;
    mid_2 = (y_1 + y_2) / 2;

    cout << "\n\n\t\tCALCULATING THE MIDPOINT...\n" << endl;
    cout << "\t\t Point 1: A (" << x_1 << ", " << y_1 << ") \n";
    cout << "\t\t Point 2: B (" << x_2 << ", " << y_2 << ") \n";
    cout << "\n\n\t\t MID-POINT -AB- is:  (" << mid_1 << ", " << mid_2 << ") \n";
    cout << "\n\t\tPress any key to continue.";
    getch();
}
