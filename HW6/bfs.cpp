/**
 * An implementation of a Breadth first Search
 * Brandon Max - maxbrand
 * A49257553
 */
#include <iostream>
#include <fstream>
#include <sstream>
#include "bfs.h"

using namespace std;
int main ( int argc, char *argv[] )
{
  if ( argc != 3 ) // argc should be 2 for correct execution
    cout<<"usage: "<< argv[0] <<" <filename> <startnode>\n";
  else {
    // We assume argv[1] is a filename to open
    ifstream the_file ( argv[1] );
    if ( !the_file.is_open() )
      cout<<"Could not open file\n";
    else {
      // initialize first line of file, and then rest of lines go into x
      string x;
      int size;
      the_file >> size;
      // create graph with according size
      Graph *g= new Graph (size);
      // loop through each line and put it into x
      while (getline(the_file, x) )
      {
        if (x != "")
        {
          string data;
          stringstream ss(x);
          getline(ss,data,':');
          // split by : then start getting numbers after each space
          int start = stoi(data);
          while (getline(ss,data,' '))
          {
            // add edges
            g->addEdge(start,stoi(data));
          }
        }
      }
      // Breatdh first search using argument as start node.
      g->BFS(stoi(argv[2]));
    }

  }
  // the_file is closed implicitly here
}

