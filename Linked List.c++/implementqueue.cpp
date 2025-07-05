// #include<iostream>
// using namespace std;
// int top = -1;
// int const MAX_SIZE = 100;
// char stack[MAX_SIZE];
// void push(char data)
// {
//     if (top == MAX_SIZE)
//     {
//         cout << "Stack is full...\n";
//         return;
//     }
//     else
//     {
//         top++;
//         stack[top] = data;
//     }
// }
// char pop()
// {
//     if (top == -1)
//     {
//         cout << "Stack is Empty..\n";
//         return -1;
//     }
//     else
//     {
//         char item = stack[top];
//         top--;
//         return item;
//     }
// }
// char peek()
// {
//     if (top == -1)
//     {
//         cout << "stack is empty..\n";
//         return -1;
//     }
//     else
//     {
//         return stack[top];
//     }
// }
// int size()
// {
//     return top + 1;
// }
// void blanceexpression(string str)
// {
//     char ch;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == '(' ||
//             str[i] == '{' ||
//             str[i] == '[')
//         {
//             push(str[i]);
//         }
//         else
//         {
//             ch = pop();
//             if(str[i] == ')' && ch == '(' || str[i] == '}' && ch == '{' ||str[i] == ']' && ch == '[')
//             {
//                 continue;
//             }
//             else
//             {
//                 cout << "Given Expression is not blanced." << endl;
//                 return;
//             }
//         }
//     }
//     if(top==-1)
//     {
//         cout<<"Expression is Balnced.."<<endl;
//     }
//     else{
//         cout<<"Expression is not balanced.."<<endl;
//     }
// }
// int main()
// {
//     string str;
//     cout << "Enter your expression : ";
//     getline(cin, str);
//     blanceexpression(str);
//     return 0;
// }


#include <iostream>
int top = -1;
const int maxsize = 100;
int stack[maxsize];
using namespace std;

void push(char data)
{
    if(top == maxsize)
    {
        return;
    }
    else{
       top++;
       stack[top] = data;
    }
}

char pop()
{
    if(top == -1)
    {
        return -1 ;
    }
    else{
        char item = stack[top];
        top--;
        return item;
    }

}

char Valid(string str)
{
     char ch;
      for(int i=0;i<str.length();i++)
      {
        ch = str[i];
        if(ch == '(' || ch == '[' || ch == '{')
        {
            push(ch);
        }
        else{
            ch = pop();
            if(str[i] == ')' && ch == '(' || str[i] == '}' && ch == '{' ||str[i] == ']' && ch == '[')
            {
                continue;
            }
            else{
                cout<<"Given Expression Is Not Balanced...\n";
                return -1;
            }
        }
        
      }

      if(stack[top] == -1)
      {
        cout<<"Expression is Valid..\n";
      }
      else{
        cout<<"Expression is Not Valid.\n";
      }
}

int main(){

    string str;
    cout<<"Enter Your Expression : ";
    cin>>str;

     Valid(str);

     return 0;

}