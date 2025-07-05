#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode 
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public: 
    // Function to find the GCD of two numbers
    int GCD(int x, int y) 
    {
        if (y == 0)
            return x;
        return GCD(y, x % y);
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) 
    {
        ListNode* temp = head;

        while (temp != NULL && temp->next != NULL) 
        {
            int GCDVal = GCD(temp->val, temp->next->val);
            ListNode* newNode = new ListNode(GCDVal);

            // Insert the new node between temp and temp->next
            ListNode* remain = temp->next;
            temp->next = newNode;
            newNode->next = remain;

            // Move temp forward to remain (original temp->next)
            temp = remain;
        }

        return head;
    }
};

// Function to create a linked list from an array
ListNode* createLinkedList(int arr[], int n) 
{
    if (n == 0) return nullptr;
    
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    
    for (int i = 1; i < n; i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    
    return head;
}

// Function to print the linked list
void printLinkedList(ListNode* head) 
{
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Solution sol;

    // Input linked list: [18, 6, 10, 3]
    int arr[] = {18, 6, 10, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Create the linked list
    ListNode* head = createLinkedList(arr, n);

    // Insert GCDs between adjacent nodes
    head = sol.insertGreatestCommonDivisors(head);

    // Print the resulting linked list
    printLinkedList(head);

    return 0;
}
 