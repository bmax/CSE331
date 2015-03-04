CPPFLAGS=-std=c++11 -g -O3 -Wall
PROG=heap

$(PROG): heap-shell.o
		g++ heap-shell.o -o $(PROG)

Main.o: heap-shell.cpp 
		g++ $(CPPFLAGS) -c heap-shell.cpp

clean:
		rm *.o $(PROG)
