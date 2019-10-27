/**
 *  @file FighterTransporterDirector.h
 *  @class FighterTransporterDirector
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#ifndef FIGHTERTRANSPORTERDIRECTOR_H
#define FIGHTERTRANSPORTERDIRECTOR_H

#include "SpacecraftDirector.h"
#include "SpacecraftBuilder.h"
#include "Spacecraft.h"

using namespace std;

class FighterTransporterDirector : public SpacecraftDirector
{
    public:
        FighterTransporterDirector();
        ~FighterTransporterDirector();
        virtual void setBuilder(SpacecraftBuilder* newBuilder);
        virtual Spacecraft* getSpacecraft();
        
    private:
        SpacecraftBuilder* builder;
};
#endif