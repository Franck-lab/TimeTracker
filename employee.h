#ifndef EMPLOYEE_H
#define EMPLOYEE_H


class Employee {
private:
	char ID[5] = "";
	char fullname[255] = "";
	bool punch;
	bool logon;
	time_t punchIn;
	time_t punchOut;
	double timeOffBalance;
public:
	Employee(char*, char*);
	bool login(char*, char*);
	char* getFullname();
	time_t* getPunchIn();
	//bool logout();
	bool clockIn();
	//bool clockOut();
};

#endif
