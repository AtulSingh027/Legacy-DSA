#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2,7,11,15};
    int target = 9;
    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<len ; i++)
    {
        if(arr[i]+arr[i+1] == target)
        {
            cout<<"The Sum of" <<target<<"That Present In Array :" <<arr[i] <<" and "<< arr[i+1]<<endl;
        }
        else{
            continue;
        }
    }

    return 0;
}