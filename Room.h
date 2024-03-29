/**
 *  @file Room.h
 *  @class Room
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

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

	void takeDamage(int);
	void broken(string);
	virtual int getHp();
	virtual void setHp(int newHp);
protected:
	int _energyUse;
	vector<Crew*> _crewList;
	int _hp;
};

#endif