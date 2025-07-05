#include <iostream>
#include <queue>
using namespace std;

//? Internally It is A Binary Tree And Used Max & Min Heap DS
//? But We`ll Visuelize It AS a Stack And (Largest Value = Highest priority & "Palce On Top")
//? Because The Largest Value IS Place On Top then Its Gives A 'Sorted Data' 

int main()
{
    priority_queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    while (!q.empty())
    {
       cout << q.top() <<" ";
       q.pop();
    }
    cout<<endl;
    return 0;
}