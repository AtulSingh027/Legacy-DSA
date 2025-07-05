#include <iostream>
using namespace std;
int main()
{
      int nums[] = {1, 2, 35, 46, 49, 16, 18, 4, 4, 51, 61, 6};
      int len = sizeof(nums) / sizeof(nums[0]);
      int targert, found = 0;
      cout << "Enter the elment:";
      cin >> targert;
      for (int i = 0; i < len; i++)
      {
            for (int j = i + 1; j < len; j++)
            {
                  if (targert == nums[i] + nums[j])
                  {
                        found = 1;
                        cout<<"the pair of "<<targert<< " is "<<nums[i]<<" and "<<nums[j]<<endl;
                        break;
                  }
            }
      }
      if (!found)
      {
            cout << "no pair found";
      }
      
    return 0;
}