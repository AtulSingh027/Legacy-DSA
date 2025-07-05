#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *left; 
    struct node *right; 
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class BinarySearchTree{
    public:
        node *root;
        BinarySearchTree(){
            root = NULL;
        }
        
        node *insert(node *root, int data){
            node *temp = new node(data);
            if(root == NULL){
                root = temp;
                return temp;
            }
            else if(data < root->data){
                root->left = insert(root->left, data);
            }
            else{
                root->right = insert(root->right, data);
            }
        }

        void preorder(node *ptr){
            // base case
            if(ptr != NULL){
                cout << ptr->data << " "; // Visit
                // recursive  cases
                preorder(ptr->left); // Left
                preorder(ptr->right); // Right
            }
            else{
                return;
            }
        }

        void inorder(node *ptr){
            // base case
            if(ptr != NULL){                
                // recursive  cases
                inorder(ptr->left); // Left
                cout << ptr->data << " "; // Visit
                inorder(ptr->right); // Right
            }
            else{
                return;
            }
        }

        void postorder(node *ptr){
            // base case
            if(ptr != NULL){                
                // recursive  cases
                postorder(ptr->left); // Left                
                postorder(ptr->right); // Right
                cout << ptr->data << " "; // Visit
            }
            else{
                return;
            }
        }

        void maximum(node *root){
            while(root->right != NULL){
                root = root->right;
            }
            cout << "\nThe maximum data = " << root->data << endl;
        }

        void minimum(node *root){
            while(root->left != NULL){
                root = root->left;
            }
            cout << "\nThe minimum data = " << root->data << endl;
        }

        void leafNodes(node *ptr){
            // base case
            if(ptr != NULL){                
                if(ptr->left == NULL && ptr->right == NULL){
                    cout << ptr->data << " "; // Visit
                }
                // recursive  cases
                leafNodes(ptr->left); // Left                
                leafNodes(ptr->right); // Right
                
            }
            else{
                return;
            }
        }
         

        void search(node *root, int key){
            if(root != NULL){
                if(root->data == key){
                    cout << key << " is found in BST\n";
                    return;
                }
                else if(root->data > key){
                    search(root->left, key);
                }
                else{
                    search(root->right, key);
                }
            }
        }
};

int main(){
    BinarySearchTree obj;
    obj.root = obj.insert(obj.root, 50);
    obj.root = obj.insert(obj.root, 70);
    obj.root = obj.insert(obj.root, 60);
    obj.root = obj.insert(obj.root, 40);
    obj.root = obj.insert(obj.root, 45);
    obj.root = obj.insert(obj.root, 30);
    cout << "PRE-ORDER\n";
    obj.preorder(obj.root);

    cout << "\nIN-ORDER\n";
    obj.inorder(obj.root);


    cout << "\nPOST-ORDER\n";
    obj.postorder(obj.root);
    
    obj.maximum(obj.root);
    obj.minimum(obj.root);
    cout << "\nPrinting only leaf nodes from BST....\n";
    obj.leafNodes(obj.root);

    int key;
    cout << "Enter key to be searched in BST: ";
    cin >> key;
    obj.search(obj.root, key);
}