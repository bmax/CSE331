#include <iostream>
void insertion_sort(int a[],int alength)
{
  for (int i=1; i<alength;i++)
  {
    int key = a[i];
    int j = i-1;
    while (j>=0 && a[j] > key)
    {
      a[j+1] = a[j];
      j=j-1;
    }
    a[j+1] = key;
  }
  
}
