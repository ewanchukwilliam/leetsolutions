// @leet start
/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
	var l = 0;
	var r = height.length - 1;
	var ans = 0;
	while (l < r) {
		ans = Math.max(ans, (r - l) * Math.min(height[l], height[r]));
		if (height[l] < height[r]) {
			l++;
		} else {
			r--;
		}
	}
	return ans;
};

// @leet end
