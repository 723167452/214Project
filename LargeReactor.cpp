/**
 *  @file LargeReactor.cpp
 *  @class LargeReactor
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#include "LargeReactor.h"

/**
 * @param print_creation_message - output creation message or not
 */
LargeReactor::LargeReactor(bool print_creation_message = false) : Reactor("Large Reactor", 1000,1000000000000){
    if(print_creation_message){
        cout << "   created large reactor..." << endl;
    }
}

LargeReactor::~LargeReactor(){

}