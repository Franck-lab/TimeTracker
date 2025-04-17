#ifndef EMPLOYEE_H
#define EMPLOYEE_H

struct Employee {
	int ID;
	char fullName[256];
	double workedHour;
	bool punch;
	double timeOffBalance;
};

#endif
