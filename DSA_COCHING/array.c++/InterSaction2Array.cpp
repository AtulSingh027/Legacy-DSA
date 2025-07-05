#include <iostream>
using namespace std;

int Intersaction2array(int arr1[], int len1, int arr2[], int len2)
{

      int flag = 0;
      for (int i = 0; i < len1; i++)
      {
            if (arr1[i] != -1)
            {

                  for (int j = 0; j < len2; j++)
                  {
                        if (arr2[j] != -1)
                        {
                              if (arr1[i] == arr2[j])
                              {
                                    flag = 1;
                                    cout << arr1[i] << " ";
                                    arr1[i] = -1;
                                    arr2[j] = -1;
                              }
                        }
                  }
            }
      }
      if (flag != 1)
      {
            cout << "No Intersaction In each Array.\n"
                 << endl;
      }
}

int main()
{
      int arr1[] = {1,2,2,1};
      int len1 = sizeof(arr1) / sizeof(arr1[0]);
      int arr2[] = {2, 2};
      int len2 = sizeof(arr2) / sizeof(arr2[0]);

      Intersaction2array(arr1, len1, arr2, len2);

      return 0;
}