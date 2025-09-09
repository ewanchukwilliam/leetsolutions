// @leet start
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
	for (let i = 0; i < nums.length; i++) {
		const num1 = nums[i];
		for (let n = 0; n < nums.length; n++) {
			const num2 = nums[n];
			if (num1+num2 === target && i !== n) {
				return [i, n];
			}
		}
	}
	return [];
};
// @leet end
