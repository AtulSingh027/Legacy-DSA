#include <iostream>
using namespace std;

int fact(int n){
      if (n==1){
            return 1;
      }
      else{
            return n*fact(n-1);
      }
}

int main(){
      int n;
      cout<<"Enter the num: ";
      cin>>n;

      cout<<"The fctorial of "<<n<<" is "<<fact(n);


      return 0;
}