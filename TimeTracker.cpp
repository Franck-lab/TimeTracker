// Project: TimeTracker
// version 1.0
// Author:

#include <iostream>

using namespace std;

void displayBanner();
void displayLogin(char[], int, int&);
void displayMenu(char []);

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
