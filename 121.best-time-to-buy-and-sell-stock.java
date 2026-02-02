// @leet start
class Solution {
    public int maxProfit(int[] prices) {
		int l = 0;
		int r = 0;
		int sol =0;
		while (l < prices.length && r< prices.length) {
			if (prices[l]>prices[r]) l=r;
			if(prices[r]-prices[l] > sol) sol= prices[r]-prices[l];
			r++;
		}
		return sol;
    }
}
// @leet end
