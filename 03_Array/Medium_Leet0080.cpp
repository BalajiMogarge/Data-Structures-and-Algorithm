#include<bits/stdc++.h>
using namespace std;
// This is not optimal as it use erase
// Time Complexity = O(N^2)
// int removeDuplicates(vector<int>& nums) {
//     int i = 2;
//     int n = nums.size();
//     while(i<n){
//         if(nums[i] == nums[i-2]){
//             nums.erase(nums.begin()+i);
//             n = nums.size();
//         }
//         else{
//             i++;
//         }
//     }
//     return i;
// }

// Optimal solution (2_Pointer)
// Time Complexity = O(N)
int removeDuplicates(vector<int>& nums) {
    if(nums.size() < 2) return nums.size();
    int k = 2;
    for(int i=2; i<nums.size();i++){
        if(nums[i] != nums[k-2]){
            nums[i] = nums[k];
            k++;
        }
    }
    return k;
}

int main(){
    vector<int> nums = {0,0,1,1,1,1,2,3,3};
    cout<<removeDuplicates(nums);
    return 0;
}