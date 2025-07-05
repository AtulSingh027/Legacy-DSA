#include <iostream>
using namespace std;
int main()
{
      int nums[] ={1,2,3,4,5,6,7,8,9,10,11};
      int len= sizeof(nums)/sizeof(nums[0]);

      for (int i=len-1;i>=0;i--){
            cout<<nums[i]<<" ";
      }
      return 0;
}
