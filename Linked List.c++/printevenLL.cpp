// #include <iostream>
// using namespace std;
// struct node
// {

//       int data;
//       struct node *next;
//       node(int data)
//       {
//             this->data = data;
//             this->next = NULL;
//       }
// };
// class maxList
// {
// public:
//       node *head, *tail;
//       maxList()
//       {
//             head = tail = NULL;
//       }
//       void adtobeg(int data)
//       {
//             node *temp = new node(data);
//             if (head == NULL)
//             {
//                   head = tail = temp;
//             }
//             else
//             {
//                   temp->next = head;
//                   head = temp;
//             }
//       }
//       void adtoend(int data)
//       {
//             node *temp = new node(data);
//             if (head == NULL)
//             {
//                   head = tail = temp;
//             }
//             else
//             {
//                   tail->next = temp;
//                   tail = temp;
//             }
//       }

//       void traverse()
//       {
//             node *temp = head;
//             while (temp != NULL)
//             {
//                   cout << temp->data << " ";
//                   temp = temp->next;
//             }
//       }

//       int counteven()
//       {
//             int count = 0;
//             node *fast = head;
//             while (fast->next != NULL && fast->next->next != NULL)
//             {
//                   fast = fast->next->next;
//                   if (fast != NULL && fast->data % 2 == 0)
//                   {
//                         cout << fast->data << " ";
//                         count++;
//                   }
//             }
//             cout << endl;
//             return count;
//       }
// };
// int main()
// {
//       maxList m1;
//       m1.adtobeg(1);
//       m1.adtobeg(2);
//       m1.adtobeg(3);
//       m1.adtobeg(4);
//       m1.adtobeg(5);
//       m1.adtobeg(7);

//       int evennodes = m1.counteven();
//       cout<<"All even nodes in the list is :"<<evennodes<<endl;

//       return 0;
// }






#include <iostream>
#include <bits/c++config.h>
using namespace std;

struct node{
      int data;
      struct node *next;
      node(int data)
      {
           this->data = data;
           this->next = NULL;
      }
};

class PrintEvenSLL{
      public:
      node *haid ,*tail;
      PrintEvenSLL(){
            haid = tail = NULL;
      }

      void AddToBeg(int data)
      {
          node *temp = new node (data);
          if(haid == NULL)
          {
            haid = tail = temp;
          }
          else
          {
            temp->next = haid;
            haid = temp;
          }

      }

      void AddatTail(int data)
      {
            node *temp = new node(data);

            if(haid == NULL)
            {
                 haid = tail = NULL;
            }
            else
            {
                  tail->next = temp;
                  tail = temp;
            }

      }

      void DelAtBeg(){
            
            if(haid == NULL)
            {
                  return;
            }
            else
            {
               node *ptr = haid;
               haid = haid->next;
               delete ptr;
            }
      }

      void DelAtEnd()
      {
            if(haid == NULL)
            {
                  return;
            }
            else
            {
             node *ptr = tail;
             node *temp = haid;

             while(temp->next != tail)
             {
                  temp = temp->next;
             }

             temp->next = NULL;
             tail = temp;
             delete ptr;
                 
            }
      }

      void Traverse()
      {
            node *temp = haid;

            while(temp != NULL)
            {
                  cout<<temp->data<<"->";
                  temp = temp->next;
                  
            }
            cout<<endl;
      }
      
};

int main(){

      PrintEvenSLL p1;

      p1.AddToBeg(10);
      p1.AddToBeg(20);
      p1.AddToBeg(30);
      p1.AddToBeg(40);
      p1.AddToBeg(50);


      p1.DelAtEnd();
      p1.AddatTail(60);

      cout<<"Present The SLL : ";
      p1.Traverse();

      return 0;
}





