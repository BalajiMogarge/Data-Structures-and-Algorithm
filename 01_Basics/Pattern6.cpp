#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l = 2*n-1;
    int arr[4];
    int s;
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++){
            arr[0]=i;
            arr[1]=2*n-2-i;
            arr[2]=j;
            arr[3]=2*n-2-j;
            s=arr[0];
            for(int i=1;i<4;i++){
                if(arr[i]<s){
                    s=arr[i];
                }
            }
            cout<<n-s;
        }
        cout<<'\n';
    }
    return 0;
}