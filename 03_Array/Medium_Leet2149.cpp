#include <bits/stdc++.h>
using namespace std;
// Can besolved by TC/SC:O(n^2)/O(1)

// Optimal solution TC/SC:O(n)/O(n)
vector<int> rearrangeArray(vector<int>& nums) {
  int n = nums.size();
  vector<int> reArr(n);
  int j = 0;
  int k = 1;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] > 0) {
      reArr[j] = nums[i];
      j += 2;
    } else {
      reArr[k] = nums[i];
      k += 2;
    }
  }
  return reArr;
}
int main() {
  vector<int> nums = {3, 1, -2, -5, 2, -4};
  vector<int> num = rearrangeArray(nums);
  for (auto i : num) {
    cout << i << " ";
  }
  return 0;
}