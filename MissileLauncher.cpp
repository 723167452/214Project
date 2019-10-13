#include "MissileLauncher.h"
#include <iomanip>
#include <iostream>

MissileLauncher::MissileLauncher(int hp, int ammo, int damage, int clip, int capacity, string type){
	_hp = hp;
	_ammo = ammo;
	_damage = damage;
	_capacity = capacity;
	_clip = clip;
	_type = type;
	cout << _type << " created" << endl;
}

MissileLauncher::~MissileLauncher(){

}

void MissileLauncher::fire(){
	if (_hp > 0){
		if (_clip <= 0){
			cout << "clip is empty" << endl;
			reload();
		}else{
			cout << "firing " << _type << " -- 4 projectiles launched" << endl;
			_clip -= 4;
			if (_clip <= 0) _clip = 0; 
		}
	}else broken(_type);
}

void MissileLauncher::reload(){
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

void MissileLauncher::getStatus(){
	cout << "Status report of " << _type << endl;
	cout << _type << " uses explosive missiles to fire, 4 ammo consumed per attack" << endl;
	cout << "-----Health points: " << setw(2) << _hp << endl;
	cout << "-----Ammo reserve: " << setw(2) << _ammo << endl;
	cout << "-----Clip: " << setw(2) << _clip << endl;
	cout << "-----Clip Capacity: " << setw(2) << _capacity << endl;
	cout << "-----Weapon damage: " << setw(2) << _damage << endl;
}

void MissileLauncher::repair(int hp){
	if (_hp == 150){
		cout << _type << " is in perfect condition" << endl;
	}else if (_hp < 150){
		cout << "repairing " << _type << " by " << _hp << " hp" << endl;
		_hp += hp;
		if (_hp >= 150){
			_hp = 150;
			cout << _type << " is fully repaired" << endl;
		}
		cout << _type << " is at " << _hp << " hp" << endl;
	}
}

void MissileLauncher::takeDamage(int dmg){
	_hp -= dmg;
	cout << _type << " took " << dmg << " damage" << endl;
	if (_hp <= 0){
		broken(_type);
	}else cout << _type << " is on " << _hp << " hp" << endl;
}

void MissileLauncher::addAmmo(int x){
	_ammo += x;
}

void MissileLauncher::setAmmo(int x){
	_ammo = x;
}

void MissileLauncher::setHp(int x){
	_hp = x;
}

void MissileLauncher::setDamage(int x){
	_damage = x;
}

void MissileLauncher::setType(string s){
	_type = s;
}

void MissileLauncher::setCapacity(int x){
	_capacity = x;
}

void MissileLauncher::setClip(int x){
	_clip = x;
}

int MissileLauncher::getAmmo(){
	return _ammo;
}

int MissileLauncher::getHp(){
	return _hp;
}

int MissileLauncher::getDamage(){
	return _damage;
}

string MissileLauncher::getType(){
	return _type;
}

int MissileLauncher::getCapacity(){
	return _capacity;
}

int MissileLauncher::getClip(){
	return _clip;
}

///////////////////////////
void MissileLauncher::addEnergy(int x){}
void MissileLauncher::setEnergy(int x){}
int MissileLauncher::getEnergy(){}
