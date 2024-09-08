// @leet start
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
	var length = nums.length;
	var answer = new Array(length, 1);
	var left = 1;
	for (let i = 0; i < length; i++) {
		answer[i] = left;
		left *= nums[i];
	}
	left = 1;
	for (let i = length - 1; i >= 0; i--) {
		answer[i] *= left;
		left *= nums[i];
	}
	return answer;
};
// @leet end
