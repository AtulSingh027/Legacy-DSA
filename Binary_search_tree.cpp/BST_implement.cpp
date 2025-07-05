// #include <iostream>
// using namespace std;
// struct node
// {
//       int data;
//       struct node *left;
//       struct node *right;
//       node(int data)
//       {
//             this->data = data;
//             this->left = NULL;
//             this->right = NULL;
//       }
// };

// class BinarySearchTree
// {
// public:
//       node *root;
//       BinarySearchTree()
//       {
//             root = NULL;
//       }

//       node *insert(node *root, int data)
//       {
//             node *temp = new node(data);
//             if (root == NULL)
//             {
//                   root = temp;
//                   return root;
//             }
//             else if (data < root->data)
//             {
//                   root->left = insert(root->left, data);
//             }
//             else
//             {
//                   root->right = insert(root->right, data);
//             }
//       }
// };

// int main()
// {
//       BinarySearchTree obj;
//       obj.root = obj.insert(obj.root, 20);
//       obj.root = obj.insert(obj.root, 10);
//       obj.root = obj.insert(obj.root, 30);

//       cout << "Root's data = " << obj.root->data << endl;
//       cout << "Root's left's data = " << obj.root->left->data << endl;
//       cout << "Root's right's data = " << obj.root->right->data << endl;
// }

// #include <iostream>
// using namespace std;

// struct node
// {
//       int data;
//       struct node *left;
//       struct node *right;
//       node(int data)
//       {
//             this->data = data;
//             this->left = NULL;
//             this->right = NULL;
//       }
// };

// class Binary_search_Tree
// {
// public:
//       node *root;
//       Binary_search_Tree()
//       {
//             root = NULL;
//       }

//       node *insert(node *root, int data)
//       {
//             node *temp = new node(data);
//             if (root == NULL)
//             {
//                   root = temp;
//                   return root;
//             }
//             else if (data < root->data)
//             {
//                   root->left = insert(root->left, data);
//             }
//             else
//             {
//                   root->right = insert(root->right, data);
//             }
//       }
// };

// int main()
// {
//       Binary_search_Tree bst;
//       bst.root = bst.insert(bst.root, 50);
//       bst.root = bst.insert(bst.root, 40);
//       bst.root = bst.insert(bst.root, 60);

//       cout << " Main Root data :" << bst.root->data << endl;
//       cout << " Root's left data :" << bst.root->left->data << endl;
//       cout << " Root's Right data :" << bst.root->right->data << endl;

//       return 0;
// }

// #include <iostream>
// using namespace std;

// struct node
// {
//       int data;
//       struct node *left;
//       struct node *right;

//       node(int data)
//       {
//             this->data = data;
//             this->left = NULL;
//             this->right = NULL;
//       }
// };

// class ReImpleBST{
//       public:
//       node *root;

//       ReImpleBST(){
//             root = NULL;
//       }

//       node *insert(node *root ,int data)
//       {
//             node *temp = new node (data);

//             if(root == NULL)
//             {
//                   root = temp;
//                   return root;
//             }
//             else if(data < root->data)
//             {
//                   root->left = insert(root->left , data );
//             }
//             else
//             {
//                   root->right = insert(root->right , data);
//             }
//       }

// };

// int main(){

//       ReImpleBST bst;
//       bst.root = bst.insert(bst.root, 50);
//       bst.root = bst.insert(bst.root, 40);
//       bst.root = bst.insert(bst.root, 60);

//       cout << " Main Root data :" << bst.root->data << endl;
//       cout << " Root's left data :" << bst.root->left->data << endl;
//       cout << " Root's Right data :" << bst.root->right->data << endl;

//       return 0;
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
            this->left = NULL;
            this->right = NULL;
            this->data = data;
      }
};

class ImplementAgian
{
public:
      node *root;
      ImplementAgian()
      {
            root = NULL;
      }

      node *insert(node *root, int data)
      {
            node *temp = new node(data);

            if (root == NULL)
            {
                  root = temp;
            }
            else if (data < root->data)
            {
                  root->left = insert(root->left, data);
            }
            else if (data > root->data)
            {
                  root->right = insert(root->right, data);
            }
            return root; // Ensure we return the modified root
      }

      void PreOrder(node *ptr)
      {
            if (ptr != NULL)
            {
                  cout << ptr->data << " ";
                  PreOrder(ptr->left);
                  PreOrder(ptr->right);
            }
      }

      void InOrder(node *ptr)
      {
            if (ptr != NULL)
            {
                  InOrder(ptr->left);
                  cout << ptr->data << " ";
                  InOrder(ptr->right);
            }
      }

      void PostOrder(node *ptr)
      {
            if (ptr != NULL)
            {
                  PostOrder(ptr->left);
                  PostOrder(ptr->right);
                  cout << ptr->data << " ";
            }
      }

      void MaxData()
      {
            if (root != NULL)
            {
                  node *ptr = root;
                  while (ptr->right != NULL)
                  {
                        ptr = ptr->right;
                  }
                  cout << ptr->data << " ";
            }
            cout << endl;
      }

      void MinData()
      {
            if (root != NULL)
            {
                  node *ptr = root;
                  while (ptr->left != NULL)
                  {
                        ptr = ptr->left;
                  }
                  cout << ptr->data;
            }
            cout << endl;
      }

