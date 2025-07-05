#include <iostream>
using namespace std;
int middlerowcolum(int nums[][3], int size)
{
     int middleindex = size / 2;
     cout << "Middle Row:" << endl;

     for (int i = 0; i < size; i++)
     {
          cout << nums[middleindex][i] << " ";
     }
     
     cout << endl;
     for (int j = 0; j < size; j++)
     {
          cout << nums[j][middleindex] << " ";
     }
     cout << endl;
}
int main()
{
     int nums[3][3] = {{3, 5, 4},
                       {7, 6, 9},
                       {2, 1, 8}};
     middlerowcolum(nums, 3);
     return 0;
}