// @leet start
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) {
	var l = 0;
	var r = nums.length;
	var mid = Math.floor((r + l) / 2);
	while (l < r) {
		if (nums[l] === target) {
			return l;
		}
		if (nums[mid] === target) {
			return mid;
		}
		if (
			(target < nums[mid] && nums[l] <= target && nums[l] < nums[mid]) ||
			((nums[l] < target || target < nums[mid]) && nums[l] > nums[mid])
		) {
			r = mid;
		} else {
			l = mid + 1;
		}
		mid = Math.floor((l + r) / 2);
	}
	return -1;
};
// @leet end
