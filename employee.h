#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "timeutil.h"

//struct Employee {
//	char ID[5];
//	char fullName[256];
//	TimeTable table;
//	bool punch = false;
//	bool logon = false;
//	double timeOffBalance = 48.0;  // Each employee starts with 48 hours time off balance
//};
//
//void clockIn(Employee*);
//void clockOut(Employee*);
//double calcWorkedHour(Employee*);
//void takeTimeOff(Employee*, int);
//bool loginEmployee(Employee*, char*, char*);

class Employee {
private:
	char ID[5] = "";
	char fullname[255] = "";
	bool punch;
	bool logon;
	double timeOffBalance;
public:
	Employee(char*, char*);
	bool login(char*, char*);
	char* getFullname();
	//bool logout();
	//bool clockIn();
	//bool clockOut();
};

#endif
