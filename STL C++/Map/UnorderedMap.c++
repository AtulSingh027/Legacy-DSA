#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> um;

    um.emplace("Digital Tv",7475);
    um.emplace("Tv",7475);
    um.emplace("Smart TV",7475);
    um.emplace("Old Tv",7475);

    for(auto p : um){
         cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}