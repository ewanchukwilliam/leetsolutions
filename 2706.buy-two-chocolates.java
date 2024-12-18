// @leet start
class Solution {
	public int buyChoco(int[] prices, int money) {
    int c1 = Integer.MAX_VALUE;
    int c2 = c1;
    for (int price : prices) {
      if (price < c1) {
        c2 = c1;
        c1 = price;
      } else if (price < c2) {
        c2 = price;
      }
    }
    if (c1 + c2 <= money) {
      return money - c1 - c2;
    }
    return money;
  }
}
// @leet end
