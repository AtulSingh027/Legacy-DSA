#include <iostream> 
using namespace std;
int main(){
      int nums[]={1,2,34,56,6,4,89,7,496,1,94,694};
      int len=sizeof(nums)/sizeof(nums[0]);
      int key;
      cout<<"Enter the element :";
      cin>>key;

      for (int i=0;i<len;i++){
            if (key==nums[i]){
                  cout<<nums[i]<<endl;
                  break;
            }
      }
      return 0;
}