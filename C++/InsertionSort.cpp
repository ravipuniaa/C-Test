#include <iostream>
using namespace std;

int main()
{
    int len;
    cout << "Enter the length of the array you want ";
    cin >> len;
    int arr[len];
    int k =1; 
    for (int i = 0; i < len; i++)
    {
        cout << "Enter " << i + 1 << "st element  ";
        cin >> arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[1]);
    cout << "Initial Array:-  ";
    for (int m = 0; m < size; m++)
    {
        cout << arr[m] << " | ";
    }
    cout << endl;
    
    int j;
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        j = i - 1;

        for (; j >= 0 && arr[j] > temp;)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        cout << "After Pass " << k++ << ") ";
        for (int j = 0; j < size; j++)
        {
            cout << arr[j] << ",";
        }
        cout << endl;
    }
    cout << "Sorted Array is ";
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << ",";
    }
    return 0;
}