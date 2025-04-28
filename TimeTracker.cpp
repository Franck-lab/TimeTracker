// Project: TimeTracker
// version 1.0
// Author: 

#include <iostream>
#include "employee.h"
#include "disputil.h"

using namespace std;

int main()
{
    Employee *employee;
    char name[20];
    char ID[5];
    int choice = -1;
    displayBanner();

    displayLogin(name, 20, ID, 5);
    employee = new Employee(ID, name);
    if (employee->login(ID, name))
        cout << "Login Sucessfull...\n";
    else
        cout << "Login Unsuccessful...\n";
    
    //while (choice != 5) {
    //    displayMenu(employee);

    //    cout << "Enter your choice (1-6): ";
    //    cin >> choice;

    //    switch (choice)
    //    {
    //    case 1:
    //        clockIn(&employee);
    //        break;
    //    case 2:
    //        clockOut(&employee);
    //        break;
    //    case 3:
    //        break;
    //    case 4:
    //        takeTimeOff(&employee, getDaysOff(employee));
    //        break;
    //    case 5: // Exit
    //        employee.logon = false;
    //        break;
    //    }
    //}
   
    return 0;
}
