// @leet start
#include <climits>
class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int i = 0;
    int profit = 0;
    int min = INT_MAX;
    while (i < prices.size()) {
      if (prices[i] < min)
        min = prices[i];
      if (profit < prices[i] - min)
        profit = prices[i] - min;
      i++;
    }
    return profit;
  }
};
// @leet end
