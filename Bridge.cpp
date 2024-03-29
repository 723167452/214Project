/**
 *  @file Bridge.cpp
 *  @class Bridge
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#include "Bridge.h"

/**
 * @param p - if there is a commander
 * @param print_creation_message - show creation message or not
 */
Bridge::Bridge(bool p, bool print_creation_message = false) : Room("Bridge", 1000){
	if(print_creation_message){
		cout << "	creating Bridge" << endl;
	}
	commanderPresent = p;
}

Bridge::~Bridge(){
	
}

void Bridge::meeting() {
	if(commanderPresent) {
		cout << "The commander hosts a meeting with all highly ranked crew." << endl;
	} else {
		cout << "The meeting falls into chaos with the commander missing! Someone get him!" << endl;
	}
}

void Bridge::intercom() {
	cout << "A message is relayed to all crew via the intercom." << endl;
}

/**
 * @param c - boolean to set commanderPresent variable to
 */
void Bridge::setCommanderPresent(bool c) {
	commanderPresent = c;
}

bool Bridge::getCommanderPresent() {
	return commanderPresent;
}