//find the sum of longest bludline of a tree?
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

 class BinarySearchTree
 {
 public:
       node *root;
       BinarySearchTree()
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

      void solve(node *root ,int sum ,int &maxsum,int len ,int &maxLen){

            if (root == NULL){
                  if (len>maxLen)
                  {
                        maxLen = len;
                        maxsum = sum;
                  }
                  else if (len == maxLen)
                  {
                        maxsum = max(sum,maxsum);

                  }
                  return;
            }
            sum = sum + root->data;

            solve(root->left,sum,maxsum,len+1,maxLen);
            solve(root->right,sum,maxsum,len+1,maxLen);
      }

      int longestBludlineSum(node *root){
            int len = 0;
            int maxLen = 0;

            int sum = 0;
            int maxSum = 0;

            solve(root,sum,maxSum,len,maxLen);

            return maxSum;

      }
};

int main(){
      BinarySearchTree Sum;
      Sum.root = Sum.insert(Sum.root,50);
      Sum.root = Sum.insert(Sum.root,60); 
      Sum.root = Sum.insert(Sum.root,10);
      Sum.root = Sum.insert(Sum.root,65);
      Sum.root = Sum.insert(Sum.root,5);

      int sum = Sum.longestBludlineSum(Sum.root);

      cout<<"The sum of longest bludline of a tree:"<<sum<<endl;
      return 0;
}