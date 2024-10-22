// @leet start
int max(int a, int b) {
  if (a < b) {
    return b;
  }
  return a;
}
int maxProfit(int *prices, int pricesSize) {
  int l = 0;
  int r = 0;
  int answer = 0;
  while (r < pricesSize) {
    if (prices[l] < prices[r]) {
      answer = max(answer, prices[r] - prices[l]);
    } else {
      l = r;
    }
    r++;
  }
  return answer;
}
// @leet end
