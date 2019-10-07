#include "LaserTurrent.h"
#include <iomanip>
#include <iostream>

LaserTurrent::LaserTurrent(int hp, int energy, int damage, int clip, int capacity, string type){
	this->hp = hp;
	this->energy = energy;
	this->damage = damage;
	this->capacity = capacity;
	this->clip = clip;
	this->type = type;
	cout << this->type << " created" << endl;
}

LaserTurrent::~LaserTurrent(){

}

void LaserTurrent::fire(){
	if (this->hp > 0){
		if (clip <= 0){
			cout << "clip is empty" << endl;
			reload();
		}else{
			cout << "firing " << this->type << endl;
			clip -= 2;
			if (clip <= 0) clip = 0; 
		}
	}else broken(this->type);
}

void LaserTurrent::reload(){
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

	}else cout << "Out of energy" << endl;
}

void LaserTurrent::getStatus(){
	cout << "Status report of " << type << endl;
	cout << type << " uses energy to fire, 2 energy consumed per attack" << endl;
	cout << "-----Health points: " << setw(2) << hp << endl;
	cout << "-----Energy reserve: " << setw(2) << energy << endl;
	cout << "-----Clip: " << setw(2) << clip << endl;
	cout << "-----Clip Capacity: " << setw(2) << capacity << endl;
	cout << "-----Weapon damage: " << setw(2) << damage << endl;
}

void LaserTurrent::repair(int hp){
	if (this->hp == 200){
		cout << type << " is in perfect condition" << endl;
	}else if (this->hp < 200){
		cout << "repairing " << this->type << " by " << hp << " hp" << endl;
		this->hp += hp;
		if (this->hp >= 200){
			this->hp = 200;
			cout << this->type << " is fully repaired" << endl;
		}
		cout << this->type << " is at " << this->hp << " hp" << endl;
	}
}

void LaserTurrent::takeDamage(int dmg){
	this->hp -= dmg;
	cout << this->type << " took " << dmg << " damage" << endl;
	if (this->hp <= 0){
		broken(this->type);
	}else cout << this->type << " is on " << this->hp << " hp" << endl;
}

void LaserTurrent::addEnergy(int x){
	this->energy += x;
}


void LaserTurrent::setEnergy(int x){
	this->energy = x;
}

void LaserTurrent::setHp(int x){
	this->hp = x;
}

void LaserTurrent::setDamage(int x){
	this->damage = x;
}

void LaserTurrent::setType(string s){
	this->type = s;
}

void LaserTurrent::setCapacity(int x){
	this->capacity = x;
}

void LaserTurrent::setClip(int x){
	this->clip = x;
}

int LaserTurrent::getEnergy(){
	return this->energy;
}

int LaserTurrent::getHp(){
	return this->hp;
}

int LaserTurrent::getDamage(){
	return this->damage;
}

string LaserTurrent::getType(){
	return this->type;
}

int LaserTurrent::getCapacity(){
	return this->capacity;
}

int LaserTurrent::getClip(){
	return this->clip;
}

///////////////////////////
void LaserTurrent::addAmmo(int i){}
void LaserTurrent::setAmmo(int i){}
int LaserTurrent::getAmmo(){}