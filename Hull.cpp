#include "Hull.h"

Hull::Hull(string n = "Default Hull", int w = 0, double s= 0) : AbstractPart(n,w){
    this->_hullSpace = s;
}

Hull::~Hull(){

}

double Hull::getHullSpace(){
    return this->_hullSpace;
}