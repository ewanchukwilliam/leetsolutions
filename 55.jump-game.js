// @leet start
/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function(nums) {
	var max = nums[0];
	for (let i = 0; i < nums.length; i++) {
		if (i > max) {
			return false;
		}
		max = Math.max(max, i + nums[i]);
		if (max >= nums.length - 1) {
			return true;
		}
	}
	return false;
};
// @leet end
