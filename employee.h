#ifndef EMPLOYEE_H
#define EMPLOYEE_H

enum Shift{MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY, ON, OFF}; // Move this to a separate file
// Remove ON, always specify the day

struct TimeTable { // Move this to a separate file
	Shift shift[7] = {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, OFF, OFF}; // Testing pursposes
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
void parseTime(char[], char[]); // Move this to a separate file
void parseDate(char[], int[]); // Move this to a separate file
double calcWorkedHour(Employee*);
void takeTimeOff(Employee*, int);

#endif
