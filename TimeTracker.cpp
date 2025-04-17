// Project: TimeTracker
// version 1.0
// Author:

#include <iostream>
#include "employee.h"
#include "disputil.h"

using namespace std;

int main()
{
    Employee employee;
    char name[20];
    int ID;
    int choice;
    displayBanner();
    displayLogin(name, 20, ID);
    // Login fixture, verification or authorization
    displayMenu(name);
    
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    switch(choice)
    {
    case 1:
        clockIn(&employee);
        break;
    case 2:
        clockOut(&employee);
        break;
    }

    return 0;
}
