#include <bits/stdc++.h>
using namespace std;

string getPermutation(int n, int k) {
  string seq = "";
  int fact = 1;
  int num = n - 1;
  for (int i = 1; i <= n; i++) {
    if (i < n) fact *= i;
    seq += to_string(i);
  }
  k--;
  for (int i = 0; i < n; i++) {
    int idx = k / fact;
    char target = seq[i + idx];
    for (int j = i + idx; j > i; j--) {
      seq[j] = seq[j - 1];
    }
    seq[i] = target;
    k %= fact;
    if (i < n - 1) {
      fact /= (n - 1 - i);
    }
  }
  return seq;
}
int main() {
  cout << getPermutation(4, 9);
  return 0;
}