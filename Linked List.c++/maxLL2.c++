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
class maxList
{
public:
      node *head, *tail;
      maxList()
      {
            head = tail = NULL;
      }
      void adtobeg(int data)
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

      void maxfind()
      {
            int max = head->data;
            node *temp = head;
            while (temp != NULL)
            {
                  if (temp->data > max)
                  {
                        max = temp->data;
                  }
                  temp=temp->next;
            }
            cout << "the maximum data in the List :" << max << endl;
      }
};
int main()
{
      maxList m1;
      m1.adtobeg(10);
      m1.adtobeg(20);
      m1.adtobeg(30);
      m1.adtobeg(40);
      m1.adtoend(50);

      m1.maxfind();

      return 0;
}