#include <iostream>
using namespace std;

void bubbleSort(int arr[], int len)
{
    for (int i = 0; i < len - 1; ++i)
    {
        for (int j = i; j < len - 1 ; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void mergedarray(int arr1[], int arr2[], int len1, int len2, int merge[])
{
  

      
      int i = 0, j = 0, k = 0;
      while (i < len1 && j < len2)
      {
            if (arr1[i] < arr2[j])
            {
                  merge[k++] = arr1[i++];
            }
            else
            {
                  merge[k++] = arr2[j++];
            }
      }
      while (i < len1)
      {     
           merge[k++]=arr1[i++];
      }
      while (j < len2)
      {
            merge[k++] = arr2[j++];
      }
}
int main()
{
      int arr1[] = {45, 50, 24, 61, 23, 84, 95};
      int len1 = sizeof(arr1) / sizeof(arr1[0]);
      int arr2[] = {1, 2, 3, 4, 5, 6, 7};
      int len2 = sizeof(arr2) / sizeof(arr2[0]);
      int merge[len1 + len2];
      bubbleSort(arr1,len1);

      mergedarray(arr1, arr2, len1, len2, merge);

      for (int i = 0; i < len1 + len2; i++)
      {
            cout << merge[i] << "  ";
      }

      return 0;
}