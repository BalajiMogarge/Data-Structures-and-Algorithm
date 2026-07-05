#include<bits/stdc++.h>
using namespace std;
// Front to Back code
// void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//     if(n == 0){
//         return;
//     }
    
//     int j = 0;
//     int i = 0;
    
//     while (i < m + j && j < n) { 
//         if(nums1[i] >= nums2[j]){
//             nums1.insert(nums1.begin() + i, nums2[j]);
//             nums1.pop_back();
//             j++;
//         }
//         i++;
//     }
    
//     while(j < n) {
//         nums1[i] = nums2[j];
//         i++;
//         j++;
//     }
// }

// Back to Front Code (Optimal as it don't need to use insert fuction)
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int N = n - 1;
    int M = m - 1;
    for(int i = (n+m-1); i >= 0; i--){
        if(N < 0){
            break;
        }
        if(M < 0 || nums1[M]<=nums2[N]){
            nums1[i] = nums2[N];
            N--;
        }
        else if(nums1[M]>nums2[N]){
            nums1[i] = nums1[M];
            M--;
        }
    }
}

int main(){
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3, n = 3;
    
    merge(nums1, m, nums2, n);
    
    for(int i=0; i < m+n; i++){
        cout << nums1[i] << " ";
    }
    return 0;
}
