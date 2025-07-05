// #include <iostream>
// using namespace std;
// struct node
// {
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// class SinglyLinkedList
// {
// public:
//     node *head, *tail;
//     SinglyLinkedList()
//     {
//         head = tail = NULL;
//     }
//     void addAtEnd(int data)
//     {
//         node *temp = new node(data);
//         if (head == NULL)
//         {
//             head = tail = temp;
//         }
//         else
//         {
//             tail->next = temp;
//             tail = temp;
//         }
//     }
//     void traverse()
//     {
//         node *temp = head;
//         while (temp != NULL)
//         {
//             cout << temp->data << "->";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
//     void addAtMid(int data)
//     {
//         node *newtemp = new node(data);
//         node *slow = head;
//         node *fast = head;

//         while (fast->next != NULL && fast->next->next != NULL)
//         {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         newtemp->data = data;
//         newtemp->next = slow->next;
//         slow->next = newtemp;
//     }
// };
// int main()
// {
//     SinglyLinkedList obj;

//     obj.addAtEnd(1);
//     obj.addAtEnd(2);
//     obj.addAtEnd(3);
//     obj.addAtEnd(4);
//     obj.addAtEnd(5);
//     cout << "Before adding middle element : \n";
//     obj.traverse();

//     cout << "\nAfter adding middle element : \n";
//     obj.addAtMid(8);

//     obj.traverse();
// }

#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class AdAtmid
{
public:
    node *haid, *tail;
    AdAtmid()
    {
        haid = tail = NULL;
    }

    void adATbeg(int data)
    {
        node *temp = new node(data);
        if (haid == NULL)
        {
            haid = tail = temp;
        }
        else
        {
            temp->next = haid;
            haid = temp;
        }
    }

    void adATEnd(int data)
    {
        node *temp = new node(data);
        if (haid == NULL)
        {
            haid = tail = NULL;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    void DelATBeg()
    {
        node *temp = haid;

        if (haid == NULL)
        {

            return;
        }
        else
        {
            haid = haid->next;
            delete temp;
        }
    }

    void DelATEnd()
    {
        if (haid == NULL)
        {
            return;
        }
        else
        {
            node *temp = tail;
            node *ptr = haid;
            while (ptr->next != tail)
            {
                ptr = ptr->next;
            }
            ptr->next = NULL;
            tail = ptr;
            delete temp;
        }
    }

    void traverse()
    {
        node *temp = haid;
        if (haid == NULL)
        {
            return;
        }
        while (temp != NULL)
        {

            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << endl;
    }

    void countlength()
    {
        node *temp = haid;
        int count = 1;

        if (haid == NULL)
        {
            return;
        }
        else
        {
            while (haid->next != NULL)
            {
                count++;
                haid = haid->next;
            }
            cout << "The lenght of SLL is :" << count << endl;
        }
    }

    void insertATmiddle(int data){
        node *temp = new node (data);
        node *ptr = NULL;
        node *slow = haid;
        node *fast = tail;

        while (fast->next!=NULL &&fast->next->next!=NULL )
        {
            ptr = slow;
            slow = slow->next;
            fast = fast->next->next;

        }
        temp->data = data;
        temp->next = slow->next;
        slow->next = temp;

    }
};

int main()
{

    AdAtmid a1;
    a1.adATbeg(10);
    a1.adATbeg(20);
    a1.adATbeg(30);
    a1.adATbeg(40);
    

    a1.traverse();

    a1.insertATmiddle(55);
    a1.traverse();

    return 0;
}