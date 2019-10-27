/**
 *  @file Move.cpp
 *  @class Move
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#include "Move.h"

Move::Move() {

}

/**
 * @param c - captain object
 * @param order - string containing action and coordinate
 * captain execute order onto chain of command
 */
void Move::execute(Captain * c,string order) {
    c->executeOrder(order);
}

Move::~Move() {

}
