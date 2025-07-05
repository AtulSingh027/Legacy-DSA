// #include <iostream>
// using namespace std;

// struct node{
//     int data;
//     struct node *left;
//     struct node *right;

//     node(int data)
//     {
//         this->data = data ;
//         this->left = NULL;
//         this->right = NULL;
//     }

// };

// class Solution{
//     public:

//     node *root;

//     Solution(){
//         root = NULL;
//     }

//     node *insert(node *root , int data )
//     {
//         node *temp = new node (data);
//         if(root == NULL)
//         {
//            root = temp;
//            return temp;
//         }
//         else if(root->data > data)
//         {
//             root->left = insert(root->left , data );
//         }
//         else{
//             root->right = insert(root->right , data);
//         }
//     }

//     int CountNodes(node *root )
//     {
//         int count = 0;

//         if(root == NULL)
//         {
//             return 0;
//         }
//         int Left = CountNodes(root->left);
//         int Right = CountNodes(root->right);

//         count = Left + Right + 1;

//         return count;

//     }


// };
// int main(){

//     Solution s1;

//     s1.root = s1.insert(s1.root , 10);
//     s1.root = s1.insert(s1.root , 30);
//     s1.root = s1.insert(s1.root , 5);
//     s1.root = s1.insert(s1.root , 15);
//     s1.root = s1.insert(s1.root , 9);

//     cout<<"Total Nodes In the Tree : "<<s1.CountNodes(s1.root);
//     return 0;

// }


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

class CountNodes{
    public:
    node *root;
    CountNodes()
    {
        root = NULL;
    }
    
    node *insert(node *root , int data)
    {
        node *temp = new node(data);

        if(root == NULL)
        {
            root = temp;
        }
        else if(data > root->data)
        {
            root->right = insert(root->right , data);
        }
        else if(data < root->data)
        {
            root->left = insert(root->left , data);
        }

        return root;
    }

    int Count(node *ptr){
        int count  = 0;
        if(ptr == NULL)
        {
           return 0;
        }
        int left = Count(ptr->left);
        int right = Count(ptr->right);

        count  = left + right + 1;
    
    }

};


int main(){

    CountNodes c;
    c.root = c.insert(c.root,10);
    c.root = c.insert(c.root,7);
    c.root = c.insert(c.root,13);
    c.root = c.insert(c.root,17);
    c.root = c.insert(c.root,3);
    c.root = c.insert(c.root,5);
    c.root = c.insert(c.root,9);
    c.root = c.insert(c.root,1);


    int total = c.Count(c.root);
    cout<<"Total Nodes In Tree: "<<total; 
    
    return 0;
}