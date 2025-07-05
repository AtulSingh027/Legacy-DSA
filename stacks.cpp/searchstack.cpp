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
        return item;
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

void search(int data){
    while(top != -1){
        int key = pop();
        if(key == data){
            cout << "Data is found\n";
            return;
        }
    }
    cout << "Data is not found\n";
}

int size(){
    return top+1;
}

void decimalToBinary(int n){
    while(n > 0){
        push(n%2);
        n = n / 2;
    }
    push(n);
    string str = "";
    while(top != -1){
        str = str + to_string(pop());
    }
    cout << "Binary number is " << str << endl; 
}


int main(){
    
    decimalToBinary(4);
    
    return 0;
}