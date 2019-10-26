#include "FighterTransporterDirector.h"

FighterTransporterDirector::FighterTransporterDirector(){
    builder = NULL;
}

FighterTransporterDirector::~FighterTransporterDirector(){
    delete builder;
}

void FighterTransporterDirector::setBuilder(SpacecraftBuilder* newBuilder)
{
    builder = newBuilder;
}

Spacecraft* FighterTransporterDirector::getSpacecraft()
{
    if(builder== NULL){
        cout << "Set builder first before constructing ship" << endl;
        return NULL;
    }

    Spacecraft* sc = new Spacecraft();

    sc->setName("Fighter Transporter");

    sc->addHull(builder->selectHull("Medium Hull"));

    sc->addRoom(builder->selectRooms("Bridge"));

    sc->addRoom(builder->selectRooms("Med Bay"));

    sc->addRoom(builder->selectRooms("Sleeping Quarter"));

    sc->addReactor(builder->selectReactors("Medium Reactor"));

    sc->addWeapon(builder->selectGuns("Flak Cannon"));

    sc->addEngine(builder->selectEngines("FTL"));

    sc->addEngine(builder->selectEngines("SLS"));

    return sc;
}