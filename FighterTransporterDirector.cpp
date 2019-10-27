/**
 *  @file FighterTransporterDirector.cpp
 *  @class FighterTransporterDirector
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#include "FighterTransporterDirector.h"

FighterTransporterDirector::FighterTransporterDirector(){
    builder = NULL;
}

FighterTransporterDirector::~FighterTransporterDirector(){
    delete builder;
}

/**
 * @param newBuilder - SpacecraftBuilder object to be added to this->builder
 */
void FighterTransporterDirector::setBuilder(SpacecraftBuilder* newBuilder)
{
    builder = newBuilder;
}

/**
 * build and return Spacecraft object
 */
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