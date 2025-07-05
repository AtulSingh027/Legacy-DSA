#include <iostream>
#include<cmath>
using namespace std;
int main()
{
      int num;
      cout<<"Enter the num : ";
      cin>>num;

      int flag = 0;


      for (int i=2; i<=sqrt(num); i++ )
      {
                 if (num % i == 0 )
                 {
                    flag = 1;
                    break;
                 }

      }

      if (flag == 1){
            cout<<"The Number is composite ";
      }
      else{
            cout<<"The Number is prime ";
 
      }
      return 0;
}