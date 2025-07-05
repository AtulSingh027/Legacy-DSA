#include <iostream>
using namespace std;
int main()
{
      int nums[] = {-1, -2, 9, 6, 7, -6};
      int len = sizeof(nums) / sizeof(nums[0]);
      int index = 0;

      for (int i = 0; i < len; i++)
      {
           if (nums[i] >= 0)
            {
                  nums[index++] = nums[i];
            }
      }
      len=index;
      for (int i = 0; i < index; i++)
      {
            cout << nums[i] << " ";
      }

      return 0;
}
// ===================================
// #include <iostream>
// using namespace std;
// void printarray(int nums[], int len)
// {
// for (int i = 0; i < len; i++)
// {
// cout << nums[i] << " ";
// }
// }
// void remove_negative(int nums[], int len)
// {
// int count=0;
// for (int i = 0; i < len; i++)
// {
// if (nums[i] < 0)
// {
// count++;
// for (int j = i; j < len; j++)
// {
// nums[j] = nums[j + 1];
// }
// }
// }
// printarray(nums, len - count);
// }
// int main()
// {
// int nums[] = {-1, -8, -2, 3, 5, 6, 8, 5, 9};
// int len = sizeof(nums) / sizeof(nums[0]);
// 
// cout << "After removed negative Elements " << endl;
// remove_negative(nums, len);
// 
// return 0;
// }