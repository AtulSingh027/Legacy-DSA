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

// class common
// {
// public:
//       node *head, *tail;
//       common()
//       {
//             head = tail = NULL;
//       }

//       void addtobeg(int data)
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

//       void commomelement(common &secLL)
//       {
//             node *i = head;
         

//             while (i != NULL)
//             {
                  
//                   node *j = secLL.head;
//                   while (j!= NULL)
//                   {
//                         if (i->data == j->data)
//                         {
//                               cout <<"The common element is :"<<i->data<<endl;
//                               break;
//                         }
//                         j = j->next;
//                   }
//                   i = i->next;
//             }
//             cout<<endl;

            
            
            
//       }
// };
// int main()
// {
//       common u1, u2;
//       u1.addtobeg(1);
//       u1.addtobeg(5);
//       u1.addtobeg(2);
//       u1.addtobeg(1);
//       u1.addtobeg(3);

//       u2.addtobeg(1);
//       u2.addtobeg(15);
//       u2.addtobeg(56);
//       u2.addtobeg(56);
//       u2.addtobeg(63);

//       u1.commomelement(u2);

//       return 0;
// }

#include <iostream>
using namespace std;
struct  node
{
   int data;
   struct node *next;

   node(int data){
      this->data = data;
      this->next = NULL;

   }
};

class CommonElement{
      public:
      node *head ;
      node *tail;

      CommonElement(){

            head = tail = NULL;
      }

      void AdToBeg(int data){
            node *temp = new node (data);
            if (head == NULL){
                  head = tail = temp;
                  
            }
            else{
                  temp->next = head;
                  head = temp;

            }
      }

      void Traverse(CommonElement &secLL){
            node *temp = head ;
            while (temp != NULL){
                  cout<<temp->data<<" ";
                  temp=temp->next;
            }
      }

      void Common(CommonElement &secLL){
            node *i = head;
            while (i !=NULL){
                  node *j = secLL.head;
                  while (j !=NULL){
                        if (i->data == j->data){
                              cout<<"The Common Eleemnt in the List "<<i->data<<endl;
                              break;
                        }
                        j=j->next;
                  }
                  i=i->next;

            }
            cout<<endl;
      }
};


int main(){

      CommonElement c1,c2;
      c1.AdToBeg(10);
      c1.AdToBeg(20);
      c1.AdToBeg(30);

      c2.AdToBeg(20);
      c2.AdToBeg(10);
      c2.AdToBeg(60);

      c1.Common(c2);
      

      return 0;
}