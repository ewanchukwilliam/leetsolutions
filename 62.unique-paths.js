// @leet start
/**
 * @param {number} m
 * @param {number} n
 * @return {number}
 */
var uniquePaths = function(m, n) {
	var ans = 1;
	if (m < n) {
		var max = m;
	} else {
		var max = n;
	}
	for (let k = 1; k < max; k++) {
		ans *= (m + n - 1 - k) / k;
	}
	return ans;
};

// @leet end
