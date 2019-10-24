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

int main(){
    /*Array to to hold the time of day*/
    const string timeOfDay[] = {"00:00 a.m","01:00 a.m","02:00 a.m","03:00 a.m","04:00 a.m","05:00 a.m",
                                "06:00 a.m","07:00 a.m","08:00 a.m","09:00 a.m","10:00 a.m","11:00 a.m",
                                "12:00 p.m","13:00 p.m","14:00 p.m","15:00 p.m","16:00 p.m","17:00 p.m",
                                "18:00 p.m","19:00 p.m","20:00 p.m","21:00 p.m","22:00 p.m","23:00 p.m",
                                };

    /*Reactor Part*/
    cout<<  "Creating Reactors" << endl;
    cout<<  "==========================================" <<endl;
    Reactor* smallReactor   = new SmallReactor(true);
    Reactor* mediumReactor  = new MediumReactor(true);
    Reactor* largeReactor   = new LargeReactor(true);
    Reactor *reactors[3] = {smallReactor, mediumReactor, largeReactor};
    for (size_t i = 0; i < 3; i++)
    {
        cout << "-----------------------------" << endl;
        cout << "Name               : " << reactors[i]->getName()   << endl;
        cout << "Weight             : " << reactors[i]->getWeight() << endl;
        cout << "Energy Production  : " << reactors[i]->getEnergyProduction() << endl;
        cout << "-----------------------------" << endl; 
    }
    cout<<  "==========================================" <<endl;

    /*Hull Part*/
    cout<<  "Creating Hull" << endl;
    cout<<  "==========================================" <<endl;
    Hull* smallHull      = new SmallHull(true);
    Hull* mediumHull     = new MediumHull(true);
    Hull* largeHull      = new LargeHull(true);
    
    Hull *hulls[3] = {smallHull, mediumHull, largeHull};
    for (size_t i = 0; i < 3; i++)
    {
        cout << "-----------------------------" << endl;
        cout << "Name               : " << hulls[i]->getName()   << endl;
        cout << "Weight             : " << hulls[i]->getWeight() << endl;
        cout << "Hull Space         : " << hulls[i]->getHullSpace() << endl;
        cout << "-----------------------------" << endl; 
    }
    cout<<  "==========================================" <<endl;


    /*Room Part*/
    cout<<  "Creating Rooms" << endl;
    cout<<  "==========================================" <<endl;
    Room* bridge            = new Bridge(false,true);
    Room* medBay            = new MedBay(false,true);
    Room* sleepingQuarter   = new SleepingQuarter(100,true,true);
    Crew* bob = new Crew("Bob");
    medBay->addCrewMember(bob);
    medBay->removeCrewMember(bob);

    Room* rooms[3] ={bridge, medBay, sleepingQuarter};
    for (size_t i = 0; i < 3; i++)
    {
        cout << "-----------------------------" << endl;
        cout << "Name               : " << rooms[i]->getName()   << endl;
        cout << "Weight             : " << rooms[i]->getWeight() << endl;
        cout << "Crew               : " << endl;
        rooms[i]->getCrew();
        cout << "-----------------------------" << endl; 
    }
    


    // Testing builder

    cout << "Commencing Battleship building process..." << endl;

    Spacecraft* sc = new Spacecraft();

    SpacecraftDirector* director = new BattleshipDirector();

    SpacecraftBuilder* builder = new SpacecraftBuilder();

    director->setBuilder(builder);

    sc = director->getSpacecraft();

    sc->printShip();

    cout << "Commencing Frigate building process..." << endl;

    director = new FrigateDirector();

    director->setBuilder(builder);

    sc = director->getSpacecraft();

    sc->printShip();

    cout << "Commencing Exploration Vessel building process..." << endl;

    director = new ExplorationVesselDirector();

    director->setBuilder(builder);

    sc = director->getSpacecraft();

    sc->printShip();

    cout << "Commencing Fighter Transporter building process..." << endl;

    director = new FighterTransporterDirector();

    director->setBuilder(builder);

    sc = director->getSpacecraft();

    sc->printShip();

    cout << "Commencing Spacecraft Transporter building process..." << endl;

    director = new SpacecraftTransporterDirector();

    director->setBuilder(builder);

    sc = director->getSpacecraft();

    sc->printShip();


    for (size_t i = 0; i < 24; i++)
    {
        cout<<"Time: "<<timeOfDay[i]<<endl;
        cout<<"=========================================="<<endl;
    

        cout<<"=========================================="<<endl<<endl;
    }

    delete sc;

    delete director;

    delete builder;

    /*Clear Memory*/
    *reactors = NULL;
    delete smallReactor;
    delete mediumReactor;
    delete largeReactor;

    *hulls = NULL;
    delete smallHull;
    delete mediumHull;
    delete largeHull;

    *rooms = NULL;
    delete bridge;
    delete medBay;
    delete sleepingQuarter;


    return 0;
}