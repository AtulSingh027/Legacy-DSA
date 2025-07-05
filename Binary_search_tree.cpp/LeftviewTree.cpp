// #include <iostream>
// #include <vector>
// using namespace std;

// struct node
// {
//       int data;
//       struct node *left;
//       struct node *right;

//       node(int data){
//             this->data = data;
//             this->left = NULL;
//             this->right = NULL;
//       }
// };

// class Leftview{
//       public:
//       node *root;
//       Leftview(){
//             root=NULL;
//       }

//       node *insert(node *root,int data){
//             node *temp = new node (data);
//             if (root == NULL){
//                   root = temp;
//                   return root;
//             }
//             else if (data < root->data)
//             {
//                   root->left = insert(root->left , data);

//             }
//             else{
//                   root->right = insert(root->right , data);
//             }

//       }

//       void solve(node *root ,vector<int> &ans, int level )
//       {
//             if (root == NULL){
//                   return ;
//             }
//             if (level == ans.size()){
//                   cout<<root->data<<" ";
//                   ans.push_back(root->data);
//             }
//             solve(root->left ,ans , level+1);
//             solve(root->right ,ans , level+1);

//       }

//       vector <int> leftview(node *root){
//             vector <int> ans ;
//             solve(root,ans,0);
            
//       }

// };

// int main(){

//        Leftview bst;
//        bst.root = bst.insert(bst.root, 50);
//        bst.root = bst.insert(bst.root, 40);
//        bst.root = bst.insert(bst.root, 60);
//        bst.root = bst.insert(bst.root, 10);
//        bst.root = bst.insert(bst.root, 15);
//        bst.root = bst.insert(bst.root, 25);
//        bst.root = bst.insert(bst.root, 32);
//        bst.root = bst.insert(bst.root ,45);
       
//       bst.leftview(bst.root);



//       return 0;

// }


#include <iostream>
using namespace std;
struct node
{
      int data;
      struct node *left;
      struct node *right;
      node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;

      }
};

class leftview{
      public:
      node *root;
      leftview(){
         root = NULL;
      }

      node *insert(node *root , int data){
            node *temp = new node (data);
            if (root == NULL){
                  root = temp;
                  return root;
            }
            else if (data<root->data){
                  root->left =insert(root->left,data);
            }
            else{
                  root->left =insert(root->left,data);
            }

      }

      void travrese(node *root){
            if (root == NULL){
                  return ;
            }
            cout<<root->data<<" ";
            travrese(root->left);
            travrese(root->right);
      }


};

int main(){

      leftview tree;
      tree.root = tree.insert(tree.root,10);
      tree.root = tree.insert(tree.root,20);
      tree.root = tree.insert(tree.root,6);
      tree.root = tree.insert(tree.root,8);
      tree.root = tree.insert(tree.root,15);
      tree.root = tree.insert(tree.root,4);

      tree.travrese(tree.root);
      cout<<endl;

      cout<<"root data of tree:"<<tree.root->data<<endl;
      cout<<"Left data of tree:"<<tree.root->left->data<<endl;
      cout<<"Right data of tree:"<<tree.root->right<<endl;


      return 0;
}