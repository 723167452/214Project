#ifndef SPACECRAFT_H
#define SPACECRAFT_H
#include <iostream>
#include <string>
#include <vector>
#include "AbstractPart.h"
#include "Hull.h"
#include "Reactor.h"
#include "Room.h"
#include "Engine.h"
#include "Weapon.h"
#include "Coordinate.h"
#include "Critter.h"
class Weapon;
class Engine;
using namespace std;
class Spacecraft : public Coordinate{
        private:
            string _name;
            int fuel; //this value is a %
            Hull* _hull;
            vector<Room*> _rooms;
            vector<Reactor*> _reactors;
            vector<Weapon*> _weapons;
            vector<Engine*> _engines;
	        vector<Critter*> _critterPrisonerList;
        protected:
            int _weight;
        public:
            Spacecraft();
            virtual ~Spacecraft();
            bool addHull(Hull*);
            bool addWeapon(Weapon*);
            bool addRoom(Room*);
            bool addReactor(Reactor*);
            bool addEngine(Engine*);
            void sendCommand();//needs proper implementation
            int getWeight();
            //other functions?
            //Just an output method to test builder
            void printShip();
            void repair();
            void resupply();
	        bool addCritterPrisoner(Critter*);
            void setName(string);
            int getWeight();
            //need attack function to call weapons attack
};
#endif
