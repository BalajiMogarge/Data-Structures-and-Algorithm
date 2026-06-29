#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> countFrequencies(vector<int>& nums) {
        vector<vector<int>> output;
        int maxVal = *max_element(nums.begin(), nums.end());
        vector<int> frequency(maxVal+1,0);
        for(int i=0;i<nums.size();i++){
            frequency[nums[i]] += 1;
        }
        for(int i=0; i<=maxVal; i++){
            if(nums[i] > 0){
            output.push_back({i,frequency[i]});
            }
        }
        return output;
}
int main(){
    int size;
    vector<int> nums = {};
    cout<<"Enter the array size\n";
    cin>>size;
    for(int i=0; i<size; i++){
        int n;
        cin>>n;
        nums.push_back(n);
    }
    vector<vector<int>> result = countFrequencies(nums);
    for(int i = 0; i < result.size(); i++){
    cout << result[i][0] << " : " << result[i][1] << "\n";
    }
    return 0;
}