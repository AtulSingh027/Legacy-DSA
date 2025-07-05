#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Sloution
{
    public:
    node *head, *Tail;

    Sloution()
    {
        head = Tail = NULL;
    }



    void AdtoBeg(int data)
    {

        node *temp = new node(data);

        if (head == NULL)
        {
            head = Tail = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
    }

    void AdtoEnd(int data)
    {

        node *temp = new node(data);

        if (head == NULL)
        {
            head = Tail = temp;
        }
        else
        {
            Tail->next = temp;
            Tail = temp;
        }
    }

    int NodeCount()
    {

        node *temp = head;

        int count = 0;

        while (temp != NULL)
        {
            temp = temp->next;
            count++;
        }

        return count;
    }
};

int main()
{
    Sloution s1;

    s1.AdtoBeg(20);
    s1.AdtoBeg(30);
    s1.AdtoBeg(40);
    s1.AdtoBeg(60);
    s1.AdtoBeg(50);
    s1.AdtoBeg(70);


    int count = s1.NodeCount();

    cout<<"The Number Of Nodes In the List : "<<count;
    return 0;
}