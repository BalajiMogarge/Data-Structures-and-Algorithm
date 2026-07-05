#include<bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums){
    int Max = 0;
    int n = nums.size();
    int count = 0;
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            count++;
            Max = max(Max,count);
        }
        else{
            count = 0;
        }
    }
    return Max;
}
int main(){
    vector<int> nums = {1,1,0,0,1,1,1};
    cout<<findMaxConsecutiveOnes(nums);
    return 0;
}