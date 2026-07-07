#include <bits/stdc++.h>
using namespace std;
// Optimal with O(n) time complexity and O(1) space complexity
// But can be done in one pass
// void sortColors(vector<int>& nums)
// {
//     int count0 = 0;
//     int count1 = 0;
//     for (int i = 0; i < nums.size(); i++) {
//         if (nums[i] == 0) {
//             count0++;
//         } else if (nums[i] == 1) {
//             count1++;
//         }
//     }
//     for (int i = 0; i < nums.size(); i++) {
//         if (i < count0) {
//             nums[i] = 0;
//         } else if (i < count0 + count1) {
//             nums[i] = 1;
//         } else {
//             nums[i] = 2;
//         }
//     }
// }

// More Efficient code by one pass by maintaining 3 pointer low, mid, high
void sortColors(vector<int>& nums)
{
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> nums = { 1, 1, 2, 2, 0, 1, 0, 2 };
    sortColors(nums);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}