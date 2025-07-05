#include <iostream>
using namespace std;
struct node
{
    int data;          // data part
    struct node *next; // address part
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class SinglyLinkedList
{
public:
    /*
        head will always point to the beginning of list
        tail will always point to the end of list
    */
    node *head, *tail;

    SinglyLinkedList()
    {
        head = tail = NULL;
    }
    void addAtBeg(int data)
    {
        // 1. First create a new node with given data
        node *temp = new node(data);
        // Check if list is empty
        if (head == NULL)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
    }

    void addAtEnd(int data)
    {
        // 1. First create a new node with given data
        node *temp = new node(data);
        // 2. Check if the list is empty
        if (head == NULL)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    void delAtBeg()
    {

        // 1. Check if the list is empty
        if (head == NULL)
        {
            return;
        }
        else
        {

            node *ptr = head;
            head = head->next;
            delete ptr;
        }
    }

    void delAtEnd()
    {

        // 1. Check if the list is empty
        if (head == NULL)
        {
            return;
        }
        else
        {

            node *ptr = tail;
            node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            delete ptr;
        }
    }
    void traverse()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << endl;
    }
    int length()
    {
        node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void middle()
    {
        int mid = length() / 2;
        int count = 0;
        node *temp = head;
        while (count < mid)
        {
            count++;
            temp = temp->next;
        }
        cout << "Middle node is " << temp->data << endl;
    }

    void elementuniqe()
    {
        // node *temp = head;
        node *i = head;
        node *j = head->next;
        while (j->next != NULL)
        {
            int count = 0;
            while (i != NULL)
            {
                if (i->data == j->next->data)
                {
                    count = 1;
                }
                i = i->next;
            }
            j = j->next;
            if (count == 0)
            {
                cout << "Uniq elements is :" << i->data;
            }
            else
            {
                cout << "unique:" << i->data;
            }
        }
    }
};
int main()
{
    SinglyLinkedList obj;
    SinglyLinkedList obj2;
    SinglyLinkedList result;
    obj.addAtBeg(50);
    obj.addAtBeg(40);
    obj.addAtBeg(30);
    obj.addAtBeg(20);
    obj.addAtBeg(10);

    obj2.addAtBeg(70);
    obj2.addAtBeg(80);
    obj2.addAtBeg(100);

    // obj.delAtBeg();
    // obj.delAtEnd();
    cout << "Head's data = " << obj.head->data << endl; // 10
    cout << "Tail's data = " << obj.tail->data << endl; // 50
    cout << "Traversing linked list: \n";
    obj.traverse();
    cout << "Length of linked list is " << obj.length() << endl;
    obj.middle();

    obj.elementuniqe();
    return 0;
}

// #include <iostream>
// using namespace std;
// 
// struct node
// {
    // int data;
    // node *next;
// 
    // node(int data)
    // {
        // this->data = data;
        // this->next = NULL;
    // }
// };
// 
// class NewImplement
// {
// public:
    // node *head, *tail;
// 
    // NewImplement()
    // {
        // head = tail = NULL;
    // }
// 
    // void AdAtBeg(int data)
    // {
        // node *temp = new node(data);
// 
        // if (head == NULL)
        // {
            // head = tail = temp;
        // }
        // else
        // {
            // temp->next = head;
            // head = temp;
        // }
    // }
// 
    // void DelAtBeg()
    // {
        // node *temp = head;
// 
        // if (head == NULL)
        // {
            // head = tail = temp;
        // }
        // else
        // {
            // node *ptr = head;
            // head = head->next;
            // delete ptr;
        // }
    // }
// 
    // void AdAtEnd(int data)
    // {
        // node *temp = new node(data);
// 
        // if (head == NULL)
        // {
            // head = tail = NULL;
        // }
        // else
        // {
            // tail->next = temp;
            // tail = temp;
        // }
    // }
// 
    // void DelAtEnd()
    // {
        // node *temp = head;
// 
        // if (head == NULL)
        // {
            // head = tail = temp;
        // }
// 
        // else
        // {
            // node *ptr = tail;
// 
            // while (temp->next != tail)
            // {
                // temp = temp->next;
            // }
            // temp->next = NULL;
            // tail = temp;
            // delete ptr;
        // }
    // }
// 
    // void Traverse()
    // {
        // node *temp = head;
// 
        // while (temp != NULL)
        // {
            // cout << temp->data << "->";
            // temp = temp->next;
        // }
// 
        // cout << endl;
    // }
// };
// 
// int main()
// {
    // NewImplement Imp1;
// 
    // Imp1.AdAtBeg(10);
    // Imp1.AdAtBeg(20);
    // Imp1.AdAtEnd(5);
    // Imp1.AdAtBeg(30);
// 
    // Imp1.Traverse();
// 
    // cout << "Head's data : " << Imp1.head->data << endl;
    // cout << "Tail's data : " << Imp1.tail->data << endl;
// 
    // return 0;
// }
// 
// 