// @leet start
class Solution {
  public int maxProfit(int[] prices) {
    int l = 0;
    int r = 0;
    int answer = 0;
    while (r < prices.length) {
      if (prices[l] < prices[r]) {
        answer = Math.max(answer, prices[r] - prices[l]);
      } else {
        l = r;
      }
      r++;
    }
    return answer;
  }
}
// @leet end
