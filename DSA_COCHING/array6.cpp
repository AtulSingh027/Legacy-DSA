#include <iostream>
using namespace std;
int main()
{
      int nums[5] = {1, 2, 3, 4, 5};
      int oldkey = 3, newkey = 7;
      
      //
      // for (int i=0;i<5;i++){
      // if (oldkey==nums[i]){
      //     nums[oldkey] = newkey;
      //     break;
      // }
      // }
      // cout<<"After update:"<<endl;
      // for (int j=0;j<5;j++){
      // cout<<nums[j]<<" ";
      // }
      //

      for (int &element : nums)
      {
            if (oldkey == element)
            {
                  element = newkey;
            }
      }

      cout << "After update:" << endl;
      for (int j = 0; j < 5; j++)
      {
            cout << nums[j] << " ";
      }

      return 0;
}