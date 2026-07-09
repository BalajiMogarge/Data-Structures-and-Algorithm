#include <bits/stdc++.h>
using namespace std;
// Brute force methode
// Time Complexity: O(n^2) — One pass
// Space Complexity: O(1)
// int majorityElement(vector<int>& nums) {
//   for (int i = 0; i < nums.size(); i++) {
//     int count = 0;
//     for (int j = 0; j < nums.size(); j++) {
//       if (nums[j] == nums[i]) {
//         count++;
//       }
//     }
//     if (count > (nums.size() / 2)) return nums[i];
//   }
//   return -1;
// }

// Better solution
// Time Complexity: O(n * log(n)) + O(n) — Two pass
// Space Complexity: O(n)
// int majorityElement(vector<int>& nums) {
//   map<int, int> num;
//   for (int i = 0; i < nums.size(); i++) {
//     num[nums[i]]++;  // O(log(n))
//   }
//   for (auto it : num) {
//     if (it.second > (nums.size() / 2)) {
//       return it.first;
//     }
//   }
//   return -1;
// }

// Boyer-Moore Voting Algorithm (The Optimal Approach)
// Time Complexity: O(n) — One pass
// Space Complexity: O(1)
int majorityElement(vector<int>& nums) {
  int candidate;
  int count = 0;
  int n = nums.size();
  for (int i = 0; i < n; i++) {
    if (count == 0) {
      candidate = nums[i];
      count = 1;
    } else if (nums[i] == candidate) {
      count++;
    } else {
      count--;
    }
  }
  if ((n + count) / 2 > (n / 2)) {
    return candidate;
  }
  return -1;
}

int main() {
  vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
  cout << majorityElement(nums);
  return 0;
}