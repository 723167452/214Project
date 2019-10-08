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
        void setBuilder(SpacecraftBuilder* newBuilder);
        Spacecraft* getSpacecraft();
        
    private:
        SpacecraftBuilder* builder;
};
#endif