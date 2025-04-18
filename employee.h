#ifndef EMPLOYEE_H
#define EMPLOYEE_H

enum Shift{MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY, ON, OFF};

struct TimeTable {
	int shift[7];
	int rawtimeIn;
	int rawtimeOut;
	char timeIn[20];
	char timeOut[20];
};

struct Employee {
	int ID;
	char fullName[256];
	TimeTable table;
	bool punch;
	double timeOffBalance = 48.0;  // Each employee starts with 48 hours time off balance
};

void clockIn(Employee*);
void clockOut(Employee*);
void parseTime(char*, char*);
void parseDate(char[], int[]);
double calcWorkedHour(Employee*);
void takeTimeOff(Employee*, int);

#endif
