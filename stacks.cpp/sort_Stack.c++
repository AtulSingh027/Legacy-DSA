// #include <iostream>
// using namespace std;
// // Global Variables
// int top = -1;
// int const MAX_SIZE = 100;
// int stack[MAX_SIZE];
// int nums[MAX_SIZE];

// void push(int data)
// {
//       // isFull functionality
//       if (top == MAX_SIZE)
//       {
//             cout << "Stack is full\n";
//             return;
//       }
//       else
//       {
//             top++;
//             stack[top] = data;
//       }

// }
// int pop()
// {
//       if (top == -1)
//       {
//             // cout << "Stack is empty\n";
//             return -1;
//       }
//       else
//       {
//             int item = stack[top];
//             top--;
//       }
// }

// int peek()
// {
//       if (top == -1)
//       {
//             cout << "Stack is empty\n";
//             return -1;
//       }
//       else
//       {
//             return stack[top];
//       }
// }

// int size()
// {
//       return top + 1;
// }

// int search(int traget){
//       int flag=0;
//       for (int i=top+1;i>=0;i--)
//       {
//             if (pop()==traget){
//                   flag=1;
//                   break;
//             }
//       }
//       if (flag==1){
//             cout<<"the element is find is:"<<traget;
//             return traget;
//       }
//       else{
//             cout<<"the element is not in the stack"<<endl;
//       }

// }

// int main()
// {
//       push(1);
//       push(3);
//       push(5);
//       push(6);
//       push(2);

//      search(2);

//       return 0;
// }

#include <iostream>
using namespace std;
int const maxsize = 100;
int top = -1;
int stack[maxsize];

void push(int data)
{
      if (top == maxsize)
      {
            cout << "Satck is overflow.\n";
      }
      else
      {
            top++;
            stack[top] = data;
      }
}

int pop()
{
      if (top == -1)
      {
            cout << "Stack is Empty.\n";
            return -1;
      }
      else
      {
            int item = stack[top];
            top--;
            return item;
      }
}

void search(int data)
{
      while (top != -1)
      {
            int key = pop();
            if (key==data)
            {     cout<<"Key is found \n";
                  return;
            }
            
      }
       cout << "Element is not found.\n";
}

int main()
{
      push(1);
      push(2);
      push(3);
      push(4);
      

      int key;

      cout << "Enetr the key for Search :";
      cin >> key;

      search(key);

      return 0;
}