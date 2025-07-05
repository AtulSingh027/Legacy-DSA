#include <iostream>
using namespace std;

int top = -1;
const int MAX_SIZE = 100;
int stack[MAX_SIZE];

void push(int data)
{
      if (top == MAX_SIZE - 1)
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

int peek()
{
      if (top == -1)
      {
            cout << "Stack is empty\n";
            return -1;
      }
      return stack[top];
}

void search(int data)
{
      for (int i = 0; i <= top; i++)
      {
            if (stack[i] == data)
            {
                  cout << "Data is found\n";
                  return;
            }
      }
      cout << "Data is not found\n";
}

int size()
{
      return top + 1;
}

void reverseNumber(int n)
{
      cout << "Original number is " << n << endl;
      while (n > 0)
      {
            push(n % 10);
            n = n / 10;
      }
      int result = 0;
      int mul = 1;
      while (top != -1)
      {
            result = result + (pop() * mul); // 0+(1*1)-->1+(2*10)-->21+(3*100)-->321
            mul *= 10; // 1*10=10-->10*10=100
      } // top=-1 and loop break;
      cout << "Reversed stack is " << result << endl;
}

int main()
{
      reverseNumber(2489);
      return 0;
}
