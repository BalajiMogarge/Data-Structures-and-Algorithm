#include<bits/stdc++.h>
using namespace std;
int findTheWinner(int n, int k){
    int loser = 0;
    vector<int> circle;
    for (int i = 1; i <= n; i++){
        circle.push_back(i); 
    }
    while(circle.size()>1){
        loser = ((loser + k - 1) % circle.size());
        circle.erase(circle.begin() + loser);
    }
    return circle[0];
}
int main(){
    int n = 5;
    int k = 2;
    cout<<findTheWinner(n,k);
    return 0;
}