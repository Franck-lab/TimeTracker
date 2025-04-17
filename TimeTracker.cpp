// Project: TimeTracker
// version 1.0
// Author:

#include <iostream>

using namespace std;

void displayBanner();
void displayLogin(char[], int, int&);

int main()
{
    char name[20];
    int ID;
    displayBanner();
    displayLogin(name, 20, ID);


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
