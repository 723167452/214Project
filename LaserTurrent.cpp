/**
	@file LaserTurrent.cpp
	@class LaserTurrent
	@author Lap Ren Ivan Zhang
	@section Description

	The weapon subclass LaserTurrent's implementation

*/

#include "LaserTurrent.h"
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

/**
 *	The fire function checks if the weapon is broken,
 *	if the weapon is not broken it will fire the weapon using 2 ammo per fire else it will call the broken function,
 *	if the clip becomes empty it will output that the clip is empty and will call the reload function.
 */
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

/**
 *	The reload function fills the clip to its maximum capacity while decreasing the total energy in reserve,
 *	if the energy is less than or equal to 0 it will output that it is out of energy and will not refill the clip.
 */
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

/**
 *	Formatted output of the status of the weapon
 *  outputting the name, description of the weapon,
 *	hp, energy reserve, current clip state, clip capacity,
 *	and weapon damage.
 */
void LaserTurrent::getStatus(){
	cout << "Status report of " << _type << endl;
	cout << _type << " uses energy to fire, 2 energy consumed per attack" << endl;
	cout << "-----Health points: " << setw(2) << _hp << endl;
	cout << "-----Energy reserve: " << setw(2) << _energy << endl;
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

/**
 *	@param dmg amount of hp to decrease on the weapon
 *	
 *	Decrease the weapons hp by the specified amount, if hp reaches = 0 or less, it will call the broken function.
 */
void LaserTurrent::takeDamage(int dmg){
	_hp -= dmg;
	cout << _type << " took " << dmg << " damage" << endl;
	if (_hp <= 0){
		broken(_type);
	}else cout << _type << " is on " << _hp << " hp" << endl;
}

/**
 *	@param x amount of energy to increase by
 *
 *	Increase the current amount of energy by the specified amount.
 */
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