/**
 * @file SubLightSpeedEngines.cpp
 * @class SubLightSpeedEngines
 * @author Aaron Phillip Facoline
 */

#include "SubLightSpeedEngines.h"


/**
 * @param EngineID - int that give the engine a unique engine id for each ship(engine1, engine2...).
 * @param weight - int that sets the weight of the engine.
 */
SubLightSpeedEngines::SubLightSpeedEngines(int EngineID, int weight) {
    this->_name = "SL-Engine<" + to_string(EngineID) + ">";
    this->_weight = weight;

    this->thrust = weight * 21;
    this->powerConsumption = weight * 3;
    this->status = true;
    this->maxHp = _weight * 50;
    this->hp = this->maxHp;
}

SubLightSpeedEngines::~SubLightSpeedEngines() {

}
