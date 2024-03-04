//This function file contains all the functions that handle formatting and error checking
#include <iostream>
#include <time.h>

using namespace std;

/// Function to apply timing delay
void waiting(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

/// Function to forestall wrong input type expected
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

/// Function (2) to forestall wrong input type expected
double value_check(double n)
{
    while (n < 0)
    {
        cout << "\tYou can not enter a negative value\n\t...";
        cin >> n;
        if (n >= 0)
            break;
    }
    return n;
}
