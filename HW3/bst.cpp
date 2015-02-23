#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
int main ( int argc, char *argv[] )
{
  vector<int> input;
  if ( argc != 2 ) // argc should be 2 for correct execution
    cout<<"usage: "<< argv[0] <<" <filename>\n";
  else {
    // We assume argv[1] is a filename to open
    ifstream the_file ( argv[1] );
    if ( !the_file.is_open() )
      cout<<"Could not open file\n";
    else {
      int x;
      // the_file.get ( x ) returns false if the end of the file
      //  is reached or an error occurs
      while ( the_file >> x )
        input.push_back(x);
    }
    for (auto i : input) 
    {
      cout << i << endl;
    }
  }
  // the_file is closed implicitly here
}

