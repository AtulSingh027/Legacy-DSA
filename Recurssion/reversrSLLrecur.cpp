#include <iostream>
using namespace std;
struct node
{
      int data;          // data part
      struct node *next; // address part
      node(int data)
      {
            this->data = data;
            this->next = NULL;
      }
};
class SinglyLinkedList
{
public:
      /*
          head will always point to the beginning of list
          tail will always point to the end of list
      */
      node *head, *tail;

      SinglyLinkedList()
      {
            head = tail = NULL;
      }

      void addAtEnd(int data)
      {
            // 1. First create a new node with given data
            node *temp = new node(data);
            // 2. Check if the list is empty
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

      void printReverse(node *ptr)
      {
            // base case
            if (ptr == NULL)
            {
                  return;
            }
            else
            {
                  printReverse(ptr->next);
                  cout << ptr->data << " ";
            }
      }
};
int main()
{
      SinglyLinkedList obj;
      SinglyLinkedList obj2;
      SinglyLinkedList result;
      obj.addAtEnd(50);
      obj.addAtEnd(40);
      obj.addAtEnd(30);
      obj.addAtEnd(20);
      obj.addAtEnd(10);

      cout << "Printing SLL in order: \n";
      obj.traverse();

      cout << "Printing SLL in reversed order: \n";
      obj.printReverse(obj.head);
}