#include <iostream>
#include "Simulation.h"

using namespace std;

vector<Coordinate*> Coordinate::map;

int main() {
    cout << "Cos 214 Project: " << endl;
    cout << "Group members: \n"
            "   ->Aaron Facoline\n"
            "   ->Dylan Krajnc\n"
            "   ->Lap Ren Ivan Zhang\n"
            "   ->Pavlo Andrianatos\n"
            "   ->Rudo Janse van Rensburg\n";
	

    bool demo = true;
    Simulation * sim = new Simulation();
    string buf;

    while(demo) {
        cout << "\x1B[2J\x1B[H";
        cout << "Select a design pattern to demo:\n"
                "1. Builder\n"
                "2. Singleton\n"
                "99.quit\n";
        int user_input;
        cin >> user_input;
        cout << "\x1B[2J\x1B[H";
        if(user_input != 99){
            sim->run(user_input);
            cout << "\n\nSimulation compleat.\nPress Enter to continue:"<<endl;
            cin.ignore();
            cin.get();
        }
        else {
            demo = false;
        }
    }
    cout << "\x1B[2J\x1B[H";

    return 0;
}