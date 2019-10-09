#ifndef FRIGATEDIRECTOR_H
#define FRIGATEDIRECTOR_H

#include "SpacecraftDirector.h"
#include "SpacecraftBuilder.h"
#include "Spacecraft.h"

using namespace std;

class FrigateDirector : public SpacecraftDirector
{
    public:
        FrigateDirector();
        ~FrigateDirector();
        virtual void setBuilder(SpacecraftBuilder* newBuilder);
        virtual Spacecraft* getSpacecraft();
        
    private:
        SpacecraftBuilder* builder;
};
#endif