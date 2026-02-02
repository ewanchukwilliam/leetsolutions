// @leet start
function maxProfit(prices: number[]): number {
	let l: number = 0;
	let r: number = 0;
	let soln: number = 0;
	while (r < prices.length) {
		if (prices[l] > prices[r]) l = r;
		if (prices[r] - prices[l] > soln) soln = prices[r] - prices[l];
		r++;
	}
	return soln;
}
// @leet end
