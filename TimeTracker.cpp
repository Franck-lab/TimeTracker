// Project: TimeTracker
// version 1.0
// Author:

#include <iostream>
#include "disputil.h"

using namespace std;

int main()
{
    char name[20];
    int ID;
    int choice;
    displayBanner();
    displayLogin(name, 20, ID);
    // Login fixture, verification or authorization
    displayMenu(name);
    
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    return 0;
}
