//Main function file to be compiled
#include <iostream>
#include <conio.h>
#include "my_func.h"

using namespace std;

main()
{
    //All other functions are linked to this ONE
    char myChoice;

    callAreaCalc();
    cout << "\n\nPress any key to continue...";
    getch();

    cout << "\n\n\n\nDo you want to make use of our distance calculator? (Y/N)\n--> ";
    cin >> myChoice;
    if (myChoice == 'Y' || myChoice == 'y')
        calculateDistance();

    cout << "\nGOODBYE!!" << endl;
}
