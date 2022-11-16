#include <iostream>
using namespace std;

int main()
{
    int len;
    cout << "Enter the length of the array you want ";
    cin >> len;
    int arr[len];
    int k = 1;
    for (int i = 0; i < len; i++)
    {
        cout << "Enter " << i + 1 << "st element  ";
        cin >> arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[1]);
    for (int j = 0; j < size; j++)
    {
        bool flag = false;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                flag = true;
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                cout << "After Pass " << k++ << " ";
                for (int j = 0; j < size; j++)
                {
                    cout << arr[j] << ",";
                }
                cout << endl;
            }
        }
        if (flag = false)
        {
            break;
        }
    }

    // cout << "Sorted Array is ";
    // for (int j = 0; j < size; j++)
    // {
    //     cout << arr[j] << ",";
    // }
    return 0;
}