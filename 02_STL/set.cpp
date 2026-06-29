#include<bits/stdc++.h>
using namespace std;
int main(){
    //set - Sorted and Unique
    set <int> st;
    st.insert(1);
    st.emplace(3);
    st.emplace(2);
    st.emplace(4);
    st.emplace(4);

    set<int>::iterator it = st.find(3);
    st.erase(3);
    // st.erase(it);
    int ct = st.count(1);
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2);

    auto it3 = st.lower_bound(2);
    auto it4 = st.upper_bound(3);

    //multiset - ordered and saves not unique
    multiset<int> mst;
    mst.insert(1);
    mst.insert(1);
    mst.insert(2);
    mst.emplace(3);
    mst.erase(mst.find(1));

    //unordered set - not ordered and unique

    unordered_set<int> ust;
    ust.emplace(1);
    ust.emplace(2);

    return 0;
}