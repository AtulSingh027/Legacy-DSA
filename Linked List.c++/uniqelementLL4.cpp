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

class uniqe
{
public:
      node *head, *tail;
      uniqe()
      {
            head = tail = NULL;
      }

      void addtobeg(int data)
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

      void adtoend(int data)
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
      void elementuniqe()
      {
            // node *temp = head;
            node *i = head;
            while (i != NULL)
            {
                  node *j =head;
                  int count = 0;
                  while (j != NULL)
                  {
                        if (i->data == j->data && i!=j)
                        {
                              count++;
                        }
                        j=j->next;
                  }

                  if (count == 0)
                  {
                        cout << "Uniq elements is :" << i->data << endl;
                  }
                  i=i->next;
            }
      }
};
int main()
{
      uniqe u1;
      u1.addtobeg(1);
      u1.addtobeg(1);
      u1.addtobeg(2);
      u1.addtobeg(3);
      u1.addtobeg(3);

      cout << "haed :" << u1.head->data << endl;
      cout << "tail:" << u1.tail->data << endl;

      u1.elementuniqe();
      return 0;
}