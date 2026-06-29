#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int j = 0;
    for(int i=1;i<n;i++){
        if(nums[j]!=0){
            j++;
        }
        else if(nums[i]!=0 && i>j){
            swap(nums[i],nums[j]);
            j++;
        }
    }
}
int main(){
    vector<int> nums = {2,1,0,0,12};
    moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<",";
    }
    return 0;
}