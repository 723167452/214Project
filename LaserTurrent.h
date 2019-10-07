#ifndef LASERTURRENT
#define LASERTURRENT

#include "Weapon.h"
#include <string>
using namespace std;

class LaserTurrent : public Weapon
{
public:
	LaserTurrent(int hp = 200, int energy = 100, int damage = 10, int clip = 10, int capacity = 10, string type = "Laser Turrent");
	~LaserTurrent();
	void fire();
	void reload();

	void getStatus();

	void repair(int);

	void takeDamage(int);

	void addEnergy(int);

	void setEnergy(int);
	void setHp(int);
	void setDamage(int);
	void setType(string);
	void setCapacity(int);
	void setClip(int);
	
	int getEnergy();
	int getHp();
	int getDamage();
	string getType();
	int getCapacity();
	int getClip();

	//this weapon does not use ammo
	void addAmmo(int);
	int getAmmo();
	void setAmmo(int);

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