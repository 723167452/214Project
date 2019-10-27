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
		cout<<"Creating Spacestation \n";
		Spacecraft * mothership = Spacestation::instance();
		mothership->printShip();
	}
	
	else if(k == 3){
		FrigateDirector * adam = new FrigateDirector();
		adam->setBuilder(new SpacecraftBuilder());
		Spacecraft * frigate = adam->getSpacecraft();
		
		BattleshipDirector * susan = new BattleshipDirector();
		susan->setBuilder(new SpacecraftBuilder());
		Spacecraft * bship = susan->getSpacecraft();
		
		Spacecraft * mothership = Spacestation::instance();
		
		cout << "\x1B[2J\x1B[H";
		
		cout<<"\nCreating Admiral ZeroTwo\n\n\n";
		Admiral * admiral = new Admiral("ZeroTwo");
		
		((Spacestation*)(mothership))->admiral = admiral;
		
		Captain * temp;
		admiral->addCaptain(new Captain("Rick",frigate));
		temp = admiral->getCaptain("Rick");
		temp->addCrew(new Navigator("Anna"));
		temp->addCrew(new Fighter("Ross"));
		temp->printLog();
		cout<<"\n>>===>>==EndLog==<<===<<\n\n";
		
		admiral->addCaptain(new Captain("Greta",bship));
		temp = admiral->getCaptain("Greta");
		temp->addCrew(new Navigator("Marry"));
		temp->addCrew(new Fighter("Lee"));
		temp->printLog();
		cout<<"\n>>===>>==EndLog==<<===<<\n\n";
		
		admiral->printLog();
		cout<<"\n>>===>>==EndLog==<<===<<\n\n";
	}
	
	else if(k == 4){
		FrigateDirector * adam = new FrigateDirector();
		adam->setBuilder(new SpacecraftBuilder());
		Spacecraft * frigate = adam->getSpacecraft();
		
		BattleshipDirector * susan = new BattleshipDirector();
		susan->setBuilder(new SpacecraftBuilder());
		Spacecraft * bship = susan->getSpacecraft();
		
		Spacecraft * mothership = Spacestation::instance();
		
		Admiral * admiral = new Admiral("ZeroTwo");
		
		((Spacestation*)(mothership))->admiral = admiral;
		
		Captain * temp;
		admiral->addCaptain(new Captain("Rick",frigate));
		temp = admiral->getCaptain("Rick");
		temp->addCrew(new Navigator("Anna"));
		temp->addCrew(new Fighter("Ross"));
		
		admiral->addCaptain(new Captain("Greta",bship));
		temp = admiral->getCaptain("Greta");
		temp->addCrew(new Navigator("Marry"));
		temp->addCrew(new Fighter("Lee"));
		
		cout << "\x1B[2J\x1B[H";
		
		admiral->moveFleet("Mx23y18");
		admiral->moveFleet("Mx80y45");
		admiral->fleetTarget("Ax85y46");
		admiral->moveShip("Rick","Mx17y20");
		
		admiral->printLog();
		cout<<"\n>>===>>==EndLog==<<===<<\n\n";
		
		temp->printLog();
		cout<<"\n>>===>>==EndLog==<<===<<\n\n";
		
		temp = admiral->getCaptain("Rick"); 
		temp->printLog();
		cout<<"\n>>===>>==EndLog==<<===<<\n\n";
	}
	
}


Simulation::~Simulation() {

}


