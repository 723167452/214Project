#include "SpacecraftTransporterDirector.h"

SpacecraftTransporterDirector::SpacecraftTransporterDirector(){
    builder = NULL;
}

SpacecraftTransporterDirector::~SpacecraftTransporterDirector(){
    delete builder;
}

void SpacecraftTransporterDirector::setBuilder(SpacecraftBuilder* newBuilder)
{
    builder = newBuilder;
}

Spacecraft* SpacecraftTransporterDirector::getSpacecraft()
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