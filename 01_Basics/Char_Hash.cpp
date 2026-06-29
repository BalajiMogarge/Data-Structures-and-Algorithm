#include<bits/stdc++.h>
using namespace std;

int main(){
    string text;
    cout<<"Enter the string\n";
    cin>>text;
    int n = text.length();
    
    //Hashing
    int hash[25] = {};
    for(int i=0;i<n;i++){
        hash[(int)(text[i])-'a'] += 1;
    }
    
    cout<<"Enter the size of Queries\n";
    int q;
    cin>>q;
    while(q>0){
        char c;
        cout<<"\nEnter next Quire\n";
        cin>>c;
        cout<<hash[(int)c-'a'];
        q--;
    }
    return 0;
}