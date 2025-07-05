#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;

    node(int data){
        this->left = NULL;
        this->right = NULL;
        this->data = data;
    }
    
};

class BST{
    public:
    node *root;
    BST(){
        root = NULL;
    }
    
    node *insert(node *root, int data)
    {
        node *temp = new node(data);

        if (root == NULL)
        {
           root = temp;
        }
        else if(data < root->data)
        {
            root->left = insert(root->left, data);
        }
        else if(data > root->data)
        {
           root->right = insert(root->right, data);
        }
        return root;
    }

};

int main(){
    return 0;
}