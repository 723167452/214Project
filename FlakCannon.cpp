/**
	@file FlakCannon.cpp
	@class FlakCannon
	@author Lap Ren Ivan Zhang
	@section Description

	The weapon subclass FlakCannon's implementation

*/

#include "FlakCannon.h"
#include <iomanip>
#include <iostream>

/**
 * @param hp - health of the weapon part
 * @param ammo - amount of ammo the weapon have in total
 * @param damage - damage of the weapon per shot
 * @param clip - current amount of loaded ammunition in the weapon
 * @param capacity - maximum amount of ammunition to be loaded at a time
 * @param type - type of the weapon
 */
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

/**
 *	The fire function checks if the weapon is broken,
 *	if the weapon is not broken it will fire the weapon using 4 ammo per fire else it will call the broken function,
 *	if the clip becomes empty it will output that the clip is empty and will call the reload function.
 */
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

/**
 *	The reload function fills the clip to its maximum capacity while decreasing the total ammo in reserve,
 *	if the ammo is less than or equal to 0 it will output that it is out of ammo and will not refill the clip.
 */
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

/**
 *	Formatted output of the status of the weapon
 *  outputting the name, description of the weapon,
 *	hp, ammo reserve, current clip state, clip capacity,
 *	and weapon damage.
 */
void FlakCannon::getStatus(){
	cout << "Status report of " << _type << endl;
	cout << _type << " uses explosive ammunition to fire, 4 ammo consumed per attack" << endl;
	cout << "-----Health points: " << setw(2) << _hp << endl;
	cout << "-----Ammo reserve: " << setw(2) << _ammo << endl;
	cout << "-----Clip: " << setw(2) << _clip << endl;
	cout << "-----Clip Capacity: " << setw(2) << _capacity << endl;
	cout << "-----Weapon damage: " << setw(2) << _damage << endl;
}

/**
 *	@param hp amount of health point to repair the weapon with
 *
 *	Increase the weapons health point by the specified parameter up until the maximum
 *	health point of the weapon. If the max hp is reached, hp will not increase anymore.
 */
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

/**
 *	@param dmg amount of hp to decrease on the weapon
 *	
 *	Decrease the weapons hp by the specified amount, if hp reaches = 0 or less, it will call the broken function.
 */
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
