#include "SmallReactor.h"

SmallReactor::SmallReactor(bool print_creation_message = false) : Reactor("Small Reactor", 100, 10000){
    if(print_creation_message){
        cout << "   created small reactor..." << endl;
    }
}
