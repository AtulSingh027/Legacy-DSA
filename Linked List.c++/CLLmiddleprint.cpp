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

class CircularLinkedList
{
  public:
      node *head, *tail;
      CircularLinkedList()
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

      void printmiddle()
      {
            node *slow = head;
            node *fast = head;
            while (fast->next != NULL && fast->next->next != NULL)
            {
                  slow = slow->next;
                  fast = fast->next->next;
            }
            cout << "The middle Node is :" << slow->data << endl;
      }
};

int main()
{
      CircularLinkedList obj;

      obj.addAtEnd(10);
      obj.addAtEnd(20);
      obj.addAtEnd(30);
      obj.addAtEnd(40);
      obj.addAtEnd(50);
      obj.addAtEnd(60);
      obj.addAtEnd(70);
      obj.addAtEnd(80);
      obj.addAtEnd(90);

      obj.printmiddle();

      return 0;
}



