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