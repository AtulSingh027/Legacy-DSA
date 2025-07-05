#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<string,int> Mlumap ;

    Mlumap.emplace("Tv",7475);
    Mlumap.emplace("Tv",7475);
    Mlumap.emplace("Smart TV",7475);
    Mlumap.emplace("Tv",7475);

    // Mlumap.erase("Tv");// It Can Remove All the Matching Key In The map Like all Tv's Are Deleted
    // Mlumap.erase(Mlumap.find("Tv"));// It Can Remove Only One Iterator Value
    
    for(auto p : Mlumap){
         cout<<p.first<<" "<<p.second<<endl;
    }



    return 0;
}