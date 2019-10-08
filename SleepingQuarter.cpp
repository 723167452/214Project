#include "SleepingQuarter.h"

SleepingQuarter::SleepingQuarter(int f, bool s, bool print_creation_message = false) : Room("Sleeping Quarter", 700){
	if(print_creation_message){
		cout << "	created Sleeping Quarter..." << endl;
	}
	food = f;
	cleanSheets = s;
}

SleepingQuarter::~SleepingQuarter(){
	
}

void SleepingQuarter::feedCrew() {
	if(food > 0) {
		cout << "The crew has been fed." << endl;
	} else {
		cout << "Food supplies have diminished. Please restock." << endl;
	}
}

void SleepingQuarter::restockFood() {
	food = 10;
	cout << "Food supply has been restocked (x10)." << endl;
}

void SleepingQuarter::sleepCrew() {
	if(cleanSheets) {
		cout << "It's been a long day. The AI will look after the ship while everyone is asleep." << endl;
	} else {
		cout << "The rooms are unclean. Seems like someone has been skimping on their duties." << endl;
	}
}

void SleepingQuarter::cleanRoom() {
	cleanSheets = true;
}
	
void SleepingQuarter::soundAlarm() {
	cout << "Alarm has been sounded! Everyone is rushing to their stations!" << endl;
}

void SleepingQuarter::setRoomInfo(string, int) {
	//AbstractPart(n,w);
}