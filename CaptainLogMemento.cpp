/**
 *  @file CaptainLogMemento.cpp
 *  @class CaptainLogMemento
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

#include "CaptainLogMemento.h"

CaptainLogMemento::CaptainLogMemento(){

}

string CaptainLogMemento::getState(){
    return _log;
}

/**
 * @param log - Setting saved log to this parameter.
 */
void CaptainLogMemento::setState(string log){
    _log = log;
}