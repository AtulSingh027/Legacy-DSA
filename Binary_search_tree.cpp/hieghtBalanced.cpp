#include <iostream>
using namespace std;

struct node
{
      int data;
      struct node *right;
      struct node *left;
      node(int data)
      {
            this->data = data;
            this->left = NULL;
            this->right = NULL;
      }
};

class Balncedtree
{
public:
      node *root;
      Balncedtree()
      {
            root = NULL;
      }

      node *insert(node *root, int data)
      {
            // node *temp = new node (data);
            if (root == NULL)
            {
                  // root = temp;
                  // return root;
                  return new node(data);
            }
            else if (data < root->data)
            {
                  root->left = insert(root->left, data);
            }
            else
            {
                  root->right = insert(root->right, data);
            }
            return root;
      }

      int height(node *root, bool &valid)
      {
            if (root == NULL)
            {
                  return 0;
            }

            int L = height(root->left, valid);
            int R = height(root->right, valid);

            if (abs(L - R) > 1)
            {
                  valid = false;
            }
            return max(L, R) + 1;
      }

      bool isBalanced(node *root)
      {
            bool valid = true;
            height(root, valid);
            return valid;
      }
};

int main()
{
      Balncedtree b1;
      b1.root = b1.insert(b1.root, 10);
      b1.root = b1.insert(b1.root, 20);
      b1.root = b1.insert(b1.root, 30);
      b1.root = b1.insert(b1.root, 40);
      b1.root = b1.insert(b1.root, 50);

      if (b1.isBalanced(b1.root))
      {
            cout << "The tree is balanced!..\n";
      }
      else
      {
            cout << "The Tree is Not Balanced..\n";
      }

      return 0;
}