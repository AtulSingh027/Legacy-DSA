#include <iostream>
using namespace std;

double PowerBinary(double x,int n)
{
    long power = n;

    if(power < 0)
    {
        x = 1/x;
        power = -power;
    }

    double Result = 1;

    while(power>0)
    {
        if(power % 2 == 1)
        {
            Result = Result * x;
        }

        x = x*x;
        power /= 2;
    }

    return Result;
}

int main()
{
   double x;
   int n;

   cout<<"Enter the Number(Base) : ";
   cin>>x;

   cout<<"Enter the Power(Exponent) : ";
   cin>>n;

  int ans = PowerBinary(x,n);

  cout<<"Result : "<<ans;


   return 0;

}