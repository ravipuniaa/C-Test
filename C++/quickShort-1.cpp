#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

void printArray(int array[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

int partition(int array[], int low, int high)
{
  
  int pivot = array[high];

  int i = (low - 1);

  for (int j = low; j < high; j++)
  {
    if (array[j] <= pivot)
    {

      i++;

      swap(&array[i], &array[j]);
    }
  }

  swap(&array[i + 1], &array[high]);

  return (i + 1);
}

void quickSort(int array[], int low, int high, int size)
{
  if (low < high)
  {

    int pi = partition(array, low, high);
    
    for (int x = 0; x < size; x++)
    {
      cout << array[x] << ",";
    }
    cout << endl;
    quickSort(array, low, pi - 1, size);

    quickSort(array, pi + 1, high, size);
  }
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

  cout << "Unsorted Array: \n";
  printArray(arr, size);
  cout << "Steps: " << endl;
  quickSort(arr, 0, size - 1, size);

  cout << "Sorted array in ascending order: \n";
  printArray(arr, size);
}