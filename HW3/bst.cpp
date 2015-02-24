/**
 *  * An implementation of a binary search tree 
 *  * Brandon Max - maxbrand
 *  * A49257553
 *  */
#include <iostream>
#include <fstream>
#include "bst.h"

using namespace std;
int main ( int argc, char *argv[] )
{
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
      BST *bst = new BST();
      while ( the_file >> x )
        bst->Add(x);
      cout << "PRE ORDER:";
      bst->printPreorder(bst->getRoot());
      cout << endl << "IN ORDER:"; 
      bst->printInorder(bst->getRoot());
      cout << endl << "POST ORDER:"; 
      bst->printPostorder(bst->getRoot());
    }

  }
  // the_file is closed implicitly here
}

