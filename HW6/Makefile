CPPFLAGS=-std=c++11 -g -O3 -Wall
PROG=BFS

$(PROG): bfs.o
		g++ bfs.o -o $(PROG)

Main.o: bfs.cpp bfs.h
		g++ $(CPPFLAGS) -c bfs.cpp

clean:
		rm *.o $(PROG)
