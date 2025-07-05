// Quick Sort
#include <iostream>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// to place pivot element to its correct position in array and then return its position
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // take last element as pivot
    int i = low - 1;

    // Run a for loop to place pivot element to its correct position in array
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // to arrange pivot at its position, swap between i+1th and high element and finally return i+1 as
    // the postion of pivot
    swap(arr[i + 1], arr[high]);
    // return position of pivot
    return i + 1;
}

// recursive quickSort function
void quickSort(int arr[], int low, int high)
{
    // base case
    if (low < high)
    {
        // call partition to find the position of pivot
        int pivot = partition(arr, low, high);
        // Recursively call quickSort based on pivot position for left sub part and right sub part
        quickSort(arr, low, pivot - 1);  // left sub part
        quickSort(arr, pivot + 1, high); // right sub part
    }
}

// main Code
int main()
{

    int arr[] = {4, 7, 0, 10, 5};
    // to find size of array
    int n = sizeof(arr) / sizeof(arr[0]);
    // print the array
    cout << "Array before sorting : \n";
    printArray(arr, n);
    // call quickSort
    quickSort(arr, 0, n - 1);
    // again print
    cout << "Array after sorting : \n";
    printArray(arr, n);
    return 0;
}