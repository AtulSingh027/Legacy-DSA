#include <iostream>
using namespace std;
struct Node
{
      int data;
      struct Node *next;
      Node(int data)
      {
            this->data = data;
            this->next = NULL;
      }
};

class SIngly_linkedlist
{
public:
      Node *tail, *head;
      SIngly_linkedlist()
      {
            head = tail = NULL;
      }

      void insert(int data)
      {
            Node *temp = new Node(data);

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

      void inseratend(int data)
      {
            Node *temp = new Node(data);

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

      void delhead()
      {
            if (head == NULL)
            {
                  return;
            }
            else
            {
                  Node *ptr = head;
                  head = head->next;
                  delete ptr;
            }
      }

      void deltail()
      {
            if (head == NULL)
            {
                  return;
            }
            else
            {
                  Node *ptr = tail;
                  Node *temp = head;
                  while (temp->next != tail)
                  {
                        temp = temp->next;
                  }
                  temp->next = NULL;
                  tail = temp;
                  delete ptr;
            }
      }

      void traverse()
      {
            Node *temp = head;
            while (temp != NULL)
            {
                  cout << temp->data << "->";
                  temp = temp->next;
            }
            cout << endl;
      }

      int lenght()
      {
            Node *temp = head;
            int count = 0;
            while (temp != NULL)
            {
                  count++;
                  temp = temp->next;
            }
            return count;
      }

      void middle()
      {
            int mid = lenght() / 2;
            int count = 0;
            Node *temp = head;
            while (count < mid)
            {
                  count++;
                  temp = temp->next;
            }
            cout << "The middle element is : " << temp->data << endl;
      }
};

int main()
{
      SIngly_linkedlist s1;
      s1.insert(20);
      s1.insert(40);
      s1.insert(60);
      s1.insert(80); // head

      s1.inseratend(10); // tail
      s1.traverse();
      s1.delhead();
      s1.deltail();
      s1.traverse();

      cout << "Head data = " << s1.head->data << endl;
      cout << "Tail data = " << s1.tail->data << endl;
      cout << "The Length of Linked List is : " << s1.lenght() << endl;
      s1.middle();

      return 0;
}