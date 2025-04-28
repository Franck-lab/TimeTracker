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

void displayLogin(char name[], int size1, char ID[], int size2) {
    cout << "Name: ";
    cin.getline(name, size1);
    cout << "Employee ID: ";
    cin.getline(ID, size2);
}

void displayMenu(Employee e) {
    cout << "\n------------ Home -------------\n\n";
    cout << e.getFullname() << "\tClock in: Yes\t" << "Worked Hours: " << 8.25 << endl; // Change here with time stamp and calculated hours
    cout << "\n1. Punch In\n";
    cout << "2. Punch Out\n";
    cout << "3. Timetable\n";
    cout << "4. Take Time Off\n";
    cout << "5. Exit\n\n";
}

void displayTimeTable(Employee e) {
    TimeTable* t = e.getTable();
    
    t[0].printTable();
    t[1].printTable();
}
