#include "MissileLauncher.h"
#include <iomanip>
#include <iostream>

MissileLauncher::MissileLauncher(int hp, int ammo, int damage, int clip, int capacity, string type){
	this->hp = hp;
	this->ammo = ammo;
	this->damage = damage;
	this->capacity = capacity;
	this->clip = clip;
	this->type = type;
	cout << this->type << " created" << endl;
}

MissileLauncher::~MissileLauncher(){

}

void MissileLauncher::fire(){
	if (this->hp > 0){
		if (clip <= 0){
			cout << "clip is empty" << endl;
			reload();
		}else{
			cout << "firing " << this->type << " -- 4 projectiles launched" << endl;
			clip -= 4;
			if (clip <= 0) clip = 0; 
		}
	}else broken(this->type);
}

void MissileLauncher::reload(){
	if (ammo > 0){
		cout << "auto reload in process" << endl;
		int amountNeeded = this->capacity - this->clip;
		if (this->ammo - amountNeeded <= 0){
			this->clip += this->ammo;
			this->ammo -= amountNeeded;
		}else{
			this->clip += amountNeeded;
			this->ammo -= amountNeeded;
		}

	}else cout << "Out of ammo" << endl;
}

void MissileLauncher::getStatus(){
	cout << "Status report of " << type << endl;
	cout << type << " uses explosive missiles to fire, 4 ammo consumed per attack" << endl;
	cout << "-----Health points: " << setw(2) << hp << endl;
	cout << "-----Ammo reserve: " << setw(2) << ammo << endl;
	cout << "-----Clip: " << setw(2) << clip << endl;
	cout << "-----Clip Capacity: " << setw(2) << capacity << endl;
	cout << "-----Weapon damage: " << setw(2) << damage << endl;
}

void MissileLauncher::repair(int hp){
	if (this->hp == 150){
		cout << type << " is in perfect condition" << endl;
	}else if (this->hp < 150){
		cout << "repairing " << this->type << " by " << hp << " hp" << endl;
		this->hp += hp;
		if (this->hp >= 150){
			this->hp = 150;
			cout << this->type << " is fully repaired" << endl;
		}
		cout << this->type << " is at " << this->hp << " hp" << endl;
	}
}

void MissileLauncher::takeDamage(int dmg){
	this->hp -= dmg;
	cout << this->type << " took " << dmg << " damage" << endl;
	if (this->hp <= 0){
		broken(this->type);
	}else cout << this->type << " is on " << this->hp << " hp" << endl;
}

void MissileLauncher::addAmmo(int x){
	this->ammo += x;
}

void MissileLauncher::setAmmo(int x){
	this->ammo = x;
}

void MissileLauncher::setHp(int x){
	this->hp = x;
}

void MissileLauncher::setDamage(int x){
	this->damage = x;
}

void MissileLauncher::setType(string s){
	this->type = s;
}

void MissileLauncher::setCapacity(int x){
	this->capacity = x;
}

void MissileLauncher::setClip(int x){
	this->clip = x;
}

int MissileLauncher::getAmmo(){
	return this->ammo;
}

int MissileLauncher::getHp(){
	return this->hp;
}

int MissileLauncher::getDamage(){
	return this->damage;
}

string MissileLauncher::getType(){
	return this->type;
}

int MissileLauncher::getCapacity(){
	return this->capacity;
}

int MissileLauncher::getClip(){
	return this->clip;
}

///////////////////////////
void MissileLauncher::addEnergy(int x){}
void MissileLauncher::setEnergy(int x){}
int MissileLauncher::getEnergy(){}
