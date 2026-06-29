#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4);
    q.back() += 1;
    
    cout<<q.front()<<endl;
    q.pop();

    cout<<"Size of Queue is : "<<q.size()<<endl;
    cout<<"Is Queue empty : ";
    q.empty() ? cout<<" Yes" : cout << "No"<<endl;
    //use st.swap() to swap two stacks

    return 0;
}