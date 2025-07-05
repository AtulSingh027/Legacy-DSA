// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main()
// {
//     // // int arr[5] = {1,2,45,4,5};
//     // // sort(arr,arr+5);

//     vector<int> vec = {1,2,45,4,5};
   
//     //  reverse(vec.begin(),vec.end());//It Can Reverse the Data
//     cout<<binary_search(vec.begin(),vec.end(),4876)<<endl;
    

//     cout<<"Max Value : "<<max;

//     for(auto val : vec)
//     {
//         cout<<val<<" ";
//     }
//     cout<<endl;

//     // vector<pair<int,int>> vec = {{2,1},{45,4},{8,6},{87,9}};

//     // sort(vec.begin(),vec.end());

//     // for(auto p : vec)
//     // {
//     //     cout<<p.first<<" - "<<p.second<<endl;
//     // }


     
// }






#include <iostream>
using namespace std;

int Frequency(string str[]){
      int count = 0;
        int i = 0;
      while(str!=NULL)
      {
            if(str[i]=='m'){
                count++;
            }
            i++;
      }

      return count;
}

int main(){
    string str = "Programming";
    cout<<Frequency(str);
    return 0;
}