#include <iostream>
#include <ctime>
#include "employee.h"

using namespace std;

void clockIn(Employee *e) {

	const time_t rawtime = time(NULL);
	e->table.rawtime = static_cast<int>(rawtime);
	parseTime(ctime(&rawtime), e->table.timeIn);
	cout << "Punch In Successful " << e->table.timeIn << endl;
}

void parseTime(char strTime[], char timeIn[]) {
	char* strT = strtok(strTime, " ");
	for (int count = 2; count <= 4; count++)
		strT = strtok(NULL, " ");

	strcpy(timeIn, strT);
}

double calcWorkedHour(Employee* e) {
	return (static_cast<int>(time(NULL)) - e->table.rawtime) / 3600.0;
}