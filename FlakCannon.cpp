#include "FlakCannon.h"
#include <iomanip>
#include <iostream>

FlakCannon::FlakCannon(int hp, int ammo, int damage, int clip, int capacity, string type){
	this->hp = hp;
	this->ammo = ammo;
	this->damage = damage;
	this->capacity = capacity;
	this->clip = clip;
	this->type = type;
	cout << this->type << " created" << endl;
}

FlakCannon::~FlakCannon(){

}

void FlakCannon::fire(){
	if (this->hp > 0){
		if (clip <= 0){
			cout << "clip is empty" << endl;
			reload();
		}else{
			cout << "firing " << this->type << endl;
			clip -= 4;
			if (clip <= 0) clip = 0; 
		}
	}else broken(this->type);
}

void FlakCannon::reload(){
	if (energy > 0){
		cout << "auto reload in process" << endl;
		int amountNeeded = this->capacity - this->clip;
		if (this->energy - amountNeeded <= 0){
			this->clip += this->energy;
			this->energy -= amountNeeded;
		}else{
			this->clip += amountNeeded;
			this->energy -= amountNeeded;
		}

	}else cout << "Out of ammo" << endl;
}

void FlakCannon::getStatus(){
	cout << "Status report of " << type << endl;
	cout << type << " uses explosive ammunition to fire, 4 ammo consumed per attack" << endl;
	cout << "-----Health points: " << setw(2) << hp << endl;
	cout << "-----Ammo reserve: " << setw(2) << ammo << endl;
	cout << "-----Clip: " << setw(2) << clip << endl;
	cout << "-----Clip Capacity: " << setw(2) << capacity << endl;
	cout << "-----Weapon damage: " << setw(2) << damage << endl;
}

void FlakCannon::repair(int hp){
	if (this->hp == 250){
		cout << type << " is in perfect condition" << endl;
	}else if (this->hp < 250){
		cout << "repairing " << this->type << " by " << hp << " hp" << endl;
		this->hp += hp;
		if (this->hp >= 250){
			this->hp = 250;
			cout << this->type << " is fully repaired" << endl;
		}
		cout << this->type << " is at " << this->hp << " hp" << endl;
	}
}

void FlakCannon::takeDamage(int dmg){
	this->hp -= dmg;
	cout << this->type << " took " << dmg << " damage" << endl;
	if (this->hp <= 0){
		broken(this->type);
	}else cout << this->type << " is on " << this->hp << " hp" << endl;
}

void FlakCannon::addAmmo(int x){
	this->ammo += x;
}

void FlakCannon::setAmmo(int x){
	this->ammo = x;
}

void FlakCannon::setHp(int x){
	this->hp = x;
}

void FlakCannon::setDamage(int x){
	this->damage = x;
}

void FlakCannon::setType(string s){
	this->type = s;
}

void FlakCannon::setCapacity(int x){
	this->capacity = x;
}

void FlakCannon::setClip(int x){
	this->clip = x;
}

int FlakCannon::getAmmo(){
	return this->ammo;
}

int FlakCannon::getHp(){
	return this->hp;
}

int FlakCannon::getDamage(){
	return this->damage;
}

string FlakCannon::getType(){
	return this->type;
}

int FlakCannon::getCapacity(){
	return this->capacity;
}

int FlakCannon::getClip(){
	return this->clip;
}

///////////////////////////
void FlakCannon::addEnergy(int x){}
void FlakCannon::setEnergy(int x){}
int FlakCannon::getEnergy(){}
