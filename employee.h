#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "timetable.h"

struct Employee {
	int ID;
	char fullName[256];
	TimeTable table;
	bool punch;
	double timeOffBalance;
};

#endif
