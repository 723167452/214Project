/**
 *  @file SpacecraftDirector.h
 *  @class SpacecraftDirector
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef SPACECRAFTDIRECTOR_H
#define SPACECRAFTDIRECTOR_H

#include "SpacecraftBuilder.h"
#include "Spacecraft.h"

using namespace std;

class SpacecraftDirector
{
    public:
        SpacecraftDirector();
        ~SpacecraftDirector();
        virtual void setBuilder(SpacecraftBuilder* newBuilder);
        virtual Spacecraft* getSpacecraft();
        
    private:
        SpacecraftBuilder* builder;
};
#endif