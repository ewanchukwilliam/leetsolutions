// @leet start
/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function(height) {
	var l = 0,
		r = height.length - 1;
	var lmax = height[l],
		rmax = height[r];
	var answer = 0;
	while (l < r) {
		if (height[l] < height[r]) {
			if (height[l] >= lmax) {
				lmax = height[l];
			} else {
				answer += lmax - height[l];
			}
			++l;
		} else {
			if (height[r] >= rmax) {
				rmax = height[r];
			} else {
				answer += rmax - height[r];
			}
			--r;
		}
	}
	return answer;
};
// @leet end
