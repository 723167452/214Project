/**
 * @author Dylan Krajnc
*/

#include "Critter.h"

Critter::Critter() {

}

Critter::~Critter() {

}

void Critter::lowerTolerance() {
	cout << "The bug did not like that. Tolerance towards you has lowered." << endl;
	if(toleranceLevel < 5 && toleranceLevel != 0 && currentMood == Friendly) {
		currentMood = Hostile;
		cout << "The bug is now hostile, be careful!" << endl;
	}
	if(toleranceLevel == 0) {
		currentMood = Enemy;
		cout << "The bug is now Enemy. Attack it!" << endl;
	}
}

void Critter::increaseTolerance() {
	cout << "The bug liked that. Tolerance towards you has increased." << endl;
	if(toleranceLevel > 4 && currentMood != Friendly) {
		currentMood = Friendly;
		cout << "The bug is now friendly, that's nice!" << endl;
	}
	//can't increase tolerance once the bug is an enemy
}

bool Critter::isDefeated() {
	return defeated;
}

SpaceBug::SpaceBug(string n) {
	name = n;
	toleranceLevel = 5;
	currentMood = Hostile;
	defeated = false;
	_coordObjType = "critter";
	this->map.push_back(this);
}

SpaceBug::~SpaceBug() {

}

void SpaceBug::meleeAttack(Spacecraft* sc) {
	cout << "The spaceBug hurls itself at the ships, making a small dent." << endl;
	sc->getAttacked(100);
}

void SpaceBug::isAttacked() {
	defeated = true;
	cout << "The spaceBug has been defeated by the Spacecraft." << endl;
}

LandCritter::LandCritter(string n) { 
	name = n;
	toleranceLevel = 10;
	currentMood = Friendly;
	defeated = false;
}

LandCritter::~LandCritter() {

}

void LandCritter::meleeAttack(Spacecraft* sc) {
	cout << "The landCritter spits at the crew. It is inaffective." << endl;
	sc->getAttacked(150);
}

void LandCritter::isAttacked() {
	defeated = true;
	cout << "The landCritter has been defeated by the crew." << endl;
}