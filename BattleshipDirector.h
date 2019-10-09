#ifndef BATTLESHIPDIRECTOR_H
#define BATTLESHIPDIRECTOR_H

#include "SpacecraftDirector.h"
#include "SpacecraftBuilder.h"
#include "Spacecraft.h"

using namespace std;

class BattleshipDirector : public SpacecraftDirector
{
    public:
        BattleshipDirector();
        ~BattleshipDirector();
        virtual void setBuilder(SpacecraftBuilder* newBuilder);
        virtual Spacecraft* getSpacecraft();
        
    private:
        SpacecraftBuilder* builder;
};
#endif