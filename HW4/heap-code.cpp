#include <iostream>
#include <algorithm>
using namespace std;
void heapify(int a[], int i, int heap_size)
{
  int left = 2*i;
  int right = 2*i + 1;
  int smallest = 0;
  // determine smallest of l,h,r
  if (left <= heap_size && a[left] < a[i])
  {
    smallest = left;
  }
  else
  {
    smallest = i;
  }
  if (right <= heap_size && a[right] < a[smallest])
  {
    smallest = right;
  }
  if (smallest != i)
  {
    swap(a[i], a[smallest]);
    heapify(a,smallest, heap_size);
  }
}
void buildHeap(int a[], int size)
{
  for (int n= size/2; n>=0; n--) {
    heapify(a, n, size);
  }
}
