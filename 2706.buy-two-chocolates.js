// @leet start
/**
 * @param {number[]} prices
 * @param {number} money
 * @return {number}
 */
var buyChoco = function(prices, money) {
	let choc1 = Infinity;
	let choc2 = choc1;
	for (const price of prices) {
		if (price < choc1) {
			choc2 = choc1;
			choc1 = price;
		} else if (price < choc2) {
			choc2 = price;
		}
	}
	return money - choc1 - choc2 >= 0 ? money - choc1 - choc2 : money;
};
// @leet end
