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
using namespace std;

vector<Coordinate*> Coordinate::map;

int main(){
    /*Array to to hold the time of day*/
    const string timeOfDay[] = {"00:00 a.m","01:00 a.m","02:00 a.m","03:00 a.m","04:00 a.m","05:00 a.m",
                                "06:00 a.m","07:00 a.m","08:00 a.m","09:00 a.m","10:00 a.m","11:00 a.m",
                                "12:00 p.m","13:00 p.m","14:00 p.m","15:00 p.m","16:00 p.m","17:00 p.m",
                                "18:00 p.m","19:00 p.m","20:00 p.m","21:00 p.m","22:00 p.m","23:00 p.m",
                                };

    SpacecraftDirector * steve = new SpacecraftDirector();
    steve->setBuilder(new SpacecraftBuilder());
    Spacecraft * vloppos = steve->getSpacecraft();
				
    BattleshipDirector * susan = new BattleshipDirector();
    susan->setBuilder(new SpacecraftBuilder());
    Spacecraft * wub = susan->getSpacecraft();
    //vloppos->printShip();
    ((Spacecraft*)(vloppos->map[1]))->printShip();

    cout << endl;
    Critter* c = new SpaceBug("space tentacles");
    c->meleeAttack(wub);
    c->isAttacked();

    wub->attackTarget("Ax0y0");

    return 0;
}