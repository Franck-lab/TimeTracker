#include <iostream>
#include <cstring>
#include "timeutil.h"

using namespace std;

TimeTable::TimeTable() {
	for (int d = 1; d <= 7; d++) {
		for (int t = 0; t < 2; t++)
			times[d - 1][t] = 0;
	}
}

void TimeTable::printTable(){
	cout << endl << "Week\tIn\tOut\n";
	cout << "___________________________\n";
	for (int day = 1; day <= 7; day++) {
		cout << day;
		for (int t = 0; t < 2; t++) {
			if (times[day - 1][t] == 0)
				continue;
			cout << "\t" << ctime(&times[day-1][t]);
		}
		cout << endl;
	}
}
