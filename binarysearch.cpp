// #include <iostream>
// using namespace std;
// int binarysearch(int nums[], int len, int key)
// {
//     int left = 0;
//     int right = len - 1;
//     while (left <= right)
//     {
//         int mid = left + (right - left) / 2;
//         if (nums[mid] == key)
//         {
//             return mid;
//         }
//         else if (nums[mid] > key)
//         {
//             right=mid-1;
//         }
//         else if (nums[mid] < key)
//         {
//           left=mid+1;
//         }
//         else{
//             return -1;
//         }
//     }
// ===========================================

// int main()
// {
//     int nums[] = {1,5,6,9,11,15,17,19};
//     int len = sizeof(nums) / sizeof(nums[0]);
//     int key = 17;

//     int index=binarysearch(nums,len,key);
//     if (index!=-1){
//         cout<<"elemnt is found at index :"<<index<<endl;
//     }
//     else{
//         cout<<"element is not found";
//     }

//     return 0;
// }
// ==========================================================
/*  FIND THE LEFT MOST OCCURANCE AND RIGHT MOST OCCURANCE*/
// #include <iostream>
// using namespace std;
// int leftoccurance(int nums[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;
//     int ans = -1;
//     while (start <= end)
//     {
//         int mid = start+ (end-start) / 2;
//         if (nums[mid] == key)
//         {
//             ans = mid;
//             end=mid-1;
//         }
//         else if (nums[mid] < key)
//         {
//             start = mid +1 ;
//         }
//         else if (nums[mid] > key)
//         {
//             end = mid - 1;
//         }

//     }
//     return ans;
// }
// int rightoccurance(int nums[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;
//     int ans = -1;
//     while (start <= end)
//     {
//         int mid = start+ (end-start) / 2;
//         if (nums[mid] == key)
//         {
//             ans = mid;
//             start=mid+1;
//         }
//         else if (nums[mid] < key)
//         {
//             start = mid +1 ;
//         }
//         else if (nums[mid] > key)
//         {
//             end = mid - 1;
//         }

//     }
//     return ans;
// }

// int main()
// {
//     int nums[6] = {1, 2, 3, 3, 3,3 };
//     int leftindex=leftoccurance(nums,6,3);

//     cout<<"the left most elemnt is index at:"<<leftindex<<endl;
//      int rightindex=rightoccurance(nums,6,3);
//     cout<<"the right most elemnt is index at:"<<rightindex<<endl;
//     return 0;
// }
// ==========================================
/* find the peak elemnt of mountain array*/
// #include <iostream>
// using namespace std;

// int findPeakElement(int nums[], int n) {
//     int left = 0;
//     int right = n - 1;

//     while (left < right) {
//         int mid = left + (right - left) / 2;
//         if (nums[mid] < nums[mid + 1]) {

//             left = mid+1;
//         } else {

//             right = mid ;
//         }
//     }

//     return left;
// }

// int main() {
//     int nums[] = {1, 3, 5, 7, 10, 6, 4, 2};
//     int n = sizeof(nums) / sizeof(nums[0]);
//     int peakIndex = findPeakElement(nums, n);

//     cout<<"the peak elemnt index of the arary is :"<<peakIndex<<endl<< "value :"<<nums[peakIndex]<<endl;

//     return 0;
// }

// ============================================
// #include <iostream>
// using namespace std;
// int peakelemnt(int nums[],int len){
// int start=0;
// int end=len-1;
// while(start<=end){
// int mid=end+(start-end)/2;
// if (nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
// return mid;
// }
// else if (nums[mid]>nums[mid-1]){
// start = mid+1;
// }
// else{
// end=mid-1;
// }
// }
// return -1;

// }
// int main(){
// int nums[]={1,2,3,5,6,3,4};
// int len=sizeof(nums)/sizeof(nums[0]);
// int peakindex=peakelemnt(nums,len);

// if (peakindex!=-1){
// cout<<"the peak elment in the array at index:"<<peakindex<<endl;
// }
// else{
// cout<<"no peak elemnt found."<<endl;
// }
// return 0;
//
// }
#include <iostream>
using namespace std;

void rotateArray(int nums[], int size, int k) {
    int len = size;
    int temp[len];

    // Rotate the array
    for (int i = 0; i < len; ++i) {
        temp[(i + k) % len] = nums[i];
    }

    // Copy the rotated array back to the original array
    for (int i = 0; i < len; ++i) {
        nums[i] = temp[i];
    }
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    int k = 2;

    rotateArray(myArray, size, k);

    // Output the rotated array
    for (int i = 0; i < size; ++i) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}
