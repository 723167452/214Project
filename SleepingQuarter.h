/**
 *  @file SleepingQuarter.h
 *  @class SleepingQuarter
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef SLEEPINGQUARTER_H
#define SLEEPINGQUARTER_H

#include <iostream>
#include "Room.h"
using namespace std;

class SleepingQuarter : public Room {
public:
	SleepingQuarter(int, bool, bool);
	virtual ~SleepingQuarter();

	void feedCrew();
	void restockFood();

	void sleepCrew();
	void cleanRoom();

	void soundAlarm();

	virtual void setRoomInfo(string, int);

	virtual int getConsumables();
private:
	int food;
	bool cleanSheets;
};

#endif