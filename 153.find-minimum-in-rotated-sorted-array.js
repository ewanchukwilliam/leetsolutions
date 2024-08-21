// @leet start
/**
 * @param {number[]} nums
 * @return {number}
 */
var findMin = function(nums) {
	if (nums.length === 1) {
		return nums[0];
	}
	var left = 0;
	var right = nums.length - 1;
	while (left < right) {
		var middle = Math.floor((right - left) / 2 + left);
		if (nums[middle] < nums[right]) {
			right = middle;
		} else {
			left = middle+1;
		}
	}
	return nums[left];
};
// @leet end
