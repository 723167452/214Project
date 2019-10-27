/**
 *  @file ExplorationVesselDirector.cpp
 *  @class ExplorationVesselDirector
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#include "ExplorationVesselDirector.h"

ExplorationVesselDirector::ExplorationVesselDirector(){
    builder = NULL;
}

ExplorationVesselDirector::~ExplorationVesselDirector(){
    delete builder;
}

/**
 * @param newBuilder - SpacecraftBuilder object to be added to this->builder
 */
void ExplorationVesselDirector::setBuilder(SpacecraftBuilder* newBuilder)
{
    builder = newBuilder;
}

/**
 * build and return Spacecraft object
 */
Spacecraft* ExplorationVesselDirector::getSpacecraft()
{
    if(builder== NULL){
        cout << "Set builder first before constructing ship" << endl;
        return NULL;
    }

    Spacecraft* sc = new Spacecraft();

    sc->setName("Exploration Vessel");

    sc->addHull(builder->selectHull("Small Hull"));

    sc->addRoom(builder->selectRooms("Bridge"));

    sc->addRoom(builder->selectRooms("Med Bay"));

    sc->addRoom(builder->selectRooms("Sleeping Quarter"));

    sc->addReactor(builder->selectReactors("Small Reactor"));

    sc->addWeapon(builder->selectGuns("Laser Turrent"));

    sc->addEngine(builder->selectEngines("FTL"));

    sc->addEngine(builder->selectEngines("SLS"));

    return sc;
}