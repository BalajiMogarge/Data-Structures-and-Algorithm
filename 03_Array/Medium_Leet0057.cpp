#include <bits/stdc++.h>
using namespace std;
// Brute Force : Trying all subarrays
// Time Complexity : O(n^2)
// Space Complexity : O(1)
// int maxSubArray(vector<int>& nums) {
//   int sum = 0;
//   int largest = 0;
//   for (int i = 0; i < nums.size(); i++) {
//     sum = 0;
//     for (int j = i; j < nums.size(); j++) {
//       sum += nums[j];
//       largest = max(sum, largest);
//     }
//   }
//   return largest;
// }

// Kadane's Algorithm
// Time Complexity : O(n)
// Space Complexity : O(1)
int maxSubArray(vector<int>& nums) {
  int largest = nums[0];
  int sum = nums[0];
  for (int i = 1; i < nums.size(); i++) {
    sum = max(nums[i], sum + nums[i]);
    largest = max(largest, sum);
  }
  return largest;
}

int main() {
  vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  cout << maxSubArray(nums);
  return 0;
}