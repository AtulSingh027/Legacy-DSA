#include <iostream>
using namespace std;
int top = -1;
int const MAX_SIZE = 100;
char stack[MAX_SIZE];
void push(char data)
{
    if (top == MAX_SIZE)
    {
        cout << "Stack is full...\n";
        return;
    }
    else
    {
        top++;
        stack[top] = data;
    }
}
char pop()
{
    if (top == -1)
    {
        cout << "Stack is Empty..\n";
        return -1;
    }
    else
    {
        char item = stack[top];
        top--;
        return item;
    }
}

int BalcedEx(string str){

for(int i=0;i<str.length();i++)
{
      push(str[i]);
      if(str.length()%2==0)
      {
            

      
      }
      else
            cout<<"UnValid Expression Try Again..\n";
            break;
      }
}

int main(){
      
      


}