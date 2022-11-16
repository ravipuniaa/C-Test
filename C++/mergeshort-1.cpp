#include <iostream>
using namespace std;

void merge(int arr[], int p, int q, int r)
{

  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  while (i < n1 && j < n2)
  {
    if (L[i] <= M[j])
    {
      arr[k] = L[i];
      i++;
    }
    else
    {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  while (i < n1)
  {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2)
  {
    arr[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r, int size)
{
  
  if (l < r)
  {
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m,size);
    mergeSort(arr, m + 1, r,size);

    merge(arr, l, m, r);
    cout << "After Pass " ;
    for (int x = 0; x < size; x++)
    {
      cout << arr[x] << ",";
    }
    cout << endl;
  }
}

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main()
{
  int len;
  cout << "Enter the length of the array you want ";
  cin >> len;
  int arr[len];
  for (int i = 0; i < len; i++)
  {
    cout << "Enter " << i + 1 << "st element  ";
    cin >> arr[i];
  }
  int size = sizeof(arr) / sizeof(arr[1]);

  mergeSort(arr, 0, size - 1,size);

  cout << "Sorted array: \n";
  printArray(arr, size);
  return 0;
}
