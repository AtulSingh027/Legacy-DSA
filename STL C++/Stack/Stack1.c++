#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <int> s;
    stack <int> s2;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    

    s.swap(s2);// All The Data Of s Is RePlace In s2 And s Is Become Empty

    cout<<" S Size : "<<s.size()<<endl;
    cout<<" S2 Size : "<<s2.size()<<endl;

    while (!s.empty())
    {
        cout<< s.top()<<" ";
        s.pop();
    }
    cout<<endl;

 
    
}