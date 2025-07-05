#include <iostream>
using namespace std;
struct node
{
      int data;          
      struct node *next; 
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
      void addAtBeg(int data)
      {
            node *temp = new node(data);
            if (head == NULL)
            {
                  head = tail = temp;
            }
            else
            {
                  temp->next = head;
                  head = temp;
            }
      }

      void Treverse()
      {
            node *temp = head;
            while (temp != NULL)
            {
                  cout << temp->data << " ";
                  temp = temp->next;
            }
            cout << endl;
      }

      void reverse_linked_list()
      {
            node *prev = NULL;
            node *current = head;
            node *next = NULL;
            while (current != NULL)
            {
                  next = current->next; 
                  current->next = prev; 
                  prev = current;       
                  current = next;
            }
            head = prev; 
      }
};
int main()
{
      SinglyLinkedList s1;
      s1.addAtBeg(40);
      s1.addAtBeg(30);
      s1.addAtBeg(20);
      s1.addAtBeg(10);

      cout<<"Orignal Linked List :"<<endl;
      s1.Treverse();

      s1.reverse_linked_list();
      cout<<"Revrsed Linked List :"<<endl;
      s1.Treverse();
      return 0;
}