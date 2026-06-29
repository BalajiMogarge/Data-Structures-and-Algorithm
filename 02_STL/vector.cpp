#include <bits/stdc++.h>
using namespace std;

int main(){
    // ========== DECLARATION & INITIALIZATION ==========
    vector<int> v1;                    // Empty vector
    vector<int> v2(5);                 // Size 5, values = 0
    vector<int> v3(5, 10);             // Size 5, all values = 10
    vector<int> v4 = {1, 2, 3, 4, 5}; // Initialize with values
    vector<int> v5(v4);                // Copy constructor
    
    // Vector of pairs
    vector<pair<int, string>> vp;
    vp.push_back({1, "Vedant"});       // Using push_back
    vp.emplace_back(2, "Balaji");      // Using emplace_back (faster)
    
    
    // ========== ADDING ELEMENTS ==========
    vector<int> v;
    v.push_back(10);        // Add at end: {10}
    v.push_back(20);        // {10, 20}
    v.emplace_back(30);     // {10, 20, 30} - faster than push_back
    
    
    // ========== ACCESSING ELEMENTS ==========
    cout << v[0];           // Access by index (no bounds checking)
    cout << v.at(1);        // Access with bounds checking
    cout << v.front();      // First element
    cout << v.back();       // Last element
    
    
    // ========== ITERATORS ==========
    vector<int>::iterator it;
    it = v.begin();         // Points to first element
    it = v.end();           // Points to position after last element
    
    vector<int>::reverse_iterator rit;
    rit = v.rbegin();       // Reverse iterator to last element
    rit = v.rend();         // Reverse iterator to before first element
    
    // Iterator arithmetic
    it = v.begin();
    cout << *it;            // Dereference: prints first element
    it++;                   // Move to next element
    it += 2;                // Jump 2 positions forward
    
    
    // ========== ITERATING / PRINTING ==========
    // Method 1: Using iterator
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    
    // Method 2: Using auto (cleaner)
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    
    // Method 3: Range-based for loop (simplest)
    for(auto element : v){
        cout << element << " ";
    }
    
    // Method 4: Index-based
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    
    
    // ========== MODIFYING ELEMENTS ==========
    v[0] = 100;             // Change first element
    v.at(1) = 200;          // Change with bounds checking
    
    
    // ========== ERASING ELEMENTS ==========
    // Example: v = {10, 20, 30, 40, 50}
    vector<int> ve = {10, 20, 30, 40, 50};
    ve.erase(ve.begin());              // Remove first: {20, 30, 40, 50}
    ve.erase(ve.begin() + 1);          // Remove 2nd element: {20, 40, 50}
    ve.erase(ve.begin() + 1, ve.begin() + 3); // Remove range [1,3): {20}
    ve.pop_back();                     // Remove last element
    
    
    // ========== INSERTING ELEMENTS ==========
    // Example: vi = {10, 20, 30}
    vector<int> vi = {10, 20, 30};
    vi.insert(vi.begin(), 5);              // Insert at start: {5, 10, 20, 30}
    vi.insert(vi.begin() + 2, 15);         // Insert at index 2
    vi.insert(vi.begin() + 1, 2, 100);     // Insert 2 copies of 100
    
    // Insert another vector
    vector<int> vi2 = {99, 98};
    vi.insert(vi.begin(), vi2.begin(), vi2.end()); // Insert vi2 at beginning
    
    
    // ========== SIZE & CAPACITY ==========
    cout << v.size();       // Number of elements
    cout << v.capacity();   // Allocated storage capacity
    cout << v.empty();      // Returns true if empty (boolean)
    v.resize(10);           // Resize to 10 elements
    v.resize(15, 100);      // Resize to 15, new elements = 100
    v.clear();              // Remove all elements (size = 0)
    
    
    // ========== OTHER OPERATIONS ==========
    // Swap two vectors
    vector<int> a = {1, 2, 3};
    vector<int> b = {4, 5, 6};
    a.swap(b);              // a = {4,5,6}, b = {1,2,3}
    
    // Sorting
    sort(v.begin(), v.end());              // Ascending order
    sort(v.begin(), v.end(), greater<int>()); // Descending order
    
    // Reversing
    reverse(v.begin(), v.end());
    
    // Finding element
    auto it_find = find(v.begin(), v.end(), 20);
    if(it_find != v.end()){
        cout << "Found at index: " << it_find - v.begin();
    }
    
    // Min and Max element
    cout << *min_element(v.begin(), v.end());
    cout << *max_element(v.begin(), v.end());
    
    // Sum of elements
    int sum = accumulate(v.begin(), v.end(), 0);
    
    // Count occurrences
    int cnt = count(v.begin(), v.end(), 20);
    
    
    // ========== 2D VECTOR ==========
    vector<vector<int>> matrix(3, vector<int>(4, 0)); // 3x4 matrix with 0s
    matrix[0][0] = 5;   // Access element
    
    // Variable size 2D vector
    vector<vector<int>> v2d;
    v2d.push_back({1, 2, 3});
    v2d.push_back({4, 5});
    v2d.push_back({6, 7, 8, 9});
    
    return 0;
}