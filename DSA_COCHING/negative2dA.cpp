#include <iostream> 
using namespace std;
int main(){
      int nums[3][3]={{1,2,-5},{-8,5,6},{-5,-6,3}};
      
      for (int i=0;i<3;i++){
            cout<<"Row "<<i+1<<":";
            for (int j=0;j<3;j++){
                  if (nums[i][j]<0){
                        cout<<nums[i][j]<<" ";
                  }
                  
            }
            cout<<endl;
      }
      return 0;
}