#include <iostream>
#include <ctime>
#include "employee.h"
#include "disputil.h"
#include "timeutil.h"

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


double calcWorkedHour(Employee* e) {
	return (static_cast<int>(time(NULL)) - e->table.rawtimeIn) / 3600.0;
}

void takeTimeOff(Employee* e, int days) {
	int indexDay = -1, count = 0;
	if(days > 0)
		cout << "Disired days (y/n):\n";
	for (int day = 0; day < days; day++) {
		if (selectDayOff(e, indexDay) == OFF) {
			e->table.shift[indexDay] = OFF;
			e->timeOffBalance -= 8.0;
			count++;
		}
		if (indexDay == 7)
			break;
	}
	cout << "\nTime off received, " << count << " days off - See Timetable for details.\n";
}