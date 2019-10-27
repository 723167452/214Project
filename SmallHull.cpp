/**
 *  @file SmallHull.cpp
 *  @class SmallHull
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#include "SmallHull.h"

/**
 * @param print_craetion_message - output creation message or not
 */
SmallHull::SmallHull(bool print_craetion_message = false) : Hull("Small Hull", 1000,10000.00){
    if(print_craetion_message){
        cout << "   created small hull..." <<endl;
    }
}

SmallHull::~SmallHull(){

}