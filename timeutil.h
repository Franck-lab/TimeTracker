#ifndef TIMEUTIL_H
#define TIMEUTIL_H

class TimeTable {
private:
	time_t times[7][2];
public:
	TimeTable();
	void printTable();
};


#endif
