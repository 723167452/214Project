#include "LaserTurrent.h"
#include <iomanip>
#include <iostream>

LaserTurrent::LaserTurrent(int hp, int energy, int damage, int clip, int capacity, string type):Weapon(type,20){
	_hp = hp;
	_energy = energy;
	_damage = damage;
	_capacity = capacity;
	_clip = clip;
	_type = type;
	cout << _type << " created" << endl;
}

LaserTurrent::~LaserTurrent(){

}

void LaserTurrent::fire(){
	if (_hp > 0){
		if (_clip <= 0){
			cout << "clip is empty" << endl;
			reload();
		}else{
			cout << "firing " << _type << endl;
			_clip -= 2;
			if (_clip <= 0) _clip = 0; 
		}
	}else broken(_type);
}

void LaserTurrent::reload(){
	if (_energy > 0){
		cout << "auto reload in process" << endl;
		int amountNeeded = _capacity - _clip;
		if (_energy - amountNeeded <= 0){
			_clip += _energy;
			_energy -= amountNeeded;
		}else{
			_clip += amountNeeded;
			_energy -= amountNeeded;
		}

	}else cout << "Out of energy" << endl;
}

void LaserTurrent::getStatus(){
	cout << "Status report of " << _type << endl;
	cout << _type << " uses energy to fire, 2 energy consumed per attack" << endl;
	cout << "-----Health points: " << setw(2) << _hp << endl;
	cout << "-----Energy reserve: " << setw(2) << _energy << endl;
	cout << "-----Clip: " << setw(2) << _clip << endl;
	cout << "-----Clip Capacity: " << setw(2) << _capacity << endl;
	cout << "-----Weapon damage: " << setw(2) << _damage << endl;
}

void LaserTurrent::repair(int hp){
	if (_hp == 200){
		cout << _type << " is in perfect condition" << endl;
	}else if (_hp < 200){
		cout << "repairing " << _type << " by " << _hp << " hp" << endl;
		_hp += hp;
		if (_hp >= 200){
			_hp = 200;
			cout << _type << " is fully repaired" << endl;
		}
		cout << _type << " is at " << _hp << " hp" << endl;
	}
}

void LaserTurrent::takeDamage(int dmg){
	_hp -= dmg;
	cout << _type << " took " << dmg << " damage" << endl;
	if (_hp <= 0){
		broken(_type);
	}else cout << _type << " is on " << _hp << " hp" << endl;
}

void LaserTurrent::addEnergy(int x){
	_energy += x;
}


void LaserTurrent::setEnergy(int x){
	_energy = x;
}

void LaserTurrent::setHp(int x){
	_hp = x;
}

void LaserTurrent::setDamage(int x){
	_damage = x;
}

void LaserTurrent::setType(string s){
	_type = s;
}

void LaserTurrent::setCapacity(int x){
	_capacity = x;
}

void LaserTurrent::setClip(int x){
	_clip = x;
}

int LaserTurrent::getEnergy(){
	return _energy;
}

int LaserTurrent::getHp(){
	return _hp;
}

int LaserTurrent::getDamage(){
	return _damage;
}

string LaserTurrent::getType(){
	return _type;
}

int LaserTurrent::getCapacity(){
	return _capacity;
}

int LaserTurrent::getClip(){
	return _clip;
}

///////////////////////////
void LaserTurrent::addAmmo(int i){}
void LaserTurrent::setAmmo(int i){}
int LaserTurrent::getAmmo(){}