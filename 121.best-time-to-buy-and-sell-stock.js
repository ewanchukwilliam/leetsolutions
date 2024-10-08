// @leet start
/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
	var l = 0;
	var r = 0;
	var answer = 0;
	while (r < prices.length) {
		if (prices[l] < prices[r]) {
			answer = Math.max(answer, prices[r] - prices[l]);
		} else {
			l = r;
		}
		r++;
	}
	return answer;
};
// @leet end
