#include <iostream>
using namespace std;
int main(){
    int arr[]={2,1,54,1,51,584,5,05,4,};
    int len =sizeof(arr)/sizeof(arr[0]);

    for (int i=0;i<len;i++)
    {
        for(int j=i;j<len;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
            }
        }

    } 
    cout<<endl;

    return 0;
}