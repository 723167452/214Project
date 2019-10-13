#include "AbstractPart.h"

AbstractPart::AbstractPart(string n, int w){
    this->_name = n;
    this->_weight = w;
}

string AbstractPart::getName(){
    return this->_name;
}

int AbstractPart::getWeight(){
    return this->_weight;
}

AbstractPart::AbstractPart() {

}
