#include<bits/stdc++.h>
using namespace std;
bool circularSorted(vector<int> nums){
    int count = 0;
    int n = nums.size();
    for(int i=0;i<n-1;i++){
        if(nums[i]>nums[i+1]){
            count = count + 1;
        }
    }
    if(nums[n - 1] > nums[0]) {
        count++;
    }
    if(count == 1 || count == 0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    vector <int> v = {5,3,4,5,10};
    if(circularSorted(v)){
        cout<<"Your array is sorted";
    }
    else{
        cout<<"Your array is not sorted";
    }
    return 0;
}