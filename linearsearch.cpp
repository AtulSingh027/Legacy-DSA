#include <iostream>
using namespace std;
bool linear(int nums[], int len, int key)
{
    for (int i = 0; i < len; i++)
    {
        if (nums[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int nums[] = {10, 51, 61, 56, 51, 4, 89, 6, 6};
    int len = sizeof(nums) / sizeof(nums[0]);
    int key;
    cout << "enter the key you want to search:";
    cin >> key;

    bool found = linear(nums, len, key);
    if (found)
    {
        cout << "key is present " << endl;
    }
    else
    {
        cout << "key is absent." << endl;
    }

    return 0;
}