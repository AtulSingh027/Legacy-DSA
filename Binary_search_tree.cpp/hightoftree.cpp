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

class Highttree
{
public:
      node *root;
      Highttree()
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

      int hightoftree(node *root)
      {
            if (root == NULL)
            {
                  return 0;
            }
            int right = hightoftree(root->right);
            int left = hightoftree(root->left);
            
            
            int ans = max(left,right)+1;
            return ans; 
      }
};

int main()
{
      Highttree p1;
      p1.root = p1.insert(p1.root, 50);
      p1.root = p1.insert(p1.root, 70);
      p1.root = p1.insert(p1.root, 60);
      p1.root = p1.insert(p1.root, 40);
      p1.root = p1.insert(p1.root, 45);
      p1.root = p1.insert(p1.root, 30);

      cout<<"The hight of tree is :"<<p1.hightoftree(p1.root);
     

      return 0;
}