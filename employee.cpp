#include <iostream>
#include <ctime>
#include <fstream>
#include "employee.h"
#include "disputil.h"
#include "timeutil.h"

using namespace std;

Employee::Employee(char *id, char* name) {
	strcpy(ID, id);
	strcpy(fullname, name);
	punch = false;
	logon = false;
	timeOffBalance = 0.0;
}

bool Employee::login(char * id, char* name) {
	ifstream employeeFile;
	char filename[310] = "";
	Employee e(id, name);

	strcat_s(filename, strtok(name, " "));
	strcat_s(filename, strtok(NULL, " "));
	strcat_s(filename, id);
	strcat_s(filename, ".dat");

	employeeFile.open(filename, ios::in | ios::binary);
	if (!employeeFile)
		return false;
	employeeFile.read(reinterpret_cast<char*>(&e), sizeof(Employee));
	punch = e.punch;
	logon = true;
	timeOffBalance = e.timeOffBalance;
	employeeFile.read(reinterpret_cast<char*>(&table[0]), sizeof(TimeTable));
	employeeFile.read(reinterpret_cast<char*>(&table[1]), sizeof(TimeTable));
	employeeFile.close();

	return true;
}

bool Employee::logout() {
	logon = false;
}

char* Employee::getFullname() {
	return fullname;
}

time_t* Employee::getPunchIn() {
	time_t *in = new time_t;
	*in = punchIn;
	return in;
}

time_t* Employee::getPunchOut() {
	time_t* out = new time_t;
	*out = punchOut;
	return out;
}

TimeTable* Employee::getTable() {
	TimeTable* t = new TimeTable[2];
	t[0] = table[0];
	t[1] = table[1];
	return t;
}

bool Employee::clockIn() {
	if (!punch) {
		punchIn = time(NULL);
		punch = true;
		return true;
	}
	return false;
}
bool Employee::clockOut() {
	if (punch) {
		punchOut = time(NULL);
		punch = false;
		return true;
	}
	return false;
}
