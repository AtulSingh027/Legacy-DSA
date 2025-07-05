#include <iostream>
using namespace std;
int main(){
      int nums[2][2]={{1,2},{4,5,}};
      int min,max;
      min=max=nums[0][0];
      for (int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                  if (min>nums[i][j]){
                    min=nums[i][j];
                  }
                  if (max<nums[i][j]){
                        max=nums[i][j];
                  }
            }
      }
      cout<<"the minimum element is :"<<min<<endl;
      cout<<"the maximum element is :"<<max<<endl;
      return 0;
}