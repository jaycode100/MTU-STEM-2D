//Function to Calculate the Distance between Two Points
#include <iostream>
#include <math.h>
#include <cmath>
#include <conio.h>
#include "shapes.h"
#include "formattings.h"

using namespace std;

void formula(double, double, double, double, char);
float firstCoordinate(double);
float secondCoordinate(double);
void createCoordinates(float, float, float, float);

struct CartesianPair
{
    double x;
    double y;
    void get()
    {
        cout << "Enter first number(*x, y) : ";
        cin >> x;
        x = value_check(x);
        cout << "\nEnter second number(x, *y) : ";
        cin >> y;
        y = value_check(y);
    }
    void store(double num1, double num2)
    {
        x = num1;
        y = num2;
    }
};

void distanceCalc(double distance, double distance2, char checking)
{
    struct CartesianPair my_pair;
    double x_origin, y_origin = 0;
    system("cls");
    cout << "Please Enter the Value Pair of Origin you want to begin from...\n" << endl;
    my_pair.get();
    system("cls");
    cout << "\n\n\n\t\tYou entered ... ( " << my_pair.x << " , " << my_pair.y << " ) -> ORIGIN";
    waiting(2000);
    x_origin = my_pair.x;
    y_origin = my_pair.y;
    formula(x_origin, y_origin, distance, distance2, checking);
    waiting(3000);

    return;
}

void formula(double x_origin = 0, double y_origin = 0, double dist_len = 0,
             double dist_bre = 0, char checking = 'O')
{
    //Check 'double calculateDistance()' to see how distance is being calculated
    double num1, num2, diagonal = 0.0;
    if (checking != 'T')
    {
        if (dist_bre > dist_len)
        {
            num1 = sqrt(dist_bre);
            num2 = sqrt(dist_len);
        }
        else if (dist_bre == 0.0)   //SQUARE
        {
            num1 = sqrt(dist_len);
            num2 = sqrt(dist_len);
        }
        else
        {
            num1 = sqrt(dist_len);
            num2 = sqrt(dist_bre);
        }
    }
    else    //TRIANGLE
    {
        double h = pow(dist_bre, 2);
        double b = pow(dist_len, 2);
        double expression = 4 * h - b;
        num1 = sqrt(dist_len);
        num2 = sqrt(expression);
    }
    system("cls");

    struct CartesianPair fpair;
    fpair.store(num1, num2);
    cout << "The pair of components (x, y) is: (" << fpair.x << ", " << fpair.y << ")" << endl;
    if (checking != 'T')
    {
        diagonal = (float)sqrt(pow(fpair.x, 2) + pow(fpair.y, 2));
        cout << "\n---The Diagonal is:  " << diagonal << " units" << endl;
    }
    else
    {
        double expression = pow(fpair.x, 2) + (4 * pow(fpair.y, 2));
        double expression1 = pow(fpair.x, 2) + pow(fpair.y, 2);
        double expression2 = (4 * pow(fpair.x, 2)) + pow(fpair.y, 2);
        double diagonal_1 = (float)(sqrt(expression1) / 2);
        double diagonal_2 = (float)(sqrt(expression2) / 2);
        diagonal = (float)(sqrt(expression) / 2);
        cout << "\n---The First Diagonal (default : Height) is:  " << diagonal << " units" << endl;
        cout << "---The Second Diagonal is:  " << diagonal_1 << " units" << endl;
        cout << "---The Third Diagonal is:  " << diagonal_2 << " units" << endl;
    }

    cout << "\n\n Press any key to continue...";
    getch();
    cout << "\n Please hold on!";
    waiting(2750);
    float x_2 = firstCoordinate(fpair.x);
    float y_2 = secondCoordinate(fpair.y);
    system("cls");
    createCoordinates((float)x_origin, x_2, (float)y_origin, y_2);

    return;

}

float firstCoordinate(double coord_1)
{
    float xx = (float)round(coord_1);
    return xx;
}

float secondCoordinate(double coord_2)
{
    float yy = (float)round(coord_2);
    return yy;
}

void createCoordinates(float x_1, float x_coord, float y_1, float y_coord)
{
    x_coord += x_1;
    y_coord += y_1;
    CartesianPair my_Pair;

    my_Pair.store(x_1, y_1);
    cout << "\n\n\n\t\tVERTEX 1: (" << my_Pair.x << ", " << my_Pair.y << ")" << endl;
    my_Pair.store(x_coord, y_1);
    cout << "\t\tVERTEX 2: (" << my_Pair.x << ", " << my_Pair.y << ")" << endl;
    my_Pair.store(x_1, y_coord);
    cout << "\t\tVERTEX 3: (" << my_Pair.x << ", " << my_Pair.y << ")" << endl;
    my_Pair.store(x_coord, y_coord);
    cout << "\t\tVERTEX 4: (" << my_Pair.x << ", " << my_Pair.y << ")" << endl;

    return;
}
