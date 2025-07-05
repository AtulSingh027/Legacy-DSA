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

// class Pairwise_Swap 
// {
// public:
//       Node *head, *tail;
//       Pairwise_Swap()
//       {
//             head = tail = NULL;
//       }

//       void Adtobeg(int data)
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

//       int Length()
//       {
//             Node *temp = head;
//             int count = 0;
//             while (temp != NULL)
//             {
//                   count++;
//                   temp = temp->next;
//             }
//             return count;
//       }

//       void pairswap()
//       {
//             Node *ptr = head;
//             while (ptr->next != NULL && ptr->next->next != NULL)
//             {
//                   swap(ptr->data,ptr->next->data);
//                   ptr=ptr->next->next;
//             }
//       }
// };

// int main()
// {
//       Pairwise_Swap p1;
//       p1.Adtobeg(5);
//       p1.Adtobeg(62);
//       p1.Adtobeg(3);
//       p1.Adtobeg(9);
//       p1.Adtobeg(5);

//       cout<<"Bfeore pair wise swapping :\n";
//       p1.traverse();

//       cout<<"After pair wise swapping :\n";
//       p1.pairswap();
//       p1.traverse();

//       return 0;
// }
// 
#include <iostream>
using namespace std;

struct node{
      int data;
      struct node *next;
      node (int data){
            this->data = data;
            this->next = NULL;
      }
};

class pairswap{
      public:
      node *head , *tail;
      pairswap(){
            head = tail = NULL;
      }

      void adATOBeg(int data){
            node *temp = new node (data);
            if (head == NULL){
                  head = tail= temp;
              
            }
            else{
                 temp->next = head;
                 head = temp;
                  
            }
      }

      void adTOEnd(int data){
            node *temp = new node (data);
            if (head == NULL){
                  head = tail = temp;
            }
            else{
                  tail->next = temp;
                  tail = temp;

            }

      }

      void Travrse(){
            node *temp = head;
            while (temp!=NULL){
                  cout << temp->data<<"->";
                  temp = temp->next;  
            }
            cout<<endl;
      }

      void pairWiseSwap(){
            node *ptr = head;
            while (ptr!=NULL){
                  swap(ptr->data,ptr->next->data);
                  ptr = ptr->next->next;  
            }
      }

};

int main(){

      pairswap p1;
      p1.adATOBeg(10);
      p1.adATOBeg(20);
      p1.adATOBeg(30);
      p1.adATOBeg(40);
      p1.adATOBeg(50);

      p1.adTOEnd(5);

     cout<<"Before sapping :"<<endl;
     p1.Travrse();

     cout<<"After swaped pair wise :"<<endl;
     p1.pairWiseSwap();
     p1.Travrse();


      return 0;
}