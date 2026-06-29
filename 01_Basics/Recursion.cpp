#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if (n<1)
    {
        return;
    }
    cout<<n;
    print(n-1);
}
int factorial(int n,int x=1){
    if(n==0){
        return x;
    }
    return factorial(n-1,x*n);
}
bool ispalindrome(string s){
    string n;
    for(char c:s){
        if(isalnum(c)){
            c = tolower(c);
            n += c;
        }
    }
    for(int i=0;i<n.length()/2;i++){
        if(n[i]!=n[n.length()-1-i]){
            return false;
        }
    }
    return true;
}
int fib(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int frist = 0, second = 1;
    int fibo = 0;
    for(int i=3;i<=n;i++){
        fibo = frist + second;
        frist = second;
        second = fibo;
    }
    return fibo;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}