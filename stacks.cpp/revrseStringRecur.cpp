#include <iostream>
#include <string>
using namespace std;
int top = -1;
const int maxsize = 100;
char stack[maxsize];

void push(int data){
    if (top == maxsize){
        cout<<"Stack is Overflow...\n";
        return ;
    }
    else{
        top++;
        stack[top]=data;
    }
}

int pop(){
    if (top==-1){
        cout<<"Stack is Empty can't perform operation...\n";
        return '\0';
    }
    else{
        char item = stack[top];
        top--;
        return item;
    }
}

string RevString(string str){

    for(int i=0;i<str.length();i++)
    {
        push(str[i]);

    }

    string ReverseStr = "";

    while(top != -1)
    {
        ReverseStr+=pop();
    }
       
       return ReverseStr;

}


int main(){
    string str;
    cout<<"Enter the String : ";
    getline(cin,str);

    string RevStr = RevString(str);

    cout<<"The Reversed string is : "<<RevStr<<endl;


    

    return 0;
}