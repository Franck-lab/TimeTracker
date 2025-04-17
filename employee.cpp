#include <iostream>
#include <ctime>
#include "employee.h"

using namespace std;

void clockIn(Employee *e) {

	const time_t rawtime = time(NULL);
	e->table.rawtimeIn = static_cast<int>(rawtime);
	parseTime(ctime(&rawtime), e->table.timeIn);
	cout << "Punch In Successful " << e->table.timeIn << endl;
}

void clockOut(Employee* e) {
	const time_t rawtime = time(NULL);
	e->table.rawtimeOut = static_cast<int>(rawtime);
	parseTime(ctime(&rawtime), e->table.timeOut);
	cout << "Punch Out Successful " << e->table.timeOut << endl;
}

void parseTime(char strTime[], char timeIn[]) {
	char* strT = strtok(strTime, " ");
	for (int count = 2; count <= 4; count++)
		strT = strtok(NULL, " ");

	strcpy(timeIn, strT);
}

double calcWorkedHour(Employee* e) {
	return (static_cast<int>(time(NULL)) - e->table.rawtimeIn) / 3600.0;
}