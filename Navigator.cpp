/**
 *  @file Navigator.cpp
 *  @class Navigator
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */

#include "Navigator.h"

/**
 * @param n - The name of the navigator.
 */
Navigator::Navigator(string n) {
    this->_name = n;
    this->_title = "Navigator";
}

/**
 * @param s - The string order.
 * @param ship - The ship that order needs to execute on.
 * 
 * calculating the ship thrust and move the ship
 */
void Navigator::executeOrder(string s, Spacecraft * ship){
    string xCoord = "", yCoord = "";
    int intXCoord = 0, intYCoord = 0;
    int yStart = 0; int stringLength = s.length();

    if(s.at(0) == 'M') {
        // Move ship
    	if(s.at(1) == 'x') {
    		for(int i = 2; i < stringLength; i++) {
    			if(s.at(i) != 'y')
    				xCoord += s.at(i);
    			else {
    				yStart = ++i;
    				break;
                }
    		}
    		for(int i = yStart++; i < stringLength; i++) {
    			yCoord += s.at(i);
    		}
    	}

    	intXCoord = stoi(xCoord);
    	intYCoord = stoi(yCoord);
    	int weight = 0; int thrust = 0;

    	for(auto i = ship->_engines.begin(); i != ship->_engines.end(); i++) {
    		weight += (*i)->getWeight();
    		thrust += (*i)->getThrust();
    	}

    	if(((thrust/weight) * 20000) > 0) {
    		cout << "The spacecraft moves to the new co-ordinates." << endl;
    		ship->_x = intXCoord;
    		ship->_y = intYCoord;
    	}
    	else {
    		cout << "The spacecraft does not have enough thrust available to move that distance due to it's weight." << endl; 
    	}

    } else{
        this->next->executeOrder(s, ship);
    }
}
