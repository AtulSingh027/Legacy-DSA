#include <iostream>
using namespace std;

int findMode(int nums[], int size) {
    int maxCount = 0;
    int mode = nums[0];

    for (int i = 0; i < size; ++i) {
        int count = 0;
        for (int j = 0; j < size; ++j) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mode = nums[i];
        }
    }

    return mode;
}

int main() {
    int nums[] = {1, 3, 3, 4, 2, 1, 3, 2, 4, 4, 4, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    int mode = findMode(nums, size);
    cout << "Mode of the array is: " << mode << endl;

    return 0;
}
