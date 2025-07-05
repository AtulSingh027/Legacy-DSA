#include <iostream>
#include <string>
#include <vector>
using namespace std;

string IntToRoman(int num)
{
    vector<pair<int,string>> RomanMap = 
    {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"},
    };

    string Res = "";

    for(auto &pair : RomanMap)
    {
        while(num >= pair.first)
        {
            Res+=pair.second;
            num-=pair.first;
        }
    }
    return Res;
}

int main(){

    string Result = IntToRoman(48);

    cout<<"Roman Form is : "<<Result<<endl;

    return 0;
}