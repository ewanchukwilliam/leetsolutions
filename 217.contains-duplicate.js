// @leet start
/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
	let hash = new Map();
	for (let i = 0; i < nums.length; i++) {

		const number = nums[i];
		if (hash.has(number)) {
			return true;
		} else {
			hash.set(number, 1);
		}
	}
	return false;
};
// @leet end