      void PrintOnlyLeaf(node *ptr)
      {
            if (ptr != NULL)
            {
                  if (ptr->left == NULL && ptr->right == NULL)
                  {
                        cout << ptr->data << " ";
                  }
                  PrintOnlyLeaf(ptr->left);
                  PrintOnlyLeaf(ptr->right);
            }
      }

      void PrintOneChild(node *ptr)
      {
            if (ptr != NULL)
            {
                  if ((ptr->left == NULL && ptr->right != NULL) || (ptr->left != NULL && ptr->right == NULL))
                  {
                        cout << ptr->data << " ";
                  }
                  PrintOneChild(ptr->left);
                  PrintOneChild(ptr->right);
            }
      }

      void TwoChildNodes(node *ptr)
      {
            if (ptr != NULL)
            {
                  if (ptr->left != NULL && ptr->right != NULL)
                  {
                        cout << ptr->data << " ";
                  }
                  TwoChildNodes(ptr->left);
                  TwoChildNodes(ptr->right);
            }
      }

      int SearchKey(node *ptr, int Key)
      {
            if (ptr != NULL)
            {
                  if (Key == ptr->data)
                  {
                        return 1;
                  }
                  else if (Key < ptr->data)
                  {
                        return SearchKey(ptr->left, Key);
                  }
                  else
                  {
                        return SearchKey(ptr->right, Key);
                  }
            }
            return 0; // Return 0 if Key not found
      }

      bool IsIdentical(node *ptr1, node *ptr2)
      {
            if (ptr1 == NULL && ptr2 == NULL)
            {
                  return true;
            }
            if (ptr1 != NULL && ptr2 != NULL)
            {
                  return (ptr1->data == ptr2->data &&
                          IsIdentical(ptr1->left, ptr2->left) &&
                          IsIdentical(ptr1->right, ptr2->right));
            }
            return false;
      }

      void MirrorTree(node *ptr)
      {
            if (ptr != NULL)
            {
                  swap(ptr->left, ptr->right);
                  MirrorTree(ptr->left);
                  MirrorTree(ptr->right);
            }
      }

      int Count(node *ptr)
      {
            int count = 0;
            if (ptr == NULL)
            {
                  return 0;
            }
            int left = Count(ptr->left);
            int right = Count(ptr->right);

            count = left + right + 1;
      }

      int SumofNodes(node *root)
      {
            if(root == NULL)
            {
                  return 0;
            }
            if(root->left == NULL && root->right == NULL)
            {
                  return root->data;
            }
            return SumofNodes(root->left) + SumofNodes(root->right);

      }
      
      


};

int main()
{
      ImplementAgian I, I2; // Separate instances for each tree

      // Inserting nodes into the first tree and setting root
      I.root = I.insert(I.root, 10);
      I.root = I.insert(I.root, 20);
      I.root = I.insert(I.root, 67);
      I.root = I.insert(I.root, 93);
      I.root = I.insert(I.root, 14);
      I.root = I.insert(I.root, 7);
      I.root = I.insert(I.root, 5);
      I.root = I.insert(I.root, 9);

      // Inserting nodes into the second tree and setting root
      I2.root = I2.insert(I2.root, 10);
      I2.root = I2.insert(I2.root, 20);
      I2.root = I2.insert(I2.root, 67);
      I2.root = I2.insert(I2.root, 93);
      I2.root = I2.insert(I2.root, 14);
      I2.root = I2.insert(I2.root, 7);
      I2.root = I2.insert(I2.root, 5);
      I2.root = I2.insert(I2.root, 9);

      cout << "Print Data In PreOrder Form: ";
      I.PreOrder(I.root);

      cout << "\n---------------x------------------\n";

      cout << "\nMaximum Data in The Tree Is: ";
      I.MaxData();

      cout << "\n----------------x-----------------\n";

      cout << "Minimum Data in The Tree Is: ";
      I.MinData();

      cout << "\n-----------------x----------------\n";

      cout << "Leaf Nodes Are: ";
      I.PrintOnlyLeaf(I.root);

      cout << "\n---------------x------------------\n";

      cout << "Only One Child Nodes Are: ";
      I.PrintOneChild(I.root);

      cout << "\n---------------x------------------\n";

      cout << "Two Child Nodes Are: ";
      I.TwoChildNodes(I.root);

      cout << "\n---------------x------------------\n";

      int Data = I.SearchKey(I.root, 756);

      if (Data == 1)
      {
            cout << "Key Is Present in The Tree.\n";
      }
      else
      {
            cout << "Key IS *Not* Present In The Tree\n";
      }

      cout << "\n---------------x------------------\n";

      if (I.IsIdentical(I.root, I2.root))
      {
            cout << "These Are Identical Trees.\n";
      }
      else
      {
            cout << "Not Identical Trees.\n";
      }

      cout << "\n---------------x------------------\n";

      I.MirrorTree(I.root);
      cout << "Postorder Traversal after Mirroring: ";
      I.PostOrder(I.root);

      cout << "\n---------------x------------------\n";

      int Total = I.Count(I.root);
      cout<<"All Nodes in the Tree Is : "<<Total<<endl;

      cout << "\n---------------x------------------\n";

      int Sum = I.SumofNodes(I.root);
      cout<<"The Sum of All Nodes Is : "<<Sum<<endl;

      cout << "\n---------------x------------------\n";





      return 0;
}
