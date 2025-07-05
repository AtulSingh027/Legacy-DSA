#include <iostream>
#include <vector>
using namespace std;

int mstrepeate(int nums[], int len, int maxcount, int currentcount)
{
       

      for (int i = 0; i < len; i++)
      {
            if (nums[i] == 1)
            {
                  maxcount++;
                  cout << nums[i] << " ";
                  cout << endl;
                  if (currentcount > maxcount)
                  {
                        currentcount = maxcount;
                  }
            }
            else
            {
                  currentcount = 0;
            }
      }
      return maxcount;
}

int main()
{
      int nums[] = {0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0};
      int len = sizeof(nums) / sizeof(nums[0]);
      int maxcount = 0, currentcount = 0;

      int count = mstrepeate(nums, len, maxcount, currentcount);
      cout << "the maximum repeated element : " << count;

      return 0;
}