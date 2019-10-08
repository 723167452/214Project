#ifndef BUILDER_H
#define BUILDER_H
#include <string>
#include <iostream>
#include "AbstractPart.h"

#include "Hull.h"
#include "Room.h"
#include "Reactor.h"
#include "Engine.h"

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
        void selectGuns(string n);
        Reactor* selectReactors(string n);
};
#endif