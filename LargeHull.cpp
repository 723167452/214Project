/**
 *  @file LargeHull.cpp
 *  @class LargeHull
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#include "LargeHull.h"

/**
 * @param print_creation_message - output creation message or not
 */ 
LargeHull::LargeHull(bool print_creation_message = false) : Hull("Large Hull", 4000,40000.00){
    if(print_creation_message){
        cout << "   created large hull..." <<endl;
    }
}

LargeHull::~LargeHull(){

}