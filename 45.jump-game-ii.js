/**
 * @param {number[]} nums
 * @return {number}
 */
var jump = function(nums) {
	if (nums.length === 1) {
		return 0;
	}
	var c = 0;
	var f = 0;
	var a = 0;
	for (let i = 0; i < nums.length; i++) {
		const jump = nums[i];
		f = Math.max(f, jump + i);
		if (c === i) {
			a++;
			c = f;
			if (c >= nums.length - 1) {
				return a;
			}
		}
	}
	return a;
};
