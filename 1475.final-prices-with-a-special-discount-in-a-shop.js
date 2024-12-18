// @leet start
/**
 * @param {number[]} prices
 * @return {number[]}
 */
var finalPrices = function(prices) {
	let answer = [];
	for (let i = 0; i < prices.length; i++) {
		const price = prices[i];
		var j = i + 1;
		while (j < prices.length && prices[j] > price) j++;
		if (j === prices.length) {
			answer.push(price);
		} else {
			answer.push(price - prices[j]);
		}
	}
	return answer;
};
// @leet end
