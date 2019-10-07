#include "Weapon.h"
#include <iostream>

Weapon::Weapon(){}
Weapon::~Weapon(){}

void Weapon::broken(string type){
	cout << type << " is broken and needs repair." << endl;
}