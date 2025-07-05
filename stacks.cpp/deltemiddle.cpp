#include <iostream>
using namespace std;

const int maxsize = 100;
int top = -1;
int stack[maxsize];

void push(int data){
      if (top == maxsize -1){
            cout<<"Stack is Full..\n";
            return;
      }
          top++;
          stack[top]= data;
}

int pop(){
      if (top==-1){
            cout<<"Stack is Empty..\n";
            return -1;
      }
      int item=stack[top];
      top--;
      return item;
}

int peek(){
      if (top == -1){
            cout<<"stack is empty..\n";
            return -1;

      }
      return stack[top];

}

int size()
{
      return top+1;
}

void searchkey(int data){
      while(top!=-1){
            int key = pop();
            if (key == data){
                  cout<<"Key is found\n";
                  return ;
            }

      }
      cout<<"Key is not found .\n";

}




int main(){
   
   push(1);
   push(2);
   push(3);
   push(4);
   push(5);
   int key;

   cout<<"Enter the key for Search:";
   cin>>key;

  searchkey(key);

      return 0;

}