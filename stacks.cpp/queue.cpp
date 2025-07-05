#include <iostream>
using namespace std;
// Global Variables
int front = -1, rear = -1;
int const MAX_SIZE_Q = 100;
int queue[MAX_SIZE_Q];

void enqueue(int data){
    // to check if the queue is full
    if(rear == MAX_SIZE_Q){
        cout << "Queue is Full\n";
    }
    // to check if the queue is empty
    else if(front == -1){
        rear = front = 0;
        queue[rear] = data;
    }
    rear++;
}

int dequeue(){
    if(front == -1){
        cout << "Queue is empty, can not perform dequeue operations...";
        return -1;
    }
    else{
        int item = queue[front];
        front++;
        return item;
    }
}

int getSize(){
    return (rear - front);
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    cout << "Size of queue is " << getSize() << endl;
    cout << "Data present at front of queue is " << dequeue();
    return 0;
}