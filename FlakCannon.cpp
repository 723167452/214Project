#include "FlakCannon.h"
#include <iomanip>
#include <iostream>

FlakCannon::FlakCannon(int hp, int ammo, int damage, int clip, int capacity, string type):Weapon(type, 25){
	_hp = hp;
	_ammo = ammo;
	_damage = damage;
	_capacity = capacity;
	_clip = clip;
	_type = type;
	cout << _type << " created" << endl;
}

FlakCannon::~FlakCannon(){

}

void FlakCannon::fire(){
	if (_hp > 0){
		if (_clip <= 0){
			cout << "clip is empty" << endl;
			reload();
		}else{
			cout << "firing " << _type << endl;
			_clip -= 4;
			if (_clip <= 0) _clip = 0; 
		}
	}else broken(_type);
}

void FlakCannon::reload(){
	if (_ammo > 0){
		cout << "auto reload in process" << endl;
		int amountNeeded = _capacity - _clip;
		if (_ammo - amountNeeded <= 0){
			_clip += _ammo;
			_ammo -= amountNeeded;
		}else{
			_clip += amountNeeded;
			_ammo -= amountNeeded;
		}

	}else cout << "Out of ammo" << endl;
}

void FlakCannon::getStatus(){
	cout << "Status report of " << _type << endl;
	cout << _type << " uses explosive ammunition to fire, 4 ammo consumed per attack" << endl;
	cout << "-----Health points: " << setw(2) << _hp << endl;
	cout << "-----Ammo reserve: " << setw(2) << _ammo << endl;
	cout << "-----Clip: " << setw(2) << _clip << endl;
	cout << "-----Clip Capacity: " << setw(2) << _capacity << endl;
	cout << "-----Weapon damage: " << setw(2) << _damage << endl;
}

void FlakCannon::repair(int hp){
	if (_hp == 250){
		cout << _type << " is in perfect condition" << endl;
	}else if (_hp < 250){
		cout << "repairing " << _type << " by " << _hp << " hp" << endl;
		_hp += hp;
		if (_hp >= 250){
			_hp = 250;
			cout << _type << " is fully repaired" << endl;
		}
		cout << _type << " is at " << _hp << " hp" << endl;
	}
}

void FlakCannon::takeDamage(int dmg){
	_hp -= dmg;
	cout << _type << " took " << dmg << " damage" << endl;
	if (_hp <= 0){
		broken(_type);
	}else cout << _type << " is on " << _hp << " hp" << endl;
}

void FlakCannon::addAmmo(int x){
	_ammo += x;
}

void FlakCannon::setAmmo(int x){
	_ammo = x;
}

void FlakCannon::setHp(int x){
	_hp = x;
}

void FlakCannon::setDamage(int x){
	_damage = x;
}

void FlakCannon::setType(string s){
	_type = s;
}

void FlakCannon::setCapacity(int x){
	_capacity = x;
}

void FlakCannon::setClip(int x){
	_clip = x;
}

int FlakCannon::getAmmo(){
	return _ammo;
}

int FlakCannon::getHp(){
	return _hp;
}

int FlakCannon::getDamage(){
	return _damage;
}

string FlakCannon::getType(){
	return _type;
}

int FlakCannon::getCapacity(){
	return _capacity;
}

int FlakCannon::getClip(){
	return _clip;
}

///////////////////////////
void FlakCannon::addEnergy(int x){}
void FlakCannon::setEnergy(int x){}
int FlakCannon::getEnergy(){}
