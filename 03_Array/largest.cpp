#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2, 5, 1, 3, 0};
    int max = arr[0];
    int secondMax = arr[0];
    for(int i=1;i<(sizeof(arr)/sizeof(arr[0]))-1;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=1;i<(sizeof(arr)/sizeof(arr[0]))-1;i++){
        if(arr[i]>secondMax && arr[i] != max){
            secondMax = arr[i];
        }
    }
    cout<<"Largest number in array is : "<<max<<endl;
    cout<<"Second Largest number in array is : "<<secondMax<<endl;
    return 0;
}