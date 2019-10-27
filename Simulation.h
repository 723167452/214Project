/**
 *  @file Simulation.h
 *  @class Simulation
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

#ifndef INC_214PROJECT_SIMULATION_H
#define INC_214PROJECT_SIMULATION_H

/*Non-Design Pattern*/
#include <iostream>
#include <string>

/*Abstract Part Hierarchy*/
//AbstractPart
#include "AbstractPart.h"
    //Concrete parts
    #include "Reactor.h"
        //Concrete Reactors
        #include "SmallReactor.h"
        #include "MediumReactor.h"
        #include "LargeReactor.h"
    #include "Hull.h"
        //Concrete Hull
        #include "SmallHull.h"
        #include "MediumHull.h"
        #include "LargeHull.h"
    #include "Room.h"
        //concrete Room
        #include "Bridge.h"
        #include "MedBay.h"
        #include "SleepingQuarter.h"
		#include "Room.h"
    #include "Weapon.h"
        //concrete Weapon
        #include "MissileLauncher.h"
        #include "LaserTurrent.h"
        #include "FlakCannon.h"
/*Builder Hierarchy*/
    //Spacecraft Builder
    #include "SpacecraftBuilder.h"
    //Spacecraft
    #include "Spacecraft.h"
    //Spacecraft Director
    #include "SpacecraftDirector.h"
        //concrete direcotrs
        #include "BattleshipDirector.h"
        #include "FrigateDirector.h"
        #include "ExplorationVesselDirector.h"
        #include "FighterTransporterDirector.h"
        #include "SpacecraftTransporterDirector.h"

#include "Spacestation.h"
#include "Admiral.h"
#include "Captain.h"
#include "Navigator.h"
#include "Coordinate.h"
#include "Fighter.h"
#include "Critter.h"
#include "ChiefEngineer.h"
#include "Planet.h"
#include "PlanetState.h"
#include "CritterLanguageContext.h"
#include "LanguageExpression.h"

using namespace std;

class Simulation {
public:
    Simulation();

    void run(int k);

    ~Simulation();
};


#endif //INC_214PROJECT_SIMULATION_H


