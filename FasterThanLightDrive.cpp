//
// Created by aaron on 2019/10/08.
//

#include <iostream>
#include "FasterThanLightDrive.h"

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

void FasterThanLightDrive::jump(int x, int y) {

}

void FasterThanLightDrive::spinUp() {
    this->charge = this->spinUpConsumption;
    if(this->charge > this->maxCharge){
        this->charge = this->maxCharge;
    }
    jumpStatus();
}

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
