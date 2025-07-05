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

class Stack_Using_SLL
{
public:
      node *top;

      Stack_Using_SLL()
      {
            top = NULL;
      }
      
      void push(int data)
      {
            node *temp = new node(data);
            temp->next = top;
            top = temp;
      }

      void pop()
      {
            if (top == NULL)
            {
                  cout << "Stack is Empty..\n";
                  return;
            }
            else
            {
                  node *temp = top;
                  top = top->next;
                  delete temp;
            }
      }

      void trverse()
      {
            node *temp = top;
            while (temp != NULL)
            {
                  cout << temp->data << " ";
                  temp = temp->next;
            }
            cout << endl;
      }
};

int main()
{
      Stack_Using_SLL s1;
      s1.push(10);
      s1.push(20);
      s1.push(30);
      s1.trverse();
      s1.pop();
      s1.trverse();

      return 0;
}
