#include <iostream>
using namespace std;
struct node
{
      int data;
      node *next;
      node(int data)
      {
            this->data = data;
            this->next = NULL;
      }
};
class SinglyLinkedList
{
public:
      node *head, *tail;
      SinglyLinkedList()
      {
            head = tail = NULL;
      }
      void addAtEnd(int data)
      {
            node *temp = new node(data);
            if (head == NULL)
            {
                  head = tail = temp;
            }
            else
            {
                  tail->next = temp;
                  tail = temp;
            }
      }
      void traverse()
      {
            node *temp = head;
            while (temp != NULL)
            {
                  cout << temp->data << "->";
                  temp = temp->next;
            }
            cout << endl;
      }
      void delAtMid(){
            node *ptr =NULL;
            node *slow = head;
            node *fast = head;
            while (fast->next!=NULL && fast->next->next!=NULL){
                  ptr = slow ;
                  slow= slow->next;
                  fast= fast->next->next;
            } 
           ptr->next = slow->next;
           delete slow;
      }
};

int main()
{
      SinglyLinkedList obj;

      obj.addAtEnd(1);
      obj.addAtEnd(2);
      obj.addAtEnd(3);
      obj.addAtEnd(4);
      obj.addAtEnd(5);
      cout << "Before deleting middle element : \n";
      obj.traverse();

      cout << "\nAfter deleting middle element : \n";
      obj.delAtMid();
      obj.traverse();
}