/**
 * @file FasterThanLightDrive.cpp
 * @class FasterThanLightDrive
 * @author Aaron Phillip Facoline
 */

#include <iostream>
#include "FasterThanLightDrive.h"

/**
 * @param EngineID - int that give the engine a unique engine id for each ship(engine1, engine2...).
 * @param weight - int that sets the weight of the engine.
 */
FasterThanLightDrive::FasterThanLightDrive(int EngineID, int weight) {
    this->_name = "FTL-Drive<-" + to_string(EngineID) + "->";
    this->_weight = weight;

    this->thrust = weight * 0;
    this->powerConsumption = weight * 0.2;
    this->status = true;
    this->maxHp = _weight * 75;
    this->hp = this->maxHp;

    this->maxCharge = weight * 40;
    this->charge = 0;
    this->spinUpConsumption = weight * 5;
}
/**
 * @todo still need to be implemented.
 * @param x
 * @param y
 */
void FasterThanLightDrive::jump(int x, int y) {

}


/**
 * @def charges up the jump drive
 */
void FasterThanLightDrive::spinUp() {
    this->charge = this->spinUpConsumption;
    if(this->charge > this->maxCharge){
        this->charge = this->maxCharge;
    }
    jumpStatus();
}


/**
 * @return a boolean value stating if the engine is ready to perform a jump
 */
bool FasterThanLightDrive::jumpStatus() {
    if(this->charge == this->maxCharge){
        cout<<this->_name<<" ready to jump."<<endl;
        return true;
    }
    else{
        cout<<this->_name<<" at "<<to_string(this->charge/this->maxCharge)<<"% charge. --Can not jump--"<<endl;
        return false;
    }
}

FasterThanLightDrive::~FasterThanLightDrive() {

}
