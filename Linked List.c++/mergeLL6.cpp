
// #include <iostream>
// using namespace std;

// struct Node
// {
//       int data;
//       struct Node *next;
//       Node(int data)
//       {
//             this->data = data;
//             this->next = NULL;
//       }
// };

// class Merrge_SLL
// {
// public:
//       Node *head, *tail;

//       Merrge_SLL()
//       {
//             head = tail = NULL;
//       }

//       void Adatbeg(int data)
//       {
//             Node *temp = new Node(data);
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

//       void AdatEnd(int data)
//       {
//             Node *temp = new Node(data);
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
//             Node *temp = head;
//             while (temp != NULL)
//             {
//                   cout << temp->data << " ";
//                   temp = temp->next;
//             }
//             cout << endl;
//       }

//       void mergedata(Merrge_SLL m1, Merrge_SLL m2)
//       {
//             Merrge_SLL mergeList;
//             Node *ptr1 = m1.head;
//             Node *ptr2 = m2.head;
//             while (ptr1 != NULL)
//             {
//                   mergeList.AdatEnd(ptr1->data);
//                   ptr1 = ptr1->next;
//             }
//             while (ptr2 != NULL)
//             {
//                   mergeList.AdatEnd(ptr2->data);
//                   ptr2 = ptr2->next;
//             }
//             cout << "First List :" << endl;
//             m1.traverse();
//             cout << "Second List :" << endl;
//             m2.traverse();
//             cout << "Mergerd List : " << endl;
//             mergeList.traverse();
//       }
// };

// int main()
// {

//       Merrge_SLL m1, m2;

//       m1.AdatEnd(10);
//       m1.AdatEnd(20);
//       m1.AdatEnd(30);
//       m1.AdatEnd(40);

//       m2.AdatEnd(50);
//       m2.AdatEnd(60);
//       m2.AdatEnd(70);
//       m2.AdatEnd(80);

//       m1.mergedata(m1, m2);

//       return 0;
// }


#include <iostream>
using namespace std;
struct node
{
     int data;
     struct node *next;
     node(int data )
     {
      this->data = data;
      this->next = NULL;
     }
    
};

class SinglyLL
{
      public:
      node *head;
      node *tail;

      SinglyLL(){
            head = tail = NULL;
      }
      
      void  AdtoBeg(int data){
            node *temp = new node(data);

            if(head == NULL)
            {
                  head = tail = temp;
            }
            else{

                  temp->next = head;
                  head = temp;                                                     
            }

      }
      
      void adtoTail(int data){

            node *temp = new node(data);

            if(head == NULL)
            {
                 head = tail = temp;
            }
            else{
                  tail->next = temp;
                  tail = temp;
            }

      }

      void DelAtBeg(){
            if(head == NULL)
            {
                  return;
            }
            else{
                  node *ptr = head;
                  head = head->next;
                  delete ptr;
            }
      }

      void DelAtTail(){
            if(head == NULL)
            {
                  return;
            }
            else{
                  node *ptr = tail;
                  node *temp = head;

                  while(temp->next != NULL)
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
            node *temp = head ;

            while(temp != NULL)
            {
                  cout<<temp->data<<"->";
                  temp = temp->next;
            }
            cout<<endl;
      }

};
int main(){

      SinglyLL s1;
      s1.AdtoBeg(10);
      s1.AdtoBeg(20);
      s1.AdtoBeg(30);
      s1.AdtoBeg(40);
      s1.AdtoBeg(50);
      s1.AdtoBeg(60);
      s1.AdtoBeg(70);

      s1.traverse();

      s1.DelAtBeg();
      cout<<"Now The Linked List Become when delete to begining: "<<endl;
      s1.traverse();

       s1.DelAtTail();
       cout<<"Now The Linked List Become when delete to Tail : "<<endl;
       s1.traverse();

      return 0;
}