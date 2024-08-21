// @leet start
/**
 * @param {number[]} coins
 * @param {number} amount
 * @return {number}
 */
var coinChange = function(coins, amount) {
	var sol = Array(amount + 1).fill(Infinity);
	sol[0] = 0;
	for (let i = 1; i < sol.length; i++) {
		for (let n = 0; n < coins.length; n++) {
			const coin = coins[n];
			if (i - coin >= 0) {
				sol[i] = Math.min(sol[i], 1 + sol[ i - coin ]);
			}
		}
	}
	return sol[amount] > amount ? -1 : sol[amount];
};
// @leet end
