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
class Engine;
using namespace std;
class Spacecraft {
        private:
            string _name;
            int fuel; //this value is a %
            Hull* _hull;
            vector<Room*> _rooms;
            vector<Reactor*> _reactors;
            vector<Weapon*> _weapons;
            vector<Engine*> _engines;
        protected:
            int _weight;
        public:
            Spacecraft();
            virtual ~Spacecraft();
            bool addHull(Hull*);
            bool addWeapon(Weapon*);//need to get ivan's weapon stuff
            bool addRoom(Room*);
            bool addReactor(Reactor*);
            bool addEngine(Engine*);
            void sendCommand();//needs proper implementation
            //other functions?
            //Just an output method to test builder
            void printShip();
            void repair();
            void resupply();
};
#endif