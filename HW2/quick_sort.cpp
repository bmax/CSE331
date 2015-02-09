#include <iostream>
using namespace std;
void quick_sort(int a[], int left, int right)
{
  int pivot = a[(left+right)/2];
  int i = left,j = right, temp;
  while (i <= j)
  {
    while (a[i] < pivot)
      i++;
    while (a[j] > pivot)
      j--;
    if (i <= j)
    {
     temp = a[i];
      a[i] = a[j];
      a[j] = temp;
      i++;
      j--;
    }
  }
  
  if (left < j)
    quick_sort(a, left, j);
  if (i < right)
    quick_sort(a,i,right);
}
