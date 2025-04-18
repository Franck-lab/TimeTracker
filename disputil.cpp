#include <iostream>
#include "disputil.h"
#include "employee.h"

using namespace std;

void displayBanner() {
    cout << "*****************************************\n";
    cout << "*\tOMEGA SOLUTIONS, INC\t\t*\n";
    cout << "*\t\tWelcome\t\t\t*\n";
    cout << "*****************************************\n\n";
}

void displayLogin(char name[], int size, int& ID) {
    cout << "Name: ";
    cin.getline(name, 20);
    cout << "Employee ID: ";
    cin >> ID;
}

void displayMenu(char name[]) {
    cout << "\n------------ Home -------------\n\n";
    cout << name << "\tClock in: Yes\t" << "Worked Hours: " << 8.25 << endl; // Change here with time stamp and calculated hours
    cout << "\n1. Punch In\n";
    cout << "2. Punch Out\n";
    cout << "3. Timetable\n";
    cout << "4. Open Shift\n";
    cout << "5. Take Time Off\n";
    cout << "6. Exit\n\n";
}

int getDaysOff(const Employee e) {
    int days;
    while (true) {
        cout << "\nHow many days are you taking? ";
        cin >> days;
        if (days < 0)
            cout << "Days must be greater than or equal to zero. Try again.\n";
        else if (e.timeOffBalance < days * 8.0) {
            cout << "The number of days exceeds your time off balance, " << e.timeOffBalance << " hours.\n";
            days = 0;
            break;
        }
        else
            break;
    }
    return days;
}