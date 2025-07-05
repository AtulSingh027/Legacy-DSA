#include <iostream>
using namespace std;
struct node {
    int data; // data part
    struct node *next; // address part
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class SinglyLinkedList{
    public:
    /*
        head will always point to the beginning of list
        tail will always point to the end of list
    */
        node *head, *tail;
        
        SinglyLinkedList(){
            head = tail = NULL;  
        }
        void addAtBeg(int data){
            // 1. First create a new node with given data
            node *temp = new node(data);
            if(head == NULL){
                head = tail = temp;
            }
            else{
                temp->next = head;
                head = temp;
            }
        }

        void addAtEnd(int data){
            // 1. First create a new node with given data
            node *temp = new node(data);
            // 2. Check if the list is empty 
            if(head == NULL){
                head = tail = temp;
            }
            else{
                tail->next = temp;
                tail = temp;
            }
        }


        void delAtBeg(){
            
            // 1. Check if the list is empty 
            if(head == NULL){
                return;
            }
            else{
                
                node *ptr = head;
                head = head->next;
                delete ptr;
            }
        }
};
int main(){
    SinglyLinkedList obj;
    obj.addAtBeg(50);
    obj.addAtBeg(40);
    obj.addAtBeg(30);
    obj.addAtBeg(20);
    obj.addAtBeg(10);
    cout << "Head's data = " << obj.head->data << endl;//10
    cout << "Tail's data = " << obj.tail->data << endl;//50
}