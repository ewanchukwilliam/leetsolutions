// @leet start
/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
	var temp = nums[0];
	var answer = nums[0];
	for (let i = 1; i < nums.length; i++) {
		const num = nums[i];
		temp = Math.max(num, temp + num);
		answer = Math.max(answer, temp);
	}
	return answer
};
// @leet end
