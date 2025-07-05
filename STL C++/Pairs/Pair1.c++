#include <iostream>
#include <vector>
using namespace std;


int main()
{
    // pair <int , int> p = {2,7};
    // pair <int , string> p = {2,"thakur"};
    // pair<int , pair <char ,float>> p = {1 ,{'A',1.2}};
    
    //           //1                //A                     //1.2
    // cout<< p.first << endl << p.second.first <<endl << p.second.second;

    //We Can Define pair In Vector Or other DS ->
    vector<pair<int , int >> vec = {{1,2},{3,4} , {5,6}};

    // vec.push_back({4,5}); //We Can Push A pair values In Vecotre if alredy a pair is create
    vec.emplace_back(4,5); //In-palce object Create

    for(auto p : vec)
    {
        cout<<p.first<<" "<<p.second<<endl;

    }
 
    return 0;

}