/**
 *  @file SpacecraftBuilder.h
 *  @class SpacecraftBuilder
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef BUILDER_H
#define BUILDER_H
#include <string>
#include <iostream>
#include "AbstractPart.h"

#include "Hull.h"
#include "Room.h"
#include "Reactor.h"
#include "Engine.h"
#include "Weapon.h"

using namespace std;
class SpacecraftBuilder{
    private:

    protected:

    public:
        // made functions non pure virtual for purpose of testing
        SpacecraftBuilder();
        ~SpacecraftBuilder();
        Hull* selectHull(string n);
        Room* selectRooms(string n);
        Engine* selectEngines(string n);
        Weapon* selectGuns(string n);
        Reactor* selectReactors(string n);
};
#endif