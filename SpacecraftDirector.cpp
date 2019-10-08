#include "SpacecraftDirector.h"

SpacecraftDirector::SpacecraftDirector(){
    builder = NULL;
}

SpacecraftDirector::~SpacecraftDirector(){
    delete builder;
}

void SpacecraftDirector::setBuilder(SpacecraftBuilder* newBuilder)
{
    builder = newBuilder;
}

Spacecraft* SpacecraftDirector::getSpacecraft()
{
    if(builder== NULL){
        cout << "Set builder first before constructing ship" << endl;
        return NULL;
    }

    Spacecraft* sc = new Spacecraft();

    sc->addHull(builder->selectHull("Large Hull"));

    sc->addRoom(builder->selectRooms("Bridge"));

    sc->addRoom(builder->selectRooms("Med Bay"));

    sc->addRoom(builder->selectRooms("Sleeping Quarter"));

    sc->addReactor(builder->selectReactors("Medium Reactor"));

    //sc->addWeapon(builder->selectGuns("Small Guns")); Add in when Ivan adds guns

    sc->addEngine(builder->selectEngines("FTL"));

    sc->addEngine(builder->selectEngines("SLS"));

    return sc;
}