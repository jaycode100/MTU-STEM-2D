/* This functions file calculates the surface area of the following objects:
   -Square
   -Rectangle
   -Triangle */

#include <iostream>
#include <cctype>
#include "shapes.h"

using namespace std;

void callAreaCalc()
{
    void getArea(char);
    char inputOpt[3] = {'r', 's', 't'};
    char confirm = 'N';
    char select;

    system("cls");
    cout << "This Program calculates the surface area of:\n" << " -Square\t -Rectangle\t -Triangle\n" << endl;
    cout << "Which of the objects above do you wish to calculate?\n" << endl;
    cout << "Enter\n's' \t for Square\n" <<
    "'r' \t for Rectangle\n" <<
    "'t' \t for Triangle\n" << endl;
    cout << "\n -> ";
    cin >> select;
    select = tolower(select);

    while (true)
    {
        int c = 0;
        while (c < 3)
        {
            if (select == inputOpt[c])
            {
                confirm = 'K';  break;
            }
            c++;
        }
        if (confirm == 'N')
        {
            cout << "\nPlease re-enter: ";
            cin >> select;
        }
        else
            break;
    }

    waiting(1350);
    getArea(select);
}

void getArea(char option)
{
    switch(option)
    {
    case 'r':
        displayRectangle();
        break;

    case 't':
        displayTriangle();
        break;

    case 's':
        displaySquare();
        break;
    }
}
