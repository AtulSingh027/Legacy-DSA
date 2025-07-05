#include <iostream>
using namespace std;

// Function prototypes
void merge(int arr[], int l, int mid, int h);
void mergeSort(int arr[], int l, int h);

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void merge(int arr[], int l, int mid, int h)
{

    // STEP 1. To create left and right sub-arrays
    int sizeL = mid - l + 1;
    int sizeR = h - mid;
    int i, j, k;

    // Create two temp arrays left L and right R: non in place =O(n)
    int L[sizeL], R[sizeR];

    // Copy the data of given arr to two temp subarrays that is L[] and R[]
    for (int i = 0; i < sizeL; i++)
        L[i] = arr[l + i];

    for (int j = 0; j < sizeR; j++)
        R[j] = arr[mid + 1 + j];

    // set Initial index of first subarray that is L
    i = 0;

    // set Initial index of second subarray that is R
    j = 0;

    // set Initial index of merged subarray that is arr
    k = l;

    // Now we will Merge the temp arrays back into arr[l..h]
    while (i < sizeL && j < sizeR)
    {
        if (L[i] <= R[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];
        }
    }

    // Copy the remaining elements of
    // L[], if any
    while (i < sizeL)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of
    // R[], if any
    while (j < sizeR)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
} // end of merge

// mergeSort is a recursive algorithm
void mergeSort(int arr[], int l, int h)
{
    // base case
    if (l < h)
    {
        // STEP 1. find mid
        int mid = (l + h) / 2;
        // Sort left and right sub-arrays
        mergeSort(arr, l, mid);     // For left sub part
        mergeSort(arr, mid + 1, h); // For right sub part
        // call merge
        merge(arr, l, mid, h);
    }
}

// main function
int main()
{
    int arr[] = {4, 0, 1, 7, 5, 3, 9, 6, 11};
    int size = sizeof(arr) / sizeof(int);
    // Call the function
    cout << "Original array: \n";
    display(arr, size);
    mergeSort(arr, 0, size - 1);
    cout << "Sorted array: \n";
    display(arr, size);
    return 0;
}