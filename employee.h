#ifndef EMPLOYEE_H
#define EMPLOYEE_H

struct TimeTable {
	int shift[7];
	int rawtime;
	char timeIn[20];
	char timeOut[20];
};

struct Employee {
	int ID;
	char fullName[256];
	TimeTable table;
	bool punch;
	double timeOffBalance;
};

void clockIn(Employee*);
void parseTime(char*, char*);
double calcWorkedHour(Employee*);

#endif
