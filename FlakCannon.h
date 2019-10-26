#ifndef FLAKCANNON_H
#define FLAKCANNON_H

#include "Weapon.h"
#include <string>
using namespace std;

class FlakCannon : public Weapon
{
public:
	FlakCannon(int hp = 250, int ammo = 80, int damage = 30, int clip = 40, int capacity = 40, string type = "Flak Cannon");
	~FlakCannon();

	void fire();
	void reload();
	void getStatus();
	void repair(int);

	void attack(Critter*);

	void takeDamage(int);

	void addAmmo(int);

	void setAmmo(int);
	void setHp(int);
	void setDamage(int);
	void setType(string);
	void setCapacity(int);
	void setClip(int);
	
	int getAmmo();
	int getHp();
	int getDamage();
	string getType();
	int getCapacity();
	int getClip();

	//this weapon does not use ammo
	int getEnergy();
	void addEnergy(int);
	void setEnergy(int);

private:
	int _hp;
	int _ammo;
	int _energy;
	int _damage;
	int _capacity;
	int _clip;
	string _type;
};

#endif