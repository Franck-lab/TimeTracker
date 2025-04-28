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
    char reply;
    displayBanner();

    do {
        displayLogin(name, 20, ID, 5);
        employee = new Employee(ID, name);
        if (employee->login(ID, name)) {
            cout << "Login Sucessful...\n";
            break;
        }
        else {
            cout << "Login Unsuccessful...\n";
            cout << "Do you want to try again or exit(y/n)? (y - try again, n - exit): ";
            cin >> reply;
            cin.ignore();
            cout << endl;
        }
    } while (reply == 'y');
        
    
    while (choice != 5) {
        displayMenu(*employee);

        cout << "Enter your choice (1-5): ";
        cin >> choice;
        cin.ignore();

       switch (choice)
        {
        case 1:
            if (employee->clockIn())
                cout << "\nPunch in successful\tClock In: " << ctime(employee->getPunchIn()) << endl;
            else
                cout << "\nClock In: " << ctime(employee->getPunchIn()) << endl;
            cout << "Tap ENTER to continue...";
            cin.get();
            break;
        case 2:
            if (employee->clockOut())
                cout << "\nPunch out successful\tClock Out: " << ctime(employee->getPunchOut()) << endl;
            else
                cout << "\nClock Out: " << ctime(employee->getPunchOut()) << endl;
            cout << "Tap ENTER to continue...";
            cin.get();
            break;
        case 3:
            displayTimeTable(*employee);
            cout << "Tap ENTER to continue...";
            cin.get();
            break;
        case 4:
           //takeTimeOff(&employee, getDaysOff(employee));
            break;
        case 5: // Exit
            //employee.logon = false;
            break;
        }
    }
   
    return 0;
}
