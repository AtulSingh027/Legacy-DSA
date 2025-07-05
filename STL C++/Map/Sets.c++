#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

//! All Map Function Is Work in it internally(Self Balancing Tree)
int main()
{
    // set<int> s;//Duplaicay Not Allowed
    // multiset<int> s;// Duplaicay Allowed in sorted from
    unordered_set<int> s;//Not Dup. Allowed And Not Sorted 

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    s.insert(1);
    s.insert(2);
    s.insert(3);

    for( int val: s){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}