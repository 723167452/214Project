/**
 *  @file Room.cpp
 *  @class Room
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

#include "Room.h"

/**
 * @param n - name of room
 * @param w - weaight of room
 */
Room::Room(string n = "Default Room", int w = 0): AbstractPart(n, w){

}

Room::~Room(){

}

/**
 * @param n - name of room
 */
void Room::setRoomInfo(string n){
	this->_name = n;
}

/**
 * @param c - crew object to be added into crewlist vector
 */
void Room::addCrewMember(Crew* c) {
	_crewList.push_back(c);
}

/**
 * @param c - crew object to be removed from crewlist vector
 */
void Room::removeCrewMember(Crew* c) {
	for(auto i = _crewList.begin(); i < _crewList.end(); i++) {
		if(*i == c)
			_crewList.erase(i);
	}
}

/**
 * return list of Crew names in crewlist vector
 */
void Room::getCrew() {
	int counter = 0;
	cout << "The crew members assigned to this room are: " << endl;
	for(auto i = _crewList.begin(); i < _crewList.end(); i++) {
		cout << (*i)->_name << endl;
		counter++;
	}
	cout << "Total: " << counter << " crew members" << endl;
}

int Room::getEnergyUse() {
	return _energyUse;
}

void Room::setEnergyUse(int val) {
	_energyUse = val;
}

/**
 * @param dmg - amount to decrease current health of room by
 * damage the room object until broken and call broken()
 */
void Room::takeDamage(int dmg){
	_hp -= dmg;
	cout << _name << " took " << dmg << " damage" << endl;
	if (_hp <= 0){
		broken(_name);
	}else cout << _name << " is on " << _hp << " hp" << endl;

	this->notify(this);
}

/**
 * @param type - name of room 
 * output room is broken
 */
void Room::broken(string type){
	cout << type << " is broken and needs repair." << endl;
}

int Room::getHp(){
	return _hp;
}

int Room::getConsumables(){
	return _energyUse;
}

void Room::setHp(int newHp){
	_hp = newHp;
}
