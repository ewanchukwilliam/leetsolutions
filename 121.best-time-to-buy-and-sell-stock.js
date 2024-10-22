// @leet start
/**
 * @param {number[]} prices
 * @return {number}
 */

var maxProfit = function(prices) {
	let l = 0;
	let r = 0;
	let answer = 0;
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
