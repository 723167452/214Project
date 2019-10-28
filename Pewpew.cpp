/**
 *  @file Pewpew.cpp
 *  @class Pewpew
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

#include "Pewpew.h"

Pewpew::Pewpew() {

}

/**
 * @param c - captain object
 * @param order - string containing order and coordinate
 * call captain to execute order to pass on to a chain of command
 */ 
void Pewpew::execute(Captain *c, string order) {
    c->executeOrder(order);
}

Pewpew::~Pewpew() {

}
