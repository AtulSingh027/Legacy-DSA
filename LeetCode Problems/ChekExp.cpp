#include <iostream>
using namespace std;
int top = -1;
const int maxsize = 100;
int stack[maxsize];

void push(int data)
{
      if (top == maxsize - 1)
      {
            cout << "Stack is full\n";
            return;
      }
      top++;
      stack[top] = data;
}

int pop()
{
      if (top == -1)
      {
            cout << "Stack is empty\n";
            return -1;
      }
      int item = stack[top];
      top--;
      return item;
}

int minimum(){
    int min = INT32_MAX;

    if(min > stack[top])
    {
        min = stack[top];
        
    }
    cout<<min;

}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    minimum();

    return 0;
}