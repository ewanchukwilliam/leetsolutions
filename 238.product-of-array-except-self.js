// @leet start
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
	var leftnum = 1;
	var rightnum = 1;
	var left = [];
	var right = [];
	var answer = [];
	left[0] = 1;
	right[0] = 1;

	for (let i = 0; i < nums.length; i++) {
		leftnum *= nums[i];
		rightnum *= nums[nums.length - 1 - i];
		left[i+1] = leftnum;
		right[i+1] = rightnum;
	}
	for (let i = 0; i < nums.length; i++) {
		answer[i] = left[i] * right[nums.length - 1 - i];
	}

	return answer;
};
// @leet end
