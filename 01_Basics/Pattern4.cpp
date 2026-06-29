#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch = 'A';
    for (int i = 0; i < n; i++){
        for(int j = n-i-1; j > 0; j--){
            cout<<' ';
        }
        ch='A';
        for(int j = 0; j <= i; j++){
            cout<<ch;
            ch++;
        }
        ch--;
        for(int j = 0; j < i; j++){
            ch--;
            cout<<ch;
        }
        cout<<"\n";
    }
    return 0;
}