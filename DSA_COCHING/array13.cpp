#include <iostream>
using namespace std;

int main()
{
    int nums[] = {4, 5, 6, 4, 1, 5, 2, 6, 6, 9, 4, 49, 9, 16, 6, 6};
    int len = sizeof(nums) / sizeof(nums[0]);

    int num[len]; // Array to store duplicate elements
    int k = 0;    // Index for storing duplicate elements

    for (int i = 0; i < len; i++)
    {
        bool duplicate = false;
        for (int j = 0; j < i; j++)
        {
            if (nums[i] == nums[j])
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
        {
            int count = 0;
            for (int j = i; j < len; j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
            }
            if (count > 1)
            {
                num[k++] = nums[i]; // Store the duplicate element
                cout << nums[i] << " is repeated " << count << " times" << endl;
            }
        }
    }

    if (k == 0)
    {
        cout << "No duplicate elements found." << endl;
    }

    return 0;
}
