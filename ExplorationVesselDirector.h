#ifndef EXPLORATIONVESSELDIRECTOR_H
#define EXPLORATIONVESSELDIRECTOR_H

#include "SpacecraftDirector.h"
#include "SpacecraftBuilder.h"
#include "Spacecraft.h"

using namespace std;

class ExplorationVesselDirector : public SpacecraftDirector
{
    public:
        ExplorationVesselDirector();
        ~ExplorationVesselDirector();
        virtual void setBuilder(SpacecraftBuilder* newBuilder);
        virtual Spacecraft* getSpacecraft();
        
    private:
        SpacecraftBuilder* builder;
};
#endif