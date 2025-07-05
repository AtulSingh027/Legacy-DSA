#include <iostream> 
using namespace std;
int main(){
      int nums[5]={1,2,3,4,5};
      int carr[5]={2,4,6,8,10};

      for (int i=0;i<5;i++){
            for (int j=0;j<5;j++){
                  if (nums[i]==carr[j]){
                        cout<<"The common element is :"<<nums[i]<<endl;
                  }
            }
      }
      return 0;
}