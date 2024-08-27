// @leet start
/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
	var r = 0;
	var min = Infinity;
	var profit = 0;
	while ( r < prices.length) {
		if (prices[r] < min) {
			min = prices[r];
		}
		profit = Math.max(profit, prices[r] - min);
		r++;
	}
	return profit;
};
// @leet end
