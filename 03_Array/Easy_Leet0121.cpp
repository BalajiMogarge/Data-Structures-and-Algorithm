#include <bits/stdc++.h>
using namespace std;
// Brute Force solution considering all combinations
// Time Complexity : O(n^2)
// Space Complexity : O(1)
// int maxProfit(vector<int>& prices) {
//   int profit = 0;
//   for (int i = 0; i < prices.size() - 1; i++) {
//     for (int j = i; j < prices.size(); j++) {
//       profit = max(profit, (prices[j] - prices[i]));
//     }
//   }
//   return profit;
// }

// Optimal Solution
// Time Complexity : O(n^2)
// Space Complexity : O(1)
int maxProfit(vector<int>& prices) {
  int minimum = prices[0];
  int profit = 0;
  for (int i = 0; i < prices.size(); i++) {
    minimum = min(minimum, prices[i]);
    profit = max(profit, prices[i] - minimum);
  }
  return profit;
}

int main() {
  vector<int> prices = {7, 1, 5, 3, 6, 4};
  cout << "Maximum Profit is : " << maxProfit(prices);
  return 0;
}