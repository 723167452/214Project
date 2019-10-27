/**
 *  @file SpacecraftTransporterDirector.h
 *  @class SpacecraftTransporterDirector
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef SPACECRAFTTRANSPORTERDIRECTOR_H
#define SPACECRAFTTRANSPORTERDIRECTOR_H

#include "SpacecraftDirector.h"
#include "SpacecraftBuilder.h"
#include "Spacecraft.h"

using namespace std;

class SpacecraftTransporterDirector : public SpacecraftDirector
{
    public:
        SpacecraftTransporterDirector();
        ~SpacecraftTransporterDirector();
        virtual void setBuilder(SpacecraftBuilder* newBuilder);
        virtual Spacecraft* getSpacecraft();
        
    private:
        SpacecraftBuilder* builder;
};
#endif