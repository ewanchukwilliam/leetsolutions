// @leet start
/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function(nums) {
	var min = nums[0];
	var max = nums[0];
	var answer = nums[0];
	for (let i = 1; i < nums.length; i++) {
		var temp = Math.min(nums[i], Math.min(nums[i] * max, nums[i] * min));
		max = Math.max(nums[i], Math.max(nums[i] * max, nums[i] * min));
		min = temp;
		answer = Math.max(answer, max);
	}
	return answer;
};
// @leet end
