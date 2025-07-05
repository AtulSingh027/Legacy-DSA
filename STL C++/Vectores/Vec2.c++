#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector <int> vec(3,10);// It Repeat 10 Three Of Times
    // vector <int> vec2(vec);//We Can Intilize Vec In Vec2 Then Vec2 Is Acces Vec
    vector <int> vec  = {1,2,3,4,5,6,7,8,9};

    for(int val : vec)
    {
        cout<< val <<" ";
    }
    cout<<endl;

    // cout<<"Lets Print Data With The Help Of Iteratores  : ";
    
    // vector <int>::iterator i;  //* It Can Able To Access the Direct Memory Locations Of elemnt 
    // for(i  = vec.begin(); i != vec.end() ; i++)
    // {
    //     cout<< *(i) <<" ";
    // }
    // cout<<endl;


    // cout<<"Lets Print Data With The Help Of Iteratores in BackWord : ";
    // vector <int>::iterator i;  // It Can Able To Access the Direct Memory Locations Of elemnt 
    // for(auto i  = vec.rbegin(); i != vec.rend() ; i++)
    // {
    //     cout<< *(i) <<" ";
    // }
    // cout<<endl;

    

    return 0;
}