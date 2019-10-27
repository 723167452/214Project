/**
 *  @file MediumReactor.cpp
 *  @class MediumReactor
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#include "MediumReactor.h"

/**
 * @param print_creation_message - output creation message or not
 */
MediumReactor::MediumReactor(bool print_creation_message = false) : Reactor("Medium Reactor", 500,1000000){
    if(print_creation_message){
        cout << "   created medium reactor..." << endl;
    }
}

MediumReactor::~MediumReactor(){
    
}