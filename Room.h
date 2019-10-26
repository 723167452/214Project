//Dylan Krajnc

#ifndef ROOM_H
#define ROOM_H
#include <string>
#include <iostream>
#include <vector>
#include "AbstractPart.h"
#include "Crew.h"
using namespace std;

class Room : public AbstractPart{
public:
	Room(string,int);
	virtual ~Room();
	virtual int getEnergyUse();
	virtual void setEnergyUse(int);

	virtual void addCrewMember(Crew*);
	virtual void removeCrewMember(Crew*);
	virtual void getCrew();

	void setRoomInfo(string);

	virtual int getConsumables();

protected:
	int _energyUse;
	vector<Crew*> _crewList;
};

#endif