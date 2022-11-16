#include <iostream>
using namespace std;

int Search(int arr[], int num, int len)
{
    int index = -1;
    for (int i = 0; i <= len; i++)
    {
        if (arr[i] == num)
        {
            index = i;
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
        cout << "Enter " << i+1 << "st element  ";
        cin >> array[i];
    }
    int num;
    cout << "Enter the Nummber you want to search ";
    cin >> num;
    int ans = Search(array, num, len);
    if (ans == -1)
    {

        cout << "Number is not in the array. ";
    }
    else
    {
        cout << "Your number is at " << ans << " index";
    }
}