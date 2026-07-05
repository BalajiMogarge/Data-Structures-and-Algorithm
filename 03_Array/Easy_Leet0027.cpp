#include<bits/stdc++.h>
using namespace std;
int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = nums.size();
        
        while (i < j) {
            if (nums[i] == val) {
                nums[i] = nums[j - 1];
                j--;
            } else {
                i++;
            }
        }
        return j;
}
int main(){
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    cout<<removeElement(nums,val);
    return 0;
}