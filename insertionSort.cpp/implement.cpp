#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        while (j >= 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

int main()
{
    int arr[] = {1, 5, 34, 6, 88, 7};
    // To find number of elements present in array.
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before sorting....\n";
    printArray(arr, n);
    insertionSort(arr, n);
    cout << "\nAfter sorting....\n";
    printArray(arr, n);
    return 0;
}