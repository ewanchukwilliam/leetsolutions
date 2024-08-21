// @leet start
/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function(nums) {
	var maximum = nums[0];
	var minimum = nums[0];
	var tempmaximum = nums[0];
	var tempminimum = nums[0];
	var global = nums[0];
	for (let i = 1; i < nums.length; i++) {
		const number = nums[i];
		tempmaximum = Math.max(number, number * maximum, number * minimum);
		tempminimum = Math.min(number, number * minimum, number * maximum);
		maximum = tempmaximum;
		minimum = tempminimum;
		global = Math.max(global, maximum);
	}

	return global;
};
// @leet end
