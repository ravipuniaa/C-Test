#include <iostream>
#include <conio.h>
using namespace std;

int linear_Search(int a[], int size, int key)
{

    for (int i = 0; i < size; i++)
        if (a[i] == key)
            return i;
    return -1;
}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}

int binary_Search(int a[], int length_of_array, int target)
{
    int l = 0;                   // left most index
    int r = length_of_array - 1; // right most index

    cout << "right most index " << r << endl;

    while (l <= r)
    {

        int mid = (l + r) / 2;
        if (target == a[mid])
        {
            return mid; // key is present at mid index
        }

        if (target > a[mid])
        {                // key present at right side of mid index
            l = mid + 1; // discarding left side
        }

        else
        {
            r = mid - 1; // discarding right side
        }
    }

    return -1;
}

int main()
{
    int choice;
    int a[100], size;

    cout << "Enter the size of an array :" << endl;
    cin >> size;

    cout << "Enter the elements of the array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    do
    {
        cout << "MENU" << endl;
        cout << "1: Linear Search" << endl;
        cout << "2: Binary Search" << endl;
        cout << "3: Exit " << endl;

        cout << "Enter your choice :";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n \n " << endl;
            cout << "***********Linear Search***********" << endl;

            cout << "\nArray : " << endl;
            printArray(a, size);
            cout << endl;

            int key;
            cout << "Enter target element : " << endl;
            cin >> key;

            int i;
            i = linear_Search(a, size, key);
            cout << "Target element  " << key << " is found at index : " << i;

            cout << "\n \n " << endl;

            break;
        case 2:
            cout << "\n \n " << endl;
            cout << "***********Binary Search***********" << endl;

            cout << "\nArray : " << endl;
            printArray(a, size);
            cout << endl;

            int target;
            cout << "Enter target element : " << endl;
            cin >> target;

            int index;
            index = binary_Search(a, size, target);
            cout << "Target element  " << target << " is found at index : " << index;

            cout << "\n \n " << endl;
            break;

        case 3:
            break;
        default:
            cout << "Invalid input" << endl;
        }
    } while (choice != 3);

    getch();

    return 0;
}