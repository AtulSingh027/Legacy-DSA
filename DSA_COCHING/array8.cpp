// #include <iostream>
// using namespace std;
// int main()
// {
//       int nums[] = {9, 6, 5, 2, 3, 4, 8, 1};
//       int len = sizeof(nums) / sizeof(nums[0]);

//       for (int i = 0; i < len; i++)
//       {
//             for (int j = 0; j < len; j++)
//             {
//                   if (nums[i] < nums[j])
//                   {
//                         int temp;
//                         temp = nums[i];
//                         nums[i] = nums[j];
//                         nums[j] = temp;
//                   }
//             }
//       }
//       cout<<"After shorting:";
//       for (int k=0; k<len;k++){
//             cout<<nums[k]<<" ";
//       }
      
      
      
//       return 0;
// }



#include <iostream>
using namespace std;

void bubbleShort(int arr[],int len)
{
     for(int i=0;i<len-1;i++)
     {
         for(int j=i;j<len-1;j++)
         {
            if(arr[j] > arr[j+1])
            {
                  int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
         }
     }
}
int main(){
      int arr1[]={1,51,51,5,4,1,6,1,51,51,11};
      int arr2[]={5,6,0,48,10,1,4,03,5,51,520};


      int len1 = sizeof(arr1)/sizeof(arr1[0]);
      int len2 = sizeof(arr2)/sizeof(arr2[0]);

      int mergArr[len1+len2];

      int i = 0,k=0,j=0;
      while(i < len1 )
      {
            mergArr[k++]=arr1[i++];
      }
      while(j < len2 )
      {
            mergArr[k++]=arr2[j++];
      }
 
      bubbleShort(mergArr,len1+len2);

      for(int i=0;i<len1+len2;i++)
      {
            cout<<mergArr[i]<<" ";
      }



      return 0;
}