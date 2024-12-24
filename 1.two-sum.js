// @leet start
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
	let hash = new Map();
	for (let i = 0; i < nums.length; i++) {
		const num = nums[i];
		if (hash.has(target-num)) {
			return [hash.get(target-num), i];
		}else {
			hash.set(num, i);
		}
	}
	return [];
};
// @leet end
