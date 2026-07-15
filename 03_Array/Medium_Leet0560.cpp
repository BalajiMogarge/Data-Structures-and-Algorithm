#include <bits/stdc++.h>
using namespace std;
// Sliding Window works only if nums contain non-negative numbers
// TC/SC:O(n)/O(1)
// int subarraySum(vector<int>& nums, int k) {
//   int count = 0;
//   int sum = 0;
//   int i = 0, j = 0;
//   while (j < nums.size()) {
//     sum += nums[j];
//     while (sum > k && i <= j) {
//       sum -= nums[i];
//       i++;
//     }
//     if (sum == k) {
//       count++;
//     }
//     j++;
//   }
//   return count;
// }

// Solving using Brute Force Methode by evaluating every single subarray

// using Prefix_Sum & HashMap
// TC/SC:O(n)/O(n)
int subarraySum(vector<int>& nums, int k) {
  int count = 0;
  unordered_map<int, int> prefix_sum;
  // Here we use Unordered_Map to store (Prefic_Sum, Count) pair
  prefix_sum[0] = 1;
  int current_sum = 0;
  for (int num : nums) {
    current_sum += num;
    int target = current_sum - k;
    // If map.find(target) gives that target is not in map then that points to
    // map.end(), So following condition say "If target is found" Can also be
    // done as prefix_sum.contain(target) or can also add directly without
    // condition if (prefix_sum.find(target) != prefix_sum.end()) {
    //   count += prefix_sum[target];
    // }
    count += prefix_sum[target];
    prefix_sum[current_sum]++;
  }
  return count;
}

int main() {
  vector<int> nums = {1, 1, 2, 1};
  int k = 2;
  cout << subarraySum(nums, k);
  return 0;
}