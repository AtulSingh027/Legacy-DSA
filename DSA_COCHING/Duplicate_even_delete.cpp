// #include <iostream>
// using namespace std;

// int main()
// {
//       int arr[] = {1,2,3,2,4,5,6,7,4,6,8,10,12,8,6};
//       int len = sizeof(arr) / sizeof(arr[0]);

//       for (int i = 0; i < len; i++)
//       {

//             if (arr[i] != -1)
//             {
//                   for (int j = i + 1; j < len; j++)
//                   {
//                         if (arr[i] == arr[j] && arr[i] % 2 == 0)
//                         {

//                                arr[j] = -1;
//                         }
//                   }
//             }
//       }
//       for (int i = 0; i < len; i++)
//       {
//             if (arr[i] != -1 )
//             {
//                   cout << arr[i] << " ";
//             }
//             // cout << endl;
//       }

//       return 0;
// }
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n ; i++)
    {
        int j = i ;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

int main(){
      int arr[]={1,2,3,4,6,6,50,58,6,8,2,5};
      int len = sizeof(arr)/sizeof(arr[0]);

      for (int i=0;i<len;i++){

            if(arr[i] != -1){


            for (int j=i+1;j<len;j++)
            {
                  if (arr[i] == arr[j])
                  {

                        arr[j]=-1;
                  }
            }
            
            }
      }
      cout<<endl;

      insertionSort(arr,len);

      for (int i=0;i<len;i++)
      {
      if (arr[i] != -1)
      {
       cout<<arr[i]<<" ";
      }
      }

      return 0;

}