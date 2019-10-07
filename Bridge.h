#ifndef BRIDGE_H
#define BRIDGE_H

#include <iostream>
#include "Room.h"
using namespace std;

class Bridge : public Room { 
public:
	Bridge(bool);
	~Bridge();

	void meeting();
	void intercom();

	void setCommanderPresent(bool);
	bool getCommanderPresent();
private:
	bool commanderPresent;
};

#endif