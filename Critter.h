/**
 * @author Dylan Krajnc
 */

#ifndef CRITTER_H
#define CRITTER_H

#include <iostream>
#include "Spacecraft.h"
#include "Coordinate.h"
using namespace std;

/* prototype */
class Spacecraft;
class Critter { 
public:
	Critter();
	virtual ~Critter();

	virtual void meleeAttack(Spacecraft*) = 0;
	virtual void isAttacked() = 0; //can only be attack if in Enemy state
	void lowerTolerance();
	void increaseTolerance();
	bool isDefeated();
protected:
	enum Mood{Friendly, Hostile, Enemy}; //if hostile and tolerence is 0, then they become enemies
	Mood currentMood;
	int toleranceLevel;
	bool defeated;
	string name;
};

/* concrete protoypes */
class SpaceBug : public Critter, public Coordinate {
public: 
	SpaceBug(string);
	~SpaceBug();

	virtual void meleeAttack(Spacecraft*);
	virtual void isAttacked(); //can only be attack if in Enemy state
};

class LandCritter : public Critter {
public: 
	LandCritter(string);
	~LandCritter();

	virtual void meleeAttack(Spacecraft*);
	virtual void isAttacked(); //can only be attack if in Enemy state
};
#endif
