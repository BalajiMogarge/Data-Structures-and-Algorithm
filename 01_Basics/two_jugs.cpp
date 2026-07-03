#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> factors(int x){
    vector<int> facs;
    for(int i = 1; i * i <= x; i++){
        if(x % i == 0){
            facs.push_back(i);
            if(i * i != x) { 
                facs.push_back(x / i);
            }
        }
    }
    sort(facs.begin(), facs.end());
    return facs;
}
int GCD(int n, int m){
    int gcd = 1;
    vector<int> nFac = factors(n);
    vector<int> mFac = factors(m);
    for(int i=0;i<nFac.size();i++){
        if(nFac[i]<=m){
            for(int j=0;j<mFac.size();j++){
                if(nFac[i]==mFac[j]){
                    gcd=nFac[i];
                    break;
                }
            }
        }
    }
    return gcd;
}
int minSteps(int n, int m, int d){
    if(d > n && d > m){
        return -1;
    }
    if(d % GCD(n,m) != 0){
        return -1;
    }
    
    int N = 0, M = 0, count = 0;
    while(N != d && M != d){
        if(N == 0){
            N = n;
            count++;
        }
        else if(M == m){
            M = 0;
            count++;
        }
        else{
            int pour = min(N, m - M);
            N -= pour;
            M += pour;
            count++;
        }
    }
    return count;
}
int main() {
    cout<<minSteps(5,3,4);
    return 0;
}