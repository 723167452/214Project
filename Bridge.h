/**
 *  @file Bridge.h
 *  @class Bridge
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef BRIDGE_H
#define BRIDGE_H

#include <iostream>
#include "Room.h"
using namespace std;

class Bridge : public Room { 
public:
	Bridge(bool, bool);
	virtual ~Bridge();

	void meeting();
	void intercom();

	void setCommanderPresent(bool);
	bool getCommanderPresent();
private:
	bool commanderPresent;
};

#endif