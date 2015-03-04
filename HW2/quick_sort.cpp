#include <iostream>
#include <algorithm>
using namespace std;
void quick_sort(int a[], int left, int right)
{
  int pivot = a[right];
  int i = left,j = right, temp;
  while (i <= j)
  {
    while (i <= right && a[i] < pivot)
      i++;
    while (j >= left && a[j] > pivot)
      j--;
    if (i <= j)
    {
      swap(a[i], a[j]);
      i++;
      j--;
    }
  }
  
  if (left < j)
    quick_sort(a, left, j);
  if (i < right)
    quick_sort(a, i, right);
}
