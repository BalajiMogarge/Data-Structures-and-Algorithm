#include<iostream>
using namespace std;
int main(){
    pair <int,int> p = {1,2};
    pair <int,pair<int,int>> nested_p = {1,{2,3}};
    cout<<nested_p.second.first;
    pair <int,int> arr[] = {{1,2},{2,3},{4,5}};
    cout<<arr[2].first;
    return 0;
}