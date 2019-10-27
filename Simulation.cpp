/**
 * @file Captain.cpp
 * @class Captain
 * @author Aaron Phillip Facoline
 */

#include "Simulation.h"
#include <iostream>

using namespace std;


Simulation::Simulation() {

}

void Simulation::run(int k) {

    /*Array to to hold the time of day*/
    const string timeOfDay[] = {"00:00 a.m","01:00 a.m","02:00 a.m","03:00 a.m","04:00 a.m","05:00 a.m",
                                "06:00 a.m","07:00 a.m","08:00 a.m","09:00 a.m","10:00 a.m","11:00 a.m",
                                "12:00 p.m","13:00 p.m","14:00 p.m","15:00 p.m","16:00 p.m","17:00 p.m",
                                "18:00 p.m","19:00 p.m","20:00 p.m","21:00 p.m","22:00 p.m","23:00 p.m",
                                };
	if(k == 1){
	cout<<"Creating generic Spaceraft\n";
	SpacecraftDirector * steve = new SpacecraftDirector();
	steve->setBuilder(new SpacecraftBuilder());
	Spacecraft * vloppos = steve->getSpacecraft();
	vloppos->printShip();
	
	cout<<"Creating Battleship\n";		
	BattleshipDirector * susan = new BattleshipDirector();
	susan->setBuilder(new SpacecraftBuilder());
	Spacecraft * bship = susan->getSpacecraft();
	bship->printShip();
		
	cout<<"Creating Exploration Vessel\n";		
	ExplorationVesselDirector * bob = new ExplorationVesselDirector();
	bob->setBuilder(new SpacecraftBuilder());
	Spacecraft * explorationship = bob->getSpacecraft();
	explorationship->printShip();
	
	cout<<"Creating Fighter Transporter\n";		
	FighterTransporterDirector * max = new FighterTransporterDirector();
	max->setBuilder(new SpacecraftBuilder());
	Spacecraft * carrier = max->getSpacecraft();
	carrier->printShip();
	
	cout<<"Creating Frigate\n";		
	FrigateDirector * adam = new FrigateDirector();
	adam->setBuilder(new SpacecraftBuilder());
	Spacecraft * frigate = adam->getSpacecraft();
	frigate->printShip();
	
	cout<<"Creating Spacecraft Transporter\n";		
	SpacecraftTransporterDirector * lucy = new SpacecraftTransporterDirector();
	lucy->setBuilder(new SpacecraftBuilder());
	Spacecraft * transport = max->getSpacecraft();
	transport->printShip();
	
	}
	
	else if(k == 2){
		
	}
	
}


Simulation::~Simulation() {

}


