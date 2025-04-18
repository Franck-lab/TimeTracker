#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "timeutil.h"

struct Employee {
	int ID;
	char fullName[256];
	TimeTable table;
	bool punch;
	double timeOffBalance = 48.0;  // Each employee starts with 48 hours time off balance
};

void clockIn(Employee*);
void clockOut(Employee*);
double calcWorkedHour(Employee*);
void takeTimeOff(Employee*, int);

#endif
