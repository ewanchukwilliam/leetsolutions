// @leet start
class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int l = 0;
    int r = 0;
    int answer = 0;
    while (r < prices.size()) {
      if (< prices[r] ) {
        answer = max(answer, prices[r] - prices[l]);
      } else {
        l = r;
      }
      r++;
    }
    return answer;
  }
};
// @leet end
