#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);
    cout<<st.top()<<endl;
    st.pop();

    cout<<"Size of stack is : "<<st.size()<<endl;
    cout<<"Is stack empty : ";
    st.empty() ? cout<<" Yes" : cout << "No"<<endl;
    //use st.swap() to swap two stacks

    return 0;
}