/**
 *  @file Spacestation.h
 *  @class Spacestation
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef SPACESTATION_H
#define SPACESTATION_H
#include "Spacecraft.h"
#include <vector>
#include <stdio.h>
using namespace std;

class Admiral; //forward declaration

class Spacestation : public Spacecraft{
    private:
        static Spacestation* _onlyInstance;
        vector<Spacecraft*> _fleet;
        vector<Spacecraft*> _docked;
        enum DangerLevel{Green, Yellow, Red};
        DangerLevel currentLevel = Green;
	//    Admiral* admiral;

    protected:
        Spacestation();
        Spacestation(const Spacestation&);
        virtual ~Spacestation();

    public:
	Admiral* admiral;
        void changeAdmiral();
        static Spacestation* instance();
        void updateStation(Spacestation&);
        bool attach(Spacecraft*);
        bool detach(Spacecraft*);
        bool dockShip(Spacecraft*);
        bool undockShip(Spacecraft*);
        void repairDockedShips();
        void resupplyDockedShips();
        void setCurrentLevelGreen();
        void setCurrentLevelYellow();
        void setCurrentLevelRed();
};
#endif
