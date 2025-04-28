#ifndef DISPUTIL_H
#define DISPUTIL_H

#include "employee.h"

void displayBanner();
void displayLogin(char[], int, char[], int);
void displayMenu(Employee);
void displayTimeTable(Employee);

//int getDaysOff(const Employee);
//Shift selectDayOff(Employee*, int&);
//void dayToStr(Shift);

#endif // !DISPUTIL_H

