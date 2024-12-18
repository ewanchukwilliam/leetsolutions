// @leet start
class Solution {
	public int[] finalPrices(int[] prices) {
		int[] answer = new int[prices.length];
		for (int i = 0; i < prices.length; i++) {
			int j = i + 1;
			while (j < prices.length && prices[j] > prices[i])
				j++;
			if (j == prices.length) {
				answer[i] = prices[i];
			} else {
				answer[i] = prices[i] - prices[j];
			}
		}
		return answer;
	}
}
// @leet end
