#include <iostream>
using namespace std;
int main()
{
      int nums[] = {1, 2, 3, 4, 4, 5,5,5,5, 5, 4, 6, 8, 9};
      int len = sizeof(nums) / sizeof(nums[0]);
      int target;
      cout << "enter the target: ";
      cin >> target;

      int low = 0, hi = len - 1;

      int indx = -1;

      while (low <= hi)
      {
            int mid = (low + hi) / 2;
            if (nums[mid] == target)
            {
                  if (nums[mid] >= 0 && nums[mid] == nums[mid - 1])
                  {
                        hi = mid - 1;
                  }
                  else
                  {
                        indx = mid;
                        break;
                  }
            }
            else if (nums[mid] > target)
            {
                  hi = mid - 1;
            }
            else
            {
                  low = mid + 1;
            }
      }
      if (indx != -1)
            cout << indx;

      return 0;
}