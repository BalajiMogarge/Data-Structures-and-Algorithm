#include <bits/stdc++.h>
using namespace std;
// C++ has a Built-in fuction in algorithm that is
// next_permutation(v.begin(),v.end()) returns vector
// Brute force solution by generating all possible solutions of array
// Optimal solution TC/SC:O(n)/O(1)
void reverseSubarray(int start, vector<int>& nums) {
  int end = nums.size() - 1;
  while (start < end) {
    swap(nums[start], nums[end]);
    start++;
    end--;
  }
}

int findPivotIndex(const vector<int>& nums) {
  int pivot = nums.size() - 2;
  while (pivot >= 0 && nums[pivot + 1] <= nums[pivot]) {
    pivot--;
  }
  return pivot;
}

void nextPermutation(vector<int>& nums) {
  int p = findPivotIndex(nums);

  if (p == -1) {
    reverseSubarray(0, nums);
    return;
  }

  int i = nums.size() - 1;
  while (nums[i] <= nums[p]) {
    i--;
  }

  swap(nums[p], nums[i]);
  reverseSubarray(p + 1, nums);
}

int main() {
  vector<int> nums = {2, 3, 3, 1};

  nextPermutation(nums);

  for (int num : nums) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
