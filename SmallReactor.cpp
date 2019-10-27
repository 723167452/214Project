/**
 *  @file SmallReactor.cpp
 *  @class SmallReactor
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#include "SmallReactor.h"

/**
 * @param print_creation_message - output creation message or not
 */
SmallReactor::SmallReactor(bool print_creation_message = false) : Reactor("Small Reactor", 100, 10000){
    if(print_creation_message){
        cout << "   created small reactor..." << endl;
    }
}

SmallReactor::~SmallReactor(){
    
}
