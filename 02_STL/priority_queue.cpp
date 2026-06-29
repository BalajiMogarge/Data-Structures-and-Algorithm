#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(3);
    pq.push(5);
    pq.emplace(8);
    pq.emplace(10);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<"Size of Queue is : "<<pq.size()<<endl;
    pq.pop();
    cout<<"Is Queue empty : ";
    pq.empty() ? cout<<" Yes" : cout << "No"<<endl;
    return 0;
}