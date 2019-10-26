//
// Created by aaron on 2019/10/25.
//

#include "Pewpew.h"

Pewpew::Pewpew() {

}

void Pewpew::execute(Captain *c, string order) {
    c->executeOrder(order);
}

Pewpew::~Pewpew() {

}
