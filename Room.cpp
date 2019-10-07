//Dylan Krajnc

#include "Room.h"

void Room::addCrewMember(Crew* c) {
	crewList.push_back(c);
}

void Room::removeCrewMember(Crew* c) {
	for(auto i = crewList.begin(); i < crewList.end(); i++) {
		if(*i == c)
			crewList.erase(i);
	}
}

void Room::getCrew(Crew* c) {
	cout << "The crew members assigned to this room are: " << endl;
	for(auto i = crewList.begin(); i < crewList.end(); i++) {
		cout << (*i)->getName();
	}
}

int Room::getEnergyUse() {
	return energyUse;
}

void Room::setEnergyUse(int val) {
	energyUse = val;
}