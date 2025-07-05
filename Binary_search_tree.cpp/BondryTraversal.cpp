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

class Binary_search_Tree
{
public:
      node *root;
      Binary_search_Tree()
      {
            root = NULL;
      }

      node *insert(node *root, int data)
      {
            node *temp = new node(data);
            if (root == NULL)
            {
                  root = temp;
                  return root;
            }
            else if (data < root->data)
            {
                  root->left = insert(root->left, data);
            }
            else
            {
                  root->right = insert(root->right, data);
            }
      }

      void PrintLeafnode(node *root)
      {
            if (root == NULL){
                  return ;
            }
             PrintLeafnode(root->left);
            if (root->left == NULL && root->right == NULL)
            {
                  cout << root->data << " ";
            }
            PrintLeafnode(root->right);
      }

      void PrintLeftBoundry(node *root)
      {
             if (root == NULL){
                  return ;
             }
            if (root->left)
            {
                  cout << root->data << " ";
                  PrintLeftBoundry(root->left);
            }
            else if (root->right)
            {
                  cout << root->data << " ";
                  PrintLeftBoundry(root->right);
            }
      }

      void PrintRightBoundry(node *root)
      {
            if (root == NULL)return ;

            if (root->left)
            {
                  PrintRightBoundry(root->left);
                  cout << root->data << " ";
            }
            else if (root->right)
            {
                  PrintRightBoundry(root->right);
                  cout << root->data << " ";
            }
      }

      void printBoundary(node *root)
      {
            if (root == nullptr)
                  return;

            cout << root->data << " ";

            PrintLeftBoundry(root->left);

            PrintLeafnode(root->left);
            PrintLeafnode(root->right);

            PrintRightBoundry(root->right);
      }
};

int main()
{
      Binary_search_Tree bst;
      bst.root = bst.insert(bst.root, 50);
      bst.root = bst.insert(bst.root, 40);
      bst.root = bst.insert(bst.root, 60);
      bst.root = bst.insert(bst.root, 10);
      bst.root = bst.insert(bst.root, 15);
      bst.root = bst.insert(bst.root, 25);
      bst.root = bst.insert(bst.root, 32);

      cout << "Boundry Travesrsal Elements:" << endl;

      bst.printBoundary(bst.root);

      return 0;
}

