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
	employeeFile.close();

	return true;
}

//void clockIn(Employee *e) {
//
//	const time_t rawtime = time(NULL);
//	e->table.rawtimeIn = static_cast<int>(rawtime);
//	parseTime(ctime(&rawtime), e->table.timeIn);
//	cout << "Punch In Successful " << e->table.timeIn << endl;
//}
//
//void clockOut(Employee* e) {
//	const time_t rawtime = time(NULL);
//	e->table.rawtimeOut = static_cast<int>(rawtime);
//	parseTime(ctime(&rawtime), e->table.timeOut);
//	cout << "Punch Out Successful " << e->table.timeOut << endl;
//}
//
//bool loginEmployee(Employee* e, char* name, char* ID) {
//	ifstream employeeFile;
//	char filename[310] = "";
//
//	strcat(filename, strtok(name, " "));
//	strcat(filename, strtok(NULL, " "));
//	strcat(filename, ID);
//	strcat(filename, ".dat");
//
//	employeeFile.open(filename, ios::in | ios::binary);
//	if (!employeeFile) {
//		cout << "\nInvalid Name or ID. Login Unsuccessful.\n";
//		return false;
//	}
//		employeeFile.read(reinterpret_cast<char*>(e), sizeof(Employee));
//		e->logon = true;
//		employeeFile.close();
//		cout << "\nLogin Successful\n";
//
//	return true;
//}
//
//
//double calcWorkedHour(Employee* e) {
//	return (static_cast<int>(time(NULL)) - e->table.rawtimeIn) / 3600.0;
//}
//
//void takeTimeOff(Employee* e, int days) {
//	int indexDay = -1, count = 0;
//	if(days > 0)
//		cout << "Disired days (y/n):\n";
//	for (int day = 0; day < days; day++) {
//		if (selectDayOff(e, indexDay) == OFF) {
//			e->table.shift[indexDay] = OFF;
//			e->timeOffBalance -= 8.0;
//			count++;
//		}
//		if (indexDay == 7)
//			break;
//	}
//	cout << "\nTime off received, " << count << " days off - See Timetable for details.\n";
//}