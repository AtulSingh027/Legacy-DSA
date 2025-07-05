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

class identical
{
public:
      node *insert(node *ptr, int data)
      {
            if (ptr == NULL)
            {
                  return new node(data);
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

      bool isidentical(node *root1, node *root2)
      {
            if (root1 == NULL && root2 == NULL)
            {
                  return true;
            }
            if (root1 != NULL && root2 != NULL)
            {
                  return (root1->data == root2->data &&
                          isidentical(root1->left, root2->left) &&
                          isidentical(root1->right, root2->right));
            }
            return false;
      }
      void traverse(node *root){
            if (root==NULL){
                  return;
            }
            traverse(root->left);
            cout<<root->data<<" ";
            traverse(root->right);
      }

};

int main()
{
      identical obj;
      node *root1 = NULL;
      root1 = obj.insert(root1, 50);
      root1 = obj.insert(root1, 60);
      root1 = obj.insert(root1, 10);
      root1 = obj.insert(root1, 65);
      root1 = obj.insert(root1, 5);

      node *root2 = NULL;
      root2 = obj.insert(root2, 50);
      root2 = obj.insert(root2, 60);
      root2 = obj.insert(root2, 10);
      root2 = obj.insert(root2, 65);
      root2 = obj.insert(root2, 5);

      if (obj.isidentical(root1, root2))
      {
            cout << "BST is the mirror tree\n";
      }
      else
      {
            cout << "BST is not identical...\n";
      }

      obj.traverse(root1);
      cout<<endl;
      obj.traverse(root2);



      return 0;
}
