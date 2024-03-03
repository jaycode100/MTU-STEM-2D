//Main function file to be compiled
#include <iostream>
#include <conio.h>
#include "my_func.h"

using namespace std;

int main()
{
    //All other functions are linked to this ONE
    callAreaCalc();

    cout << "\n\nPress any key to continue...";
    getch();
    cout << endl;

    return 0;
}
