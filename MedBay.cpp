//Dylan Krajnc

#include "MedBay.h"

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
	medicalEquipment = 5;
}

int MedBay::getMedicalEquipment() {
	return medicalEquipment;
}

void MedBay::setMedicalEquipment(int val) {
	medicalEquipment = val;
}

void MedBay::setRoomInfo(string n, int w) {
	//AbstractPart(n,w);
}