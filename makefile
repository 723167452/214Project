main: main.o main.o Weapon.o LaserTurrent.o FlakCannon.o MissileLauncher.o AbstractPart.o
	g++ -o main main.o Weapon.o LaserTurrent.o FlakCannon.o MissileLauncher.o AbstractPart.o

main.o: main.cpp
	g++ -Wall -c main.cpp -o main.o

AbstractPart.o: AbstractPart.h AbstractPart.cpp
	g++ -Wall -c AbstractPart.cpp -o AbstractPart.o

Weapon.o: Weapon.h Weapon.cpp
	g++ -Wall -c Weapon.cpp -o Weapon.o

LaserTurrent.o: LaserTurrent.h LaserTurrent.cpp
	g++ -Wall -c LaserTurrent.cpp -o LaserTurrent.o

FlakCannon.o: FlakCannon.h FlakCannon.cpp
	g++ -Wall -c FlakCannon.cpp -o FlakCannon.o

MissileLauncher.o: MissileLauncher.h MissileLauncher.cpp
	g++ -Wall -c MissileLauncher.cpp -o MissileLauncher.o

run:
	./main

clean:
	rm -rf *.o
	rm main
