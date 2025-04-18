#ifndef TIMEUTIL_H
#define TIMEUTIL_H

enum Shift { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY, ON, OFF }; 

struct TimeTable {
	Shift shift[7] = { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, OFF, OFF }; // For testing purposes
	int rawtimeIn;
	int rawtimeOut;
	char timeIn[20];
	char timeOut[20];
};

void parseTime(char[], char[]);

#endif
