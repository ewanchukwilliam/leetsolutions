// @leet start
/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
	var answer = 0;
	var left = prices[0];
	for (let i = 0; i < prices.length; i++) {
		const right = prices[i];
		if (left > prices[i]) {
			left = prices[i];
		}
		if (right - left > answer) {
			answer = right - left;
		}
	}
	return answer;
};
// @leet end
