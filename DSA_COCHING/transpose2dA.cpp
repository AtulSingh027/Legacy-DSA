#include <iostream>
using namespace std;
void transpose(int nums[][2],int row,int col,bool istranspose ){
      for (int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                  if (istranspose==true){
                        cout<<nums[j][i]<<" ";
                  }
                  else{
                        cout<<nums[i][j]<<" ";
                  }
            }
            cout<<endl;
      }
      cout<<endl;


}

int main()
{
      int nums[2][2];

      for (int i = 0; i < 2; i++)
      {
            for (int j = 0; j < 2; j++)
            {
                  cout << "enter the the element[" << i << "," << j << "] position: ";
                  cin >> nums[i][j];
            }
      }
       
      cout<<"printing in normal matrix:"<<endl;
      transpose(nums,2,2,false);
      cout<<"Transpose Matrix:"<<endl;
      transpose(nums,2,2,true);

      return 0;
}