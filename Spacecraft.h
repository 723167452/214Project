#ifndef SPACECRAFT_H
#define SPACECRAFT_H
#include <iostream>
#include <string>
#include "AbstractPart.h"
class Hull;
class Weapon;

using namespace std;
class Spacecraft{
        private:
            string _name;
            int _weight;
            Hull* _hull;
        public:
            Spacecraft();
            ~Spacecraft();
            void sendCommand();
};
#endif