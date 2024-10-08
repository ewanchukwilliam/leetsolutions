// @leet start
int maxProfit(int *prices, int pricesSize) {
  int l = 0;
  int r = 0;
  int answer = 0;
  while (r < pricesSize) {
    if (prices[l] < prices[r]) {
      if (answer < prices[r] - prices[l]) {
        answer = prices[r] - prices[l];
      }
    } else {
      l = r;
    }
    r++;
  }
  return answer;
}
// @leet end
