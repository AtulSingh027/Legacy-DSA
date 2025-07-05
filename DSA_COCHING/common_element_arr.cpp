#include <iostream>
using namespace std;

int main()
{
      int arr1[] = {1, 2, 3, 4, 5,6,7,9};
      int len1 = sizeof(arr1) / sizeof(arr1[0]);
      int arr2[] = {1, 5, 7,9,10,11,45,68};
      int len2 = sizeof(arr2) / sizeof(arr2[0]);

      cout<<"Common Elements :"<<endl;

      for (int i = 0; i < len1; i++)
      {
            for (int j = 0 ; j < len2; j++)
            {
                  if (arr1[i]==arr2[j]){
                        cout<<arr1[i]<<" ";
                  }
            }
      }
      return 0;
}