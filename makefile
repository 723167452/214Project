main: *.cpp *.h
	g++ -std=c++0x *.cpp *.h -o main.out
run:
	./main.out
clean: 
	-rm -f *.o *.out
