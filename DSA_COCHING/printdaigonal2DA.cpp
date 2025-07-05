#include <iostream>
using namespace std;
int main()
{
      int nums[3][3];
      for (int i = 0; i < 3; i++)
      {
            for (int j = 0; j < 3; j++)
            {
                  cout << "enter the the element[" << i << "," << j << "]:";
                  cin >> nums[i][j];
            }
      }
            for (int i = 0; i < 3; i++)
            {
                  for (int j = 0; j < 3; j++)
                  {
                        cout<<nums[i][j]<<" ";
                  }
                  cout<<endl;
            }
            cout<<"==============="<<endl;

            for (int i = 0; i < 3; i++)
            {
                  for (int j = 0; j < 3; j++)
                  {
                        if (i == j)
                        {
                              cout << nums[i][j] << " ";
                        }
                        else
                        {
                              cout <<" "<<" ";
                        }
                  }
                  cout << endl;
            }
            return 0;
      
}