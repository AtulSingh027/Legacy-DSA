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

class poslist
{
public:
      node *haid, *tail;
      poslist()
      {
            haid = tail = NULL;
      }

      void adtobeg(int data)
      {
            node *temp = new node(data);
            if (haid == NULL)
            {
                  haid = tail = temp;
            }

            else
            {
                  temp->next = haid;
                  haid=temp;
            }
      }

      void attoend(int data)
      {
            node *temp = new node(data);
            if (haid == NULL)
            {
                  haid = tail = temp;
            }
            else
            {
                  tail->next = temp;
                  tail = temp;
            }
      }
      void traverse()
      {
            node *temp = haid;
            while (temp != NULL)
            {
                  cout << temp->data << " ";
                  temp = temp->next;
            }
            cout << endl;
      }

      int sum()
      {
            node *temp = haid;
            int sumpos = 0;
            while (temp != NULL)
            {
                  if (temp->data > 0)
                  {
                        sumpos += temp->data;
                  }
                        temp = temp->next;
            }
        return sumpos;
      }
};

int main()
{
      poslist p1;
      p1.adtobeg(-20);
      p1.adtobeg(50);
      p1.adtobeg(60);
      p1.adtobeg(-6);
      p1.attoend(10);
      p1.sum();

      cout << "The sum of positive element: " << p1.sum() << endl;

      return 0;
}