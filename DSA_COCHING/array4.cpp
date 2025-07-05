#include <iostream>
using namespace std;
int main()
{
      int nums[]={1,2,3,4,5,6,7,8,9,10};
      int len=sizeof(nums)/sizeof(nums[0]);

      int max=nums[0],secmax=nums[0];
      int min=nums[0],secmin=nums[0];

      for (int i=0;i<len;i++){
            if (max<nums[i]){
                  
            }
      }

      cout << "The secmin element is :" << secmin << endl;
      cout << "The secmax element is :" << secmax << endl;

      return 0;
}