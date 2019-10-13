/**
	@file FlakCannon.h
	@author Lap Ren Ivan Zhang
	@section Description

	The weapon subclass FlakCannon

*/

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

	/**
	 *	The fire function checks if the weapon is broken,
	 *	if the weapon is not broken it will fire the weapon using 4 ammo per fire else it will call the broken function,
	 *	if the clip becomes empty it will output that the clip is empty and will call the reload function.
	 */
	void fire();

	/**
	 *	The reload function fills the clip to its maximum capacity while decreasing the total ammo in reserve,
	 *	if the ammo is less than or equal to 0 it will output that it is out of ammo and will not refill the clip.
	 */
	void reload();

	/**
	 *	Formatted output of the status of the weapon
	 *  outputting the name, description of the weapon,
	 *	hp, ammo reserve, current clip state, clip capacity,
	 *	and weapon damage.
	 */
	void getStatus();

	/**
	 *	@param hp amount of health point to repair the weapon with
	 *
	 *	Increase the weapons health point by the specified parameter up until the maximum
	 *	health point of the weapon. If the max hp is reached, hp will not increase anymore.
	 */
	void repair(int);

	/**
	 *	@param dmg amount of hp to decrease on the weapon
	 *	
	 *	Decrease the weapons hp by the specified amount, if hp reaches = 0 or less, it will call the broken function.
	 */
	void takeDamage(int);

	/**
	 *	@param x amount of ammo to increase by
	 *
	 *	Increase the current amount of ammo by the specified amount.
	 */
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