#include<bits/stdc++.h>
using namespace std;
int DigitCount(int num){
    int count = 0;
    while (num>0)
    {
        count++;
        num/=10;
    }
    return count;
}
int RevercedNum(int num){
    int rnum = 0;
    int rem = 0;
    while(num>0){
        rem = num%10;
        rnum = rnum * 10 + rem;
        num/=10;
    }
    return (rnum);
}
bool CheckPalindrom(int num){
    if(num == RevercedNum(num))return true;
    else return false;
}
bool CheckArmstrong(int n){
    int sum = 0;
    int num = n;
    while (n>0){
        int rem = n%10;
        n /= 10;
        sum += rem*rem*rem;
    }
    if(num==sum){
        return true;
    }
    else{
        return false;
    }
}
void AllDivisors(int n){
    vector<int> Divisors;
    for(int i=1;i<=(n/2);i++){
        if(n % i == 0){
            Divisors.emplace_back(i);
        }
    }
    Divisors.emplace_back(n);
    for(auto it : Divisors){
        cout<<it<<" ";
    }
}
void AllDivisors2(int n){
    vector<int> Divisors;
    for(int i=1;i*i<=n;i++){
        if(n % i == 0){
            Divisors.emplace_back(i);
            if(i != n/i){
                Divisors.emplace_back(n/i);
            }
        }
    }
    sort(Divisors.begin(),Divisors.end());
    for(auto it : Divisors){
        cout<<it<<" ";
    }
}
bool isPrime(int n){
    int count = 0;
    for(int i = 1;i <= n;i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 2){
        return true;
    }
    else return false;
}
bool isPrime2(int n){
    int count = 0;
    for(int i = 1;i*i <= n;i++){
        if(n % i == 0){
            count++;
            if(n % (n/i) == 0){
                count++;
            }
        }
    }
    if(count == 2){
        return true;
    }
    else return false;
}
void GCD(int a,int b){
    vector<int> Common_Factors;
    for(int i=min(a,b);i>=1;i--){
        if(a % i == 0 && b % i == 0){
            cout<<i;
            break;
        }
    }
}
void EuclideanAlgorithm(int a,int b){
    while (b != 0){
        int temp = b;
        b = b % a;
        a = temp;
    }
    cout<<"GCD of 34 and 28 is: "<<a;
}
int main(){
    cout << "Number of Digits are: " << DigitCount(12345) << endl;
    cout << "Reverce of Number is: " << RevercedNum(12345) << endl;
    cout << "Is 121 a Palindrome: ";
    CheckPalindrom(121)?cout<<"Yes\n":cout<<"No\n";
    cout << "Is 153 a Armstrong: ";
    CheckArmstrong(153)?cout<<"Yes\n":cout<<"No\n";
    cout<< "All Divisors of 36 are: ";
    AllDivisors2(36);
    cout<<endl<< "Is 11 Prime Number: ";
    isPrime2(11)?cout<<"Yes\n":cout<<"No\n";
    EuclideanAlgorithm(34,28);
    return 0;
}