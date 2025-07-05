#include <iostream>
using namespace std;
// Global Variables
int top = -1;
int const MAX_SIZE = 100;
int stack[MAX_SIZE];

void push(int data){
    // isFull functionality
    if(top == MAX_SIZE){
        cout << "Stack is full\n";
        return;
    }
    else{
        top++;
        stack[top] = data;
    }
}

int pop(){
    if(top == -1){
        cout << "Stack is empty\n";
        return -1;
    }
    else{
        int item = stack[top];
        top--;
    }
}

int peek(){
    if(top == -1){
        cout << "Stack is empty\n";
        return -1;
    }
    else{
        return stack[top];
    }
}

int size(){
    return top+1;
}

int main(){
    push(100);
    cout << "The top most element present in stack is = " << pop() << endl;
    cout << "The size of stack = " << size();
    return 0;
}



