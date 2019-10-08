//
// Created by aaron on 2019/10/08.
//

#include "SubLightSpeedEngines.h"

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
