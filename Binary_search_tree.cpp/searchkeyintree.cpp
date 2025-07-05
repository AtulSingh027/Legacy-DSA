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

// class searchkey
// {
// public:
//       node *root;
//       searchkey()
//       {
//             root = NULL;
//       }

//       node *insert(node *ptr, int data)
//       {
//             node *temp = new node(data);
//             if (ptr == NULL)
//             {
//                   ptr = temp;
//                   return temp;
//             }
//             else if (data < ptr->data)
//             {
//                   ptr->left = insert(ptr->left, data);
//             }
//             else
//             {
//                   ptr->right = insert(ptr->right, data);
//             }
//       }

//       int search(node *ptr, int key)
//       {
//             if (ptr != NULL)
//             {
//                   if (key == ptr->data)
//                   {
//                         return 1;
//                   }
//                   else if (key < ptr->data)
//                   {
//                         search(ptr->left, key);
//                   }
//                   else
//                   {
//                         search(ptr->right, key);
//                   }
//             }
//       }
// };
// int main()
// {
//       searchkey s1;
//       int key;

//       s1.root = s1.insert(s1.root, 50);
//       s1.root = s1.insert(s1.root, 65);
//       s1.root = s1.insert(s1.root, 51);
//       s1.root = s1.insert(s1.root, 43);
//       s1.root = s1.insert(s1.root, 9);
//       s1.root = s1.insert(s1.root, 17);

//       cout << "Enter the element for search: ";
//       cin >> key;

//       int element = s1.search(s1.root, key);

//       if (element == 1)
//       {
//             cout << "Element is in the tree!. ";
//       }
//       else
//       {
//             cout << "Element is not in the tree!.";
//       }

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
            this->data = data;
            this->left = NULL;
            this->right = NULL;
      }
};

class search
{
public:
      node *root;
      search()
      {
            root = NULL;
      }

      node *insert(node *ptr, int data)
      {
            node *temp = new node(data);
            if (ptr == NULL)
            {
                  ptr = temp;
                  return ptr;
            }

            else if (data < ptr->data)
            {
                  ptr->left = insert(ptr->left, data);
            }
            else
            {
                  ptr->right = insert(ptr->right, data);
            }
      }

      int searchKey(node *root, int data)
      {
            if (root != NULL)
            {
                  if (data == root->data)
                  {
                        return 1;
                  }
                  else if (data < root->data)
                  {
                        searchKey(root->left, data);
                  }
                  else
                  {
                        searchKey(root->right, data);
                  }
            }
      }
};

int main()
{
      search s1;
      s1.root = s1.insert(s1.root, 10);
      s1.root = s1.insert(s1.root, 5);
      s1.root = s1.insert(s1.root, 15);
      s1.root = s1.insert(s1.root, 9);
      s1.root = s1.insert(s1.root, 25);
      s1.root = s1.insert(s1.root, 22);

      int key;
      cout << "Enetr the key to Search :";
      cin >> key;

      int searchData = s1.searchKey(s1.root, key);

      if (searchData==1){
            cout<<"Key is Found ";
      }
      else{
            cout<<"key is not found";
      }

      return 0;
}