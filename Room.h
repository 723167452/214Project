//Dylan Krajnc

#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <vector>
#include "AbstractPart.h"
#include "Crew.h"
using namespace std;

class Room {
public:
	virtual int getEnergyUse();
	virtual void setEnergyUse(int);

	virtual void addCrewMember(Crew*);
	virtual void removeCrewMember(Crew*);
	virtual void getCrew(Crew* c);

	virtual void setRoomInfo(string, int) = 0;
	virtual string getRoomName() = 0;
protected:
	int energyUse;
	vector<Crew*> crewList;
};

#endif