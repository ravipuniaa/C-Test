#include <iostream>
#include <conio.h>
using namespace std;

void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}

void bubbleSort(int a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        cout << "Iteration number " << i << " : ";
        printArray(a, size);
        cout << endl;

        bool isSwapped = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                isSwapped = true;
                swap(a, j, j + 1);
            }
        }
        if (!isSwapped)
            break;
    }
}

void insertion_Sort(int a[], int size)
{
    for (int i = 1; i < size; i++)
    {

        cout << "Iteration number " << i << " : ";
        printArray(a, size);
        cout << endl;

        int temp = a[i];
        int j = i - 1;
        for (; j >= 0 && temp < a[j]; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = temp;
    }
}

void selection_Sort(int a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {

        // Printing each iteration or pass
        cout << "Iteration number " << i << " : ";
        printArray(a, size);
        cout << endl;

        int min = i; // In starting first element in sorted or minimum

        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        swap(a, min, i);
    }
}

int partition(int a[], int l, int h, int size)
{
    int i = l;
    int j = h;
    int pivot = a[l];
    while (i < j)
    {
        // Printing each iteration or pass
        cout << "Iteration number "
             << " : ";
        printArray(a, size);
        cout << endl;

        while (i < j && a[i] <= pivot)
            i++;
        while (a[j] > pivot)
            j--;
        if (i < j)
        {
            swap(a, i, j);
        }
    }
    swap(a, l, j);
    return j;
}

void quickSort(int a[], int l, int h, int size)
{
    if (l < h)
    {
        int pivot = partition(a, l, h, size);
        quickSort(a, l, pivot - 1, size);
        quickSort(a, pivot + 1, h, size);
    }
}

// void merge(int a[], int l, int mid, int h)
// {
//     int b[] = new int[h - l + 1];
//     int length_of_array = sizeof(b) / sizeof(b[0]);
//     int i = l;       // i is for the left subarray
//     int j = mid + 1; // j is the starting of right subarray
//     int k = 0;       // k is for b[]

//     while (i <= mid && j <= h)
//     {
//         if (a[i] <= a[j])
//         {
//             b[k++] = a[i++];
//         }
//         else
//         {
//             b[k++] = a[j++];
//         }
//     }

//     while (i <= mid)
//     {
//         b[k++] = a[i++];
//     }

//     while (j <= h)
//     {
//         b[k++] = a[j++];
//     }

//     for (int x = 0, y = l; i < length_of_array; i++, j++)
//     {
//         a[y] = b[x];
//     }
// }

// void merge_Sort(int a[], int l, int h)
// {
//     if (l < h)
//     {
//         int mid = (l + h) / 2;
//         merge_Sort(a, l, mid);
//         merge_Sort(a, mid + 1, h);
//         merge(a, l, mid, h);
//     }
// }

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
        cout << "1: Bubble Sort. " << endl;
        cout << "2: Insertion Sort." << endl;
        cout << "3: Selection Sort. " << endl;
        cout << "4: Merge Sort. " << endl;
        cout << "5: Quick Sort. " << endl;
        cout << "6: Exit " << endl;

        cout << "Enter your choice :";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n \n " << endl;

            cout << "Sorting Array using Bubble sort Algorithim" << endl;

            bubbleSort(a, size);

            cout << "sorted Array : ";
            printArray(a, size);

            cout << "\n \n " << endl;

            break;
        case 2:
            cout << "\n \n " << endl;

            cout << "Sorting Array using Insertion sort Algorithim" << endl;

            insertion_Sort(a, size);

            cout << "sorted Array : ";
            printArray(a, size);

            cout << "\n \n " << endl;
            break;

        case 3:
            cout << "\n \n " << endl;

            cout << "Sorting Array using Selection sort Algorithim" << endl;

            selection_Sort(a, size);

            cout << "sorted Array : ";
            printArray(a, size);

            cout << "\n \n " << endl;

            break;

            // case 4:
            //     cout << "\n \n " << endl;

            //     cout << "Sorting Array using Merge sort Algorithim" << endl;

            //     merge_Sort(a, 0, size - 1);

            //     cout << "sorted Array : ";
            //     printArray(a, size);

            //     cout << "\n \n " << endl;
            //     break;

        case 5:
            cout << "\n \n " << endl;

            cout << "Sorting Array using Quick sort Algorithim" << endl;

            quickSort(a, 0, size - 1, size);

            cout << "sorted Array : ";
            printArray(a, size);

            cout << "\n \n " << endl;
            break;
        case 6:
            break;
        default:
            cout << "Invalid input" << endl;
        }
    } while (choice != 5);

    getch();
    return 0;
}
