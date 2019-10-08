#ifndef BUILDER_H
#define BUILDER_H
#include <string>
#include <iostream>
#include "AbstractPart.h"
using namespace std;
class SpacecraftBuilder{
    private:

    protected:

    public:
        SpacecraftBuilder();
        virtual ~SpacecraftBuilder();
        virtual void selectHull(string) = 0;
        virtual void selectRooms(string*) = 0;
        virtual void selectEngines(string*) = 0;
        virtual void selectGuns(string*) = 0;
        virtual void selectReactors(string*) = 0;
};
#endif