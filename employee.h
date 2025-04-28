#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "timeutil.h"

class Employee {
private:
	char ID[5] = "";
	char fullname[255] = "";
	bool punch;
	bool logon;
	time_t punchIn;
	time_t punchOut;
	double timeOffBalance;
	TimeTable table[2];  //Biweekly timetable
public:
	Employee(char*, char*);
	bool login(char*, char*);
	char* getFullname();
	time_t* getPunchIn();
	time_t* getPunchOut();
	TimeTable* getTable();
	//bool logout();
	bool clockIn();
	bool clockOut();
};

#endif
