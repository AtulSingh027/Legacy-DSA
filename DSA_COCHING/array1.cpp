#include <iostream>
using namespace std;

// it middle(int nums[],int len){
//      return nums[len/2];
// }
int main(){
      int nums[]={1,2,3,4,5};
      int len=sizeof(nums)/sizeof(nums[0]);
      int mid,start=0;
      int endd=len-1;
      // int middle_element = middle(nums,len);
            if (endd!=0){
            mid=(endd+1)/2;
            }
            
      
      

      cout<<"Middel Element is: "<<nums[mid]<< " at index: "<<mid;

      return 0;
}