#include "LargeReactor.h"

LargeReactor::LargeReactor(bool print_creation_message = false) : Reactor("Large Reactor", 1000,1000000000000){
    if(print_creation_message){
        cout << "   created large reactor..." << endl;
    }
}