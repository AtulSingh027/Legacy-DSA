#include <iostream>
using namespace std;
int main()
{
      int nums[] = {45,50,24,61,23,84,93};
      int len = sizeof(nums) / sizeof(nums[0]);

      for (int i = 0; i < len; i++)
      {
            for (int j = i + 1; j < len; j++)
            {
                  if (nums[i] < nums[j])
                  {
                        nums[i] = nums[j];
                        break;
                  }
            }
      }
      cout<<"After algorithem"<<endl;
      for (int i=0;i<len-1;i++){
            cout<<nums[i]<<" ";
      }
      return 0;
}

// #include <iostream>
// using namespace std;

// int main(){
//     int nums[] = {45, 50, 24, 61, 23, 84, 95};
//     int len = sizeof(nums) / sizeof(nums[0]);
//     int next_greatest[len];

//     for (int i = 0; i < len; i++) {
//         int next = -1; 
//         for (int j = i + 1; j < len; j++) {
//             if (nums[i] < nums[j]) {
//                 next = nums[j];
//                 break;
//             }

//         }
//         next_greatest[i] = next;
//     }

//     cout << "After algorithm" << endl;
//     for (int i = 0; i < len-1; i++) {
//         cout << next_greatest[i] << " ";
//     }
//     return 0;
// } 
