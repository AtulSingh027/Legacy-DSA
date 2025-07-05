#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    
    l.emplace_back(1);
    l.push_back(2);// Insert In The Lastest Index
    l.emplace_front(3);
    l.push_front(5);//Insert In Front Index

    l.pop_back();//Its Delete The Last Elemnt of List
    l.pop_front();//Its Delete The First Elemnt of List

    for(int val : l)
    {
        cout<< val <<" ";
    }
    cout<<endl;



    return 0;
}