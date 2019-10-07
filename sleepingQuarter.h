#ifndef SLEEPINGQUARTER_H
#define SLEEPINGQUARTER_H

#include <iostream>
#include "Room.h"
using namespace std;

class SleepingQuarter : public Room {
public:
	SleepingQuarter(int, bool);
	~SleepingQuarter();

	void feedCrew();
	void restockFood();

	void sleepCrew();
	void cleanRoom();

	void soundAlarm();

	virtual void setRoomInfo(string, int);
private:
	int food;
	bool cleanSheets;
};

#endif