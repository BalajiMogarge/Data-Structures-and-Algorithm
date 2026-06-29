#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the array\n";
    int N[n] = {};
    for(int i=0;i<n;i++){
        cin>>N[i];
    }
    
    //Hashing
    int hash[11] = {};
    for(int i=0;i<n;i++){
        hash[N[i]] += 1;
    }
    
    cout<<"Enter the size of Queries\n";
    int q;
    cin>>q;
    while(q>0){
        int Number;
        cin>>Number;
        cout<<hash[Number]<<"\nEnter next Quire";
        q--;
    }
    return 0;
}