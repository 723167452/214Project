/**
 * @file CaptainlogMemento.cpp
 * @class CaptainlogMemento
 * @author Constantinos Pavlo Andrianatos
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