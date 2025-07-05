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

class middle_NOLeng
{
public:
      Node *head, *tail;
      middle_NOLeng()
      {
            head = tail = NULL;
      }
      void Adbeg(int data)
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

      void middle()
      {
            Node *slow, *fast;
            slow = head;
            fast = head;
            if (head != NULL)
            {
                  while (fast!=NULL && fast->next!=NULL){
                        slow=slow->next;
                        fast=fast->next->next;
                  }
                  cout<<"the middle element is :"<<slow->data<<endl;
            }
      }
};

int main()
{
      middle_NOLeng m1;
      
      m1.Adbeg(50);
      m1.Adbeg(20);
      m1.Adbeg(30);
      m1.Adbeg(65);
      m1.Adbeg(51);

      m1.middle();

      return 0;
}