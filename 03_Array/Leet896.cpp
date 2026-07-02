#include<bits/stdc++.h>
using namespace std;
bool isMonotonic(vector<int>& nums) {
        bool increasing = true;
        bool decreasing = true;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i+1]) increasing = false;
            if (nums[i] < nums[i+1]) decreasing = false;
            
            if (!increasing && !decreasing) return false;
        }
        return true;
    }
int main(){
    vector<int> nums = {1,2,2,3,4,5};
    cout<<isMonotonic(nums);
    return 0;
}