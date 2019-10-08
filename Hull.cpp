#include "Hull.h"

Hull::Hull(string n = "Default Hull", int w = 0, double s= 0) : AbstractPart(n,w){
    this->_maxWeight = s;
}

Hull::~Hull(){
    this->_maxWeight = NULL;
}
bool Hull::addPartToHull(AbstractPart* part){
    if(_currentWeight+part->getWeight() <= _maxWeight){
        _currentWeight+= part->getWeight();
        return true;
    }else{
        cout << "   " << this->getName() << " has reached it's maximum weight..." << endl;
    }
}

double Hull::getMaxWeight(){
    return this->_maxWeight;
}