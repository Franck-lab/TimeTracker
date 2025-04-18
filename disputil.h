#ifndef DISPUTIL_H
#define DISPUTIL_H

#include "employee.h"

void displayBanner();
void displayLogin(char[], int, int&);
void displayMenu(char[]);
int getDaysOff(const Employee);
Shift selectDayOff(Employee*, int&);
void dayToStr(Shift);

#endif // !DISPUTIL_H

