/**
 *  @file MediumHull.cpp
 *  @class MediumHull
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#include "MediumHull.h"

/**
 * @param print_creation_message - output creation message or not
 */
MediumHull::MediumHull(bool print_creation_message = false) : Hull("Medium Hull", 2000,20000.00){
    if(print_creation_message){
        cout << "   created medium hull..." <<endl;
    }
}

MediumHull::~MediumHull(){

}