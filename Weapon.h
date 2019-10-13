#ifndef WEAPON_H
#define WEAPON_H

#include "AbstractPart.h"
#include <string>
using namespace std;

class Weapon : public AbstractPart
{
public:
	Weapon(string n = "Default Weapon", int w = 0);
	virtual ~Weapon();

	void broken(string);

	virtual void fire() = 0;
	virtual void reload() = 0;

	//virtual void giveDamage(some spaceship pointer) = 0;

	virtual void getStatus() = 0;

	virtual void repair(int) = 0;

	virtual void takeDamage(int) = 0;

	virtual void addAmmo(int) = 0;
	virtual void addEnergy(int) = 0;

	virtual void setEnergy(int) = 0;
	virtual void setAmmo(int) = 0;
	virtual void setHp(int) = 0;
	virtual void setDamage(int) = 0;
	virtual void setType(string) = 0;
	virtual void setCapacity(int) = 0;
	virtual void setClip(int) = 0;

	virtual int getEnergy() = 0;
	virtual int getAmmo() = 0;
	virtual int getHp() = 0;
	virtual int getDamage() = 0;
	virtual int getCapacity() = 0;
	virtual int getClip() = 0;
	virtual string getType() = 0;


private:
	int hp;
	int ammo;
	int energy;
	int damage;
	int capacity;
	int clip;
	string type;

};

#endif