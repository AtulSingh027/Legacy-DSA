#include <iostream>
using namespace std;

int print_Table(int n,int multiply){
      if (multiply>10){ 
          return multiply; 
      }
      else{
            cout<<n<<" * "<<multiply<< " = "<< n*multiply<<endl;

            print_Table(n,multiply+1);
      }

}

int main(){
      int n;
      cout<<"Enter the num: ";
      cin>>n;

      print_Table(n,1);

}