#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>m;
    m [1] = 2;
    m.emplace(3,1);
    m.insert({2,4});
    for(auto it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<m[1]<<endl;
    auto it1 = m.find(2);
    cout<<(*it1).second;
    //multimap - can store duplicate key
    multimap<int,int> mmp;
    //unordered map - not oreder keys
    unordered_map<int,int> um;
    return 0;
}