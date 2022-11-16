#include <iostream>
using namespace std;

int main()
{
    int len;
    cout << "Enter the length of the array you want ";
    cin >> len;
    int arr[len];
    int passes = 1;
    for (int i = 0; i < len; i++)
    {
        cout << "Enter " << i + 1 << "st element  ";
        cin >> arr[i];
    }
    int size = (sizeof(arr) / sizeof(arr[0]));
    for (int i = 0; i < size; i++)
    {
        int MinIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[MinIndex])
            {
                MinIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[MinIndex];
        arr[MinIndex] = temp;
        cout << "After Pass " << passes++ << " ";
        for (int x = 0; x < size; x++)
        {
            cout << arr[x] << ",";
        }
        cout << endl;
    }
}