/**
 *  @file AbstractPart.cpp
 *  @class AbstractPart
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

#include "AbstractPart.h"
#include "ChiefEngineer.h"

/**
 * @param n - the name of the part.
 * @param w - the weight of the part.
 */
AbstractPart::AbstractPart(string n, int w){
    this->_name = n;
    this->_weight = w;
}

/**
 * @return a string that is the name of the part.
 */
string AbstractPart::getName(){
    return this->_name;
}

/**
 * @return a integer that represents the weight of the part.
 */
int AbstractPart::getWeight(){
    return this->_weight;
}

AbstractPart::AbstractPart() {

}

/**
 * @param e - The chief engineer that gets assigned to the observer variable.
 */
void AbstractPart::attachChiefEngineer(Crew* e) {
    observer = e;
}

void AbstractPart::notify(AbstractPart* p) {
    ((ChiefEngineer*)(observer))->partHpUpdate(p);
}

int AbstractPart::getHp(){

}
void AbstractPart::setHp(int newHp){

}