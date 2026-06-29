#include <iostream>
#include <list>
#include <deque>
using namespace std;

int main(){
    
    // ========== LIST ==========
    list<int> ls;
    
    ls.push_back(2);
    ls.push_front(1);
    ls.emplace_back(3);
    ls.emplace_front(0);
    
    ls.pop_back();
    ls.pop_front();
    
    ls.front();
    ls.back();
    // No ls[i] - no random access
    
    // Same as vector: begin, end, rbegin, rend
    // insert, erase, clear, size, empty, swap
    
    ls.reverse();  // List specific
    ls.sort();     // List specific
    
    
    // ========== DEQUE ==========
    deque<int> dq;
    
    dq.push_back(2);
    dq.push_front(1);
    dq.emplace_back(3);
    dq.emplace_front(0);
    
    dq.pop_back();
    dq.pop_front();
    
    dq[0];         // Random access works
    dq.front();
    dq.back();
    
    // Same as vector: begin, end, rbegin, rend
    // insert, erase, clear, size, empty, swap
    
    return 0;
}