/**
 *  @file BattleshipDirector.cpp
 *  @class BattleshipDirector
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#include "BattleshipDirector.h"

BattleshipDirector::BattleshipDirector(){
    builder = NULL;
}

BattleshipDirector::~BattleshipDirector(){
    delete builder;
}

/**
 * @param newBuilder - spacecraftBuilder object to be assigned to this->builder
 */
void BattleshipDirector::setBuilder(SpacecraftBuilder* newBuilder)
{
    builder = newBuilder;
}

/**
 * build and return a spacecraft object
 */
Spacecraft* BattleshipDirector::getSpacecraft()
{
    if(builder== NULL){
        cout << "Set builder first before constructing ship" << endl;
        return NULL;
    }

    Spacecraft* sc = new Spacecraft();

    sc->setName("Battleship");

    sc->addHull(builder->selectHull("Large Hull"));

    sc->addRoom(builder->selectRooms("Bridge"));

    sc->addRoom(builder->selectRooms("Med Bay"));

    sc->addRoom(builder->selectRooms("Sleeping Quarter"));

    sc->addReactor(builder->selectReactors("Large Reactor"));

    sc->addWeapon(builder->selectGuns("Missile Launcher"));

    sc->addEngine(builder->selectEngines("FTL"));

    sc->addEngine(builder->selectEngines("SLS"));

    return sc;
}