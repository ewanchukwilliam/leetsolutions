// @leet start
#include <vector>
class Solution {
public:
  vector<int> finalPrices(vector<int> &prices) {
    std::vector<int> answer;
    for (int i = 0; i < prices.size(); i++) {
      int j = i + 1;
      while (j < prices.size() && prices[i] < prices[j])
        j++;
      if (j == prices.size()) {
        answer.push_back(prices[i]);
      } else {
        answer.push_back(prices[i] - prices[j]);
      }
    }
    return answer;
  }
};
// @leet end
