// @leet start
/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(n) {
	if (n === 1) {
		return n;
	}
	var arr = new Array(n).fill(0);
	arr[0] = 1;
	arr[1] = 2;
	for (let i = 2; i < arr.length; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr[n - 1];
};
// @leet end
