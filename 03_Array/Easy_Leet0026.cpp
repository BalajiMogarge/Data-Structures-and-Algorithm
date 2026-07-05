#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    if(nums.size()==0){
        return 0;
    }
    int pointer=0;
    for(int i=1;i<nums.size();i++){
        if(nums[pointer]!=nums[i]){
            pointer++;
            nums[pointer]=nums[i];
        }
    }
    nums.resize(pointer+1);
    return pointer+1;
}

int main(){
    vector<int> nums {1,2,2,3,4,4,4,5};
    removeDuplicates(nums);
    for(int x:nums){
        cout<<x<<"  ";
    }
    return 0;
}