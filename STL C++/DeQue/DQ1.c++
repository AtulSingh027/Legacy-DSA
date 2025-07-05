#include <iostream>
#include <deque>
using namespace std;

//* All The Operations That IS Used In List Is Work In Deque As Same

int main()
{
    // deque<int> d = {1,2,3,4,5,6};

    // for(int val : d)
    // {
    //     cout<< val <<" ";
    // }
    // cout<<endl;

    // cout<<"2nd Index Value : "<< d[2];


    // pair <int , int> p = {2,7};
    // pair <int , string> p = {2,"thakur"};
    pair<int , pair <char ,float>> p = {1 ,{'A',1.2}};
    
              //1                //A                     //1.2
    cout<< p.first << endl << p.second.first <<endl << p.second.second;
    
    return 0;

}