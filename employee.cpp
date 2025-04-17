#include <iostream>
#include <ctime>
#include "employee.h"

using namespace std;

void clockIn(Employee *e) {

	const time_t rawtime = time(NULL);
	parseTime(ctime(&rawtime), e->table.timeIn);
	cout << "Punch In Successful " << e->table.timeIn << endl;
}

void parseTime(char strTime[], char timeIn[]) {
	char* strT = strtok(strTime, " ");
	for (int count = 2; count <= 4; count++)
		strT = strtok(NULL, " ");

	strcpy(timeIn, strT);
}