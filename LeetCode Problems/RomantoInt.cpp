#include <iostream>
#include <unordered_map>
using namespace std;

int RomanToInt(string s){
    unordered_map <char,int> RomanMap = {
          {'I',1},{'V',5},{'X',10},{'L',50},
          {'C',100},{'D',500},{'M',1000},
    };
    int total = 0;
    int n = s.length();

    for(int i=0;i<n;i++)
    {
       if(i+1<n && RomanMap[s[i]] < RomanMap[s[i+1]])
       {
           total-=RomanMap[s[i]];
       }
       else{
            total+=RomanMap[s[i]];
       }
    }

    return total;
}

int main(){
    
    int Res = RomanToInt("IX");

    cout<<"Integer Convert Of Roman String:"<<Res<<endl;
    return 0;
}