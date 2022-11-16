#include <iostream>
using namespace std;

int BinarySearch(int arr[], int low, int high, int num)
{
    int index = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == num)
        {
            index = mid;
            break;
        }
        else if (arr[mid] != num)
        {
            if (arr[mid] > num)
            {
                high = mid - 1;
            }
            else if (arr[mid] < num)
            {
                low = mid + 1;
            }
        }
    }
    return index;
}

int main()
{
    int len;
    cout << "Enter the length of the array you want ";
    cin >> len;
    int array[len];
    for (int i = 0; i < len; i++)
    {
        cout << "Enter " << i + 1 << "st element  ";
        cin >> array[i];
    }
    int lower = 0;
    int higher = len - 1;
    int num;
    cout << "Enter the Number you want to search ";
    cin >> num;
    int ans = BinarySearch(array, lower, higher, num);
    if (ans == -1)
    {
        cout << "Number is not in the Array.";
    }
    else
    {
        cout << " Number is at Index " << ans;
    }
}