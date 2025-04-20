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
    char ID[5];
    int choice;
    displayBanner();

    do {
        displayLogin(name, 20, ID, 5);
        loginEmployee(&employee, name, ID);
    } while (!employee.logon);
    
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
        case 5:
            takeTimeOff(&employee, getDaysOff(employee));
            break;
        }
   
    return 0;
}
