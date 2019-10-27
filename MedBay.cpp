/**
 *  @file MedBay.cpp
 *  @class MedBay
 *  @author Aaron Facoline, Dylan Krajnc, Lap Ren Ivan Zhang, Pavlo Andrianatos, Rudo Janse van Rensburg
 */
#include "MedBay.h"

/**
 * @param mE - amount of starting medical supplies
 * @param print_creation_message - output creation message or not
 */
MedBay::MedBay(int mE, bool print_creation_message) : Room("Medical Bay", 600){
	if(print_creation_message){
		cout << "	created Medical Bay" <<endl;
	}
	medicalEquipment = mE;
}
MedBay::~MedBay(){
	
}

void MedBay::healCrew() {
	if(medicalEquipment > 0) {
		cout << "All injured crew members have been healed." << endl;
		medicalEquipment--;
	} else {
		cout << "Unable to heal crew members due to a lack of medical equipment. Please restock." << endl;
	}
}
	
void MedBay::resupplyMedicalEquipment() {
	medicalEquipment += 5;
}

int MedBay::getMedicalEquipment() {
	return medicalEquipment;
}

/**
 * @param val - set medicalEquipment to
 */
void MedBay::setMedicalEquipment(int val) {
	medicalEquipment = val;
}

void MedBay::setRoomInfo(string n, int w) {
	//AbstractPart(n,w);
}

int MedBay::getConsumables() {
	return medicalEquipment;
}