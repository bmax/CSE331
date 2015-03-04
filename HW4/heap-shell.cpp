//   test driver for heap, ignores index 0
#include <iostream>
#include <math.h>
#include <sys/time.h>
#include <stdlib.h>
#include "heap-code.cpp"

using namespace std;

// short integer random number generator from stdlib
int rand(void); 

int main()
{ 
  int size;
  cout << endl << "How many elements in the input array ";  cin >> size;
  int* dataArray = new int [size + 1];   // get array of right size (with invisible 0th element)
 
  // fill array -- fill 0th element but don't show it.
  for (int k=0; k< size+1 ; k++)  dataArray[k] = rand();
  cout<<"Input array:\n";
  for (int k=1; k<size+1; k++)
    cout<<dataArray[k]<<" ";
  cout<<endl;

  // ============= implement your code here or call it as a function======
  // you may assume that the variable size is the correct size of the array
  // (even though it's not) for heap-building purposes
  // build a heap for dataArray
  buildHeap(dataArray, size);
      
  //show heap (but not ignored 0th element)
  cout<<"Heap built from the input array:\n";
  for (int k=1; k<size+1; k++)
    cout<<dataArray[k]<<" ";
  cout<<endl;

}


