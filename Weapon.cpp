/**
 *	@file Weapon.cpp
 *  @class Weapon
 *  @author Lap Ren Ivan Zhang
 *	@section Description
 *
 *	The weapon class defines the different weapon subclasses.
 *
 */

#include "Weapon.h"
#include <iostream>

Weapon::Weapon(string n, int w ) : AbstractPart(n,w){}
Weapon::~Weapon(){}

/**
 *	@param type Name of weapon
 *	takes in a string which is the weapons name and outputs a message that the weapon is broken
 */
void Weapon::broken(string type){
	cout << type << " is broken and needs repair." << endl;
}

/**
 *	@param c - critter object to be attacked
 *  
 *	fire the weapon and call critter's isAttacked function
 */
void Weapon::attack(Critter* c){
	fire();
	c->isAttacked();
}

