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

//int getDaysOff(const Employee e) {
//    int days;
//    while (true) {
//        cout << "\nHow many days are you taking? ";
//        cin >> days;
//        cin.ignore();
//        if (days < 0)
//            cout << "Days must be greater than or equal to zero. Try again.\n";
//        else if (e.timeOffBalance < days * 8.0) {
//            cout << "The number of days requested exceeds your time off balance, " << e.timeOffBalance << " hours.\n";
//            days = 0;
//            break;
//        }
//        else
//            break;
//    }
//    return days;
//}

//Shift selectDayOff(Employee* e, int& index) {
//    char reply = 'n';
//
//    for (int count = index+1; count < 7; count++) {
//        if (e->table.shift[count] != OFF) {
//            cout << "\t";
//            dayToStr(e->table.shift[count]);
//            cin >> reply;
//        }
//        if (reply == 'y'){
//            index = count;
//            return OFF;
//        }
//    }
//    return ON;
//}

//void dayToStr(Shift day) {
//    switch (day) {
//    case MONDAY:
//        cout << "Monday: ";
//        break;
//    case TUESDAY:
//         cout << "Tuesday: ";
//         break;
//    case WEDNESDAY:
//         cout << "Wednesday: ";
//         break;
//    case THURSDAY:
//         cout << "Thursday: ";
//         break;
//    case FRIDAY:
//         cout << "Friday: ";         
//         break;
//    case SATURDAY:
//        cout << "Saturday: ";
//        break;
//    case SUNDAY:
//        cout << "Sunday: ";
//        break;
//    }
//}