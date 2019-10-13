/**
 *	@file Weapon.h
 *	@section Description
 *
 *	The weapon class defines the different weapon subclasses.
 *
 */

#include "Weapon.h"
#include <iostream>

Weapon::Weapon(string n, int w ) : AbstractPart(n,w){}
Weapon::~Weapon(){}

void Weapon::broken(string type){
	cout << type << " is broken and needs repair." << endl;
}