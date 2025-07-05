// #include <iostream>
// using namespace std;
// int main()
// {
//       int num;
//       cout<<"Enter the Number: ";
//       cin>>num;

//       int rem=0 , result=0,mul=1,count = 0, cnt , qnum;
//       qnum = num;

//       while(qnum != 0)
//       {
//             count++;
//             qnum /= 10;

//       }
      

//       while (qnum!=0)
//       {
//             rem = qnum % 10;

//             while (cnt != 0)
//             {
//                   mul = mul * rem;
//                   cnt--;
//             }

//             result = result + mul;
//             cnt = count;
//             mul = 1;
//             qnum/=10;
//       }

//       num = qnum;
//       cnt = count;

//       if(result == num)
//       {
//             cout<<"The Number Is Armstrong";
//       }
//       else{
//             cout<<"The Number Is not Armstrong";
//       }
//       return 0;
// }


#include <iostream>
using namespace std;

int main()
{
      int num;
      cout<<"Enter the Number : ";
      cin>>num;

      int count = 0 , cnt ,qnum, mul = 1,rem  = 0,result=0;
      qnum = num;


      while(qnum != 0)
      {
            qnum /= 10;
            count++;
      } 

      cnt = count;
      qnum = num;


      while(qnum != 0)
      {
            rem = qnum%10;
            while(cnt != 0)
            {
                  mul = rem * mul;
                  cnt--;
            }

            result = result + mul;
            cnt = count ;
            mul = 1;
            qnum /= 10; 
            
      }

      if (result == num){
            cout<<"The num is Armstrong";
      }
      else{
            cout<<"Not Armstrong ";
      }
      return 0;
}