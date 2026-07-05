#include<bits/stdc++.h>
using namespace std;
bool isSpecial(vector<vector<int>>& mat, int i, int j){
    if(mat[i][j] != 1) return false;
    bool isSpecial = true;
    int count = 0;
    for(int k = 0; k<mat.size(); k++){
        if(mat[k][j]==1){
            count++;
        }
    }
    for(int k = 0; k<mat[i].size(); k++){
        if(mat[i][k]==1){
            count++;
        }
    }
    if(count == 2){
        return true;
    }
    else{
        return false;
    }
}
int numSpecial(vector<vector<int>>& mat) {
    int count = 0;
        for(int i = 0; i<mat.size(); i++){
            for(int j = 0; j<mat[i].size(); j++){
                if(isSpecial(mat, i ,j)){
                    count++;
                }
            }
        }
    return count;
}
int main(){
    vector<vector<int>> mat = {
    {1,0,0},
    {0,0,1},
    {1,0,0}
};
    cout<<numSpecial(mat);
    return 0;
}