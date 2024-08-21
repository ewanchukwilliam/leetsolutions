// @leet start
/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function(x) {
	if (x==0) {
		return 0;
	}
	for (let i = 0; i <= x; i++) {
		if (x / i == i) {
			return i;
		}
		if (x / i < i) {
			return i - 1;
		}
	}
	return 1;
};
// @leet end
