#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int data) : data(data), left(nullptr), right(nullptr) {}
};

class BST
{
public:
    node *root;

    // BST() : root(nullptr) {} // Initialize root to nullptr
    BST(){
        root = NULL;
    }
    node *insert(node *root, int data)
    {
        if (root == nullptr)
        {
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

    int sumLeaves(node *root)
    { // Renamed for clarity
        if (root == nullptr)
        {
            return 0;
        }
        if (root->left == nullptr && root->right == nullptr)
        {
            return root->data;
        }
        return sumLeaves(root->left) + sumLeaves(root->right);
    }
};

int main()
{
    BST bst;

    bst.root = bst.insert(bst.root, 4);
    bst.root = bst.insert(bst.root, 9);
    bst.root = bst.insert(bst.root, 0);
    bst.root = bst.insert(bst.root, 5);
    bst.root = bst.insert(bst.root, 1);

    int sum = bst.sumLeaves(bst.root);
    cout << "The sum of all Leaf nodes: " << sum << endl;

    return 0;
}
