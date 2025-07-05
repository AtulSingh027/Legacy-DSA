#include <iostream>
using namespace std;
int sumnum(int n)
{
      if (n <= 0)
      {
            return 0;
      }
      else
      {
            return n+sumnum(n-1);
      }
}

int main()
{
      int num;
      cout << "Enetr the num: ";
      cin >> num;

     int result = sumnum(num);

     cout<<"The sum of "<<num<<" natural number is : "<<result<<endl;
      return 0;
}
