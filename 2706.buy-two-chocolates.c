// @leet start
int buyChoco(int *prices, int pricesSize, int money) {
  int c1 = INT_MAX;
  int c2 = c1;
  for (int i = 0; i < pricesSize; i++) {
    if (prices[i] < c1) {
      c2 = c1;
      c1 = prices[i];
    } else if (prices[i] < c2) {
      c2 = prices[i];
    }
  }
  if (c1 + c2 > money) {
    return money;
  }
  return money - c1 - c2;
}
// @leet end
