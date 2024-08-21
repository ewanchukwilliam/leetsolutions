// @leet start
/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
	if (nums.length === 1) {
		return nums[0];
	}
	var sum = 0;
	var min = 0;
	var ans = nums[0];
	for (let i = 0; i < nums.length; i++) {
		sum += nums[i];
		ans = Math.max(ans, sum - min);
		min = Math.min(min, sum);
	}
	return ans;
};
// @leet end
