CPPFLAGS=-std=c++11 -g -O3 -Wall
PROG=BST

$(PROG): bst.o
		g++ bst.o -o $(PROG)

Main.o: bst.cpp bst.h
		g++ $(CPPFLAGS) -c bst.cpp

clean:
		rm *.o $(PROG)
