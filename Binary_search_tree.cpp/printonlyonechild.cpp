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

class printonechild
{
public:
      node *root;
      printonechild()
      {
            root = NULL;
      }

      node *insert(node *ptr, int data)
      {
            node *temp = new node(data);
            if (ptr == NULL)
            {
                  return  new node(data);
            }
            else if (data < ptr->data)
            {
                  ptr->left = insert(ptr->left, data);
            }
            else
            {
                  ptr->right = insert(ptr->right, data);
            }
            return ptr;
      }

      void onechild(node *ptr){
            if (ptr!=NULL){
                  if (ptr->left!=NULL && ptr->right==NULL || ptr->left==NULL && ptr->right!=NULL)
                  {
                        cout<<ptr->data<<" ";
                  }
                  onechild(ptr->left);
                  onechild(ptr->left);
            }
      }

      void Twochild(node *ptr){
      if (ptr!=NULL){
            if (ptr->left!=NULL && ptr->right!=NULL )
            {
                  cout<<ptr->data<<" ";
            }
            Twochild(ptr->left);
            Twochild(ptr->right);
      }
}

};

int main()
{
      printonechild p1;
      p1.root = p1.insert(p1.root ,50);
      p1.root = p1.insert(p1.root ,70);
      p1.root = p1.insert(p1.root ,60);
      p1.root = p1.insert(p1.root ,40);
      p1.root = p1.insert(p1.root ,45);
      p1.root = p1.insert(p1.root ,30);
    
    
      cout<<"One child nodes :"<<endl;
      p1.onechild(p1.root);
      cout<<endl;

      cout<<"Two child nodes :"<<endl;
      p1.Twochild(p1.root);




      return 0;
}

