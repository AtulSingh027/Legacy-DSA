#include <iostream>
using namespace std;

int main()
{
      int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
      int len = sizeof(nums) / sizeof(nums[0]);

      int max, min;
      max = min = nums[0];

      for (int i = 0; i < len; i++)
      {
            if (nums[i]>max)
            {
                  max = nums[i];
            }
            if (min > nums[i])
            {
                  min = nums[i];
            }
      }

      cout << "The maximum Elemnt is: " << max << endl
           << "the minimum element is :" << min << endl;
      return 0;
}