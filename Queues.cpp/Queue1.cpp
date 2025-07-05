// #include <iostream>
// using namespace std;
// // Global Variables
// int front = -1, rear = -1;
// int const MAX_SIZE_Q = 100;
// int queue[MAX_SIZE_Q];

// void enqueue(int data)
// {
//     // to check if the queue is full
//     if(rear == MAX_SIZE_Q){
//         cout << "Queue is Full\n";
//     }
//     // to check if the queue is empty
//     else if(front == -1){
//         rear = front = 0;
//         queue[rear] = data;
//     }
//     rear++;
// }

// int dequeue()
// {
//     if(front == -1){
//         cout << "Queue is empty, can not perform dequeue operations...";
//         return -1;
//     }
//     else{
//         int item = queue[front];
//         front++;
//         return item;
//     }
// }

// int getSize()
// {
//     return (rear - front);
// }

// int main()
// {
//     enqueue(10);
//     enqueue(20);
//     enqueue(30);
//     enqueue(40);
//     enqueue(50);
//     cout << "Size of queue is " << getSize() << endl;
//     cout << "Data present at front of queue is " << dequeue();
//     return 0;
// }

#include <iostream>
using namespace std;
int front=-1,rear=-1;
const int MAX_SIZE = 100;
int queue[MAX_SIZE];

void EnQueue(int data){
    if(rear == MAX_SIZE)
    {
        cout<<"Queue is Full Can`t perform Operations...\n";
    }
    else if (front == -1)
    {
        rear = front = 0;
        queue[rear]=data;
    }
    rear++;
    
}

int DeQueue(){
    if(front == -1)
    {
        cout<<"Queue is Empty So What Delete..\n";
        return -1;
    }
    else{
        int item = queue[front];
        front++;
        return item;

    }
}

int GetSize(){
    return(rear - front);
}

int main(){
    EnQueue(10);
    EnQueue(20);
    
    EnQueue(30);
    EnQueue(40);
    EnQueue(50);

    cout<<"Size Of Queue : "<<GetSize()<<endl;
    cout<<"Data Present In Queue : "<<DeQueue();


    return 0;
}