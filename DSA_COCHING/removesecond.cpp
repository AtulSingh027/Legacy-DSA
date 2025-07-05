#include <iostream>
using namespace std;


int main(){
      int arr[]={1,2,4,5,67,8,9,3,4,941,3};
      int len = sizeof(arr)/sizeof(arr[0]);

      
      for(int i=0;i<len;i=i+2){
            
            cout<<arr[i]<<" ";
                       
      }
      return 0;
}