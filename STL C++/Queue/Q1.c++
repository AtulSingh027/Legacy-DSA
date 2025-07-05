#include <iostream>
#include <queue>
using namespace std;

//! all the Methods that Is Used In Stacks That Is Also Aplly In This AS Same 

int main(){
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
     
    q.pop(); 
    cout<<"Front Element : "<<q.front()<<endl;

    while (!q.empty())
    {
       cout << q.front() <<" ";
       q.pop();
    }
    cout<<endl;
    
    return 0;
}