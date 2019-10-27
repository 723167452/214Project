//Dylan Krajnc

#include "Room.h"

Room::Room(string n = "Default Room", int w = 0): AbstractPart(n, w){

}

Room::~Room(){

}

void Room::setRoomInfo(string n){
	this->_name = n;
}

void Room::addCrewMember(Crew* c) {
	_crewList.push_back(c);
}

void Room::removeCrewMember(Crew* c) {
	for(auto i = _crewList.begin(); i < _crewList.end(); i++) {
		if(*i == c)
			_crewList.erase(i);
	}
}

void Room::getCrew() {
	cout << "The crew members assigned to this room are: " << endl;
	for(auto i = _crewList.begin(); i < _crewList.end(); i++) {
		//cout << (*i)->getName() << endl;
	}
}

int Room::getEnergyUse() {
	return _energyUse;
}

void Room::setEnergyUse(int val) {
	_energyUse = val;
}

void Room::takeDamage(int dmg){
	_hp -= dmg;
	cout << _name << " took " << dmg << " damage" << endl;
	if (_hp <= 0){
		broken(_name);
	}else cout << _name << " is on " << _hp << " hp" << endl;

	this->notify(this);
}

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
