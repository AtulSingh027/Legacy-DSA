#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<string,int> m;

    m["xsus"] = 5;
    m["Dell"] = 4;
    m["Hp"] = 5;
    m["Hp 15s"] = 7;

    m.insert({"Camera" , 10});//To insert Data In Pair
    // m.emplace("Light" , 3);// This Is Also Insert Data Without Object

    // m.erase("Hp 15s");// It Can Delete Hp15s 

    for(auto p : m){
        cout<<p.first<<"->"<<p.second<<endl;
    }
     
    //  m.count("Dell") // Its Give The Key All Time Repeated Value
    // cout<<"Dell Value: "<<m["Dell"];//Its print The Data OF Dell Key.


    if(m.find("Light")  != m.end())
    {
        cout<<"Found"<<endl;
    }
    else{
         cout<<"Not Found"<<endl;
    }

    return 0;

}