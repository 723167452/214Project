/**
 *	@file Weapon.h
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
 *	@param x - x coordinate of critter
 *  @param y - y coordinate of critter
 *	takes in a string which is the weapons name and outputs a message that the weapon is broken
 */
void Weapon::attack(Critter* c){
	fire();
	c->isAttacked();

	/*bool hit = false;
	vector<Coordinate*>::iterator ptr;

    for (ptr = map.begin(); ptr < map.end(); ptr++) {
        if ((*ptr)->_x == x && (*ptr)->_y == y ){
            hit = true;
            try{
            	((Critter*)(*ptr)->isAttacked();
            }catch(...){

            }
        }
    }
    if (hit)
    	cout << "target hit" << endl;
    else cout << "target missed" << endl;*/
}

