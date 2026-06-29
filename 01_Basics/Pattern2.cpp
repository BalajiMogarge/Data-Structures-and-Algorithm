#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=true;
    for(int i = 1;i<=n;i++){
        if(i%2==0){
            count=false;
        }
        else{
            count=true;
        }
        for(int j=1;j<=i;j++){
            cout<<count;
            count=!count;
        }
        cout<<'\n';
    }
    return 0;
}