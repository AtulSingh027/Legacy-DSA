#include <iostream>
using namespace std;
int mising_element(int a[], int n)
{
      int N = n + 1;
      int toatl = (N) * (N + 1) / 2;
      for (int i = 0; i < n; i++)
      {
            toatl -= a[i];
      }
      return toatl;
}
int main()
{
      int nums[] = {1, 5, 3, 4, 6, 8, 7};
      int N = sizeof(nums) / sizeof(nums[0]);

      int miss = mising_element(nums, N);

      cout << "The misssing element in the array is :" << miss << endl;

      return 0;
}
