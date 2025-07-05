#include <iostream>
using namespace std;
struct node
{
      int data;
      struct node *left;
      struct node *right;
      node(int data)
      {
            this->data = data;
            this->left = NULL;
            this->right = NULL;
      }
};

class Traversal {
      public:
      node *root;
      Traversal(){
            root=NULL;
      }

      node *insert(node *ptr,int data){
            node *temp = new node (data);
            if (ptr==NULL){
                  ptr = temp;
                  return temp;
            }
            else if (data<ptr->data){
                  ptr->left=insert(ptr->left,data);

            }
            else{
                  ptr->right=insert(ptr->right,data);

            }         
      }

      void preorderVLR(node *ptr){
            if (ptr != NULL){
                  cout<<ptr->data<<" ";
                  preorderVLR(ptr->left);
                  preorderVLR(ptr->right);

            }
      }

      int InorderLVR(node *ptr){
            if (ptr!=NULL){
                  InorderLVR(ptr->left);
                  cout<<ptr->data<<" ";
                  InorderLVR(ptr->right);

            }
            
      }

      void PostorderLRV(node *ptr){
            if (ptr != NULL){
                  preorderVLR(ptr->left);
                  preorderVLR(ptr->right);
                  cout<<ptr->data<<" ";
            }
      }

      void Maximum(node *ptr){
            while (ptr->right!=NULL){
                  ptr=ptr->right;
            }
            cout<<"The maximum data in Tree is :"<<ptr->data;
      }

      void minimum(node *ptr){
            while ( ptr->left!=NULL){
                  ptr= ptr->left;
            }
            cout<<"The mimnimum data in the Tree is :"<<ptr->data<<endl;
      }

      void printLeafNodes(node *ptr){
            if (ptr!=NULL){
                  if (ptr->left==NULL && ptr->right == NULL ){
                        cout<<ptr->data<<"->";
                  }
                  printLeafNodes(ptr->left);
                  printLeafNodes(ptr->right);
            }
      }
};
int main()
{
      Traversal trv;
      trv.root= trv.insert(trv.root,10);
      trv.root=trv.insert(trv.root,20);
      trv.root=trv.insert(trv.root,5);
      trv.root=trv.insert(trv.root,41);
      trv.root=trv.insert(trv.root,6);

      cout<<"Pre-Order Tvaversal : "<<endl;
      trv.preorderVLR(trv.root);

      cout<<"\nIN-Order Tvaversal : "<<endl;
      trv.InorderLVR(trv.root);

      cout<<"\nPost-Order Tvaversal : "<<endl;
      trv.PostorderLRV(trv.root);
      cout<<endl;

      trv.Maximum(trv.root);
      cout<<endl;

      trv.minimum(trv.root);
      cout<<endl;

      cout<<"Leaf Nodes of the Tree is :";
      trv.printLeafNodes(trv.root);




      return 0;
}