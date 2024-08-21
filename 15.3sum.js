// @leet start
/**
 * @param {number[]} nums
 * @return {number[][]}
 */

var threeSum = function(nums) {
	var ans = [];
	nums = nums.sort((a, b) => a - b);
	for (let i = 0; i < nums.length; i++) {
		const num = nums[i];
		if (i > 0 && num === nums[i - 1]) continue;
		let l = i + 1;
		let r = nums.length - 1;
		while (l < r) {
			sum = nums[l] + nums[r] + num;
			if (sum === 0) {
				ans.push([nums[l], nums[r], num]);
				l++;
				r--;
				while (l < r && nums[r] === nums[r + 1]) r--;
				while (l < r && nums[l] === nums[l - 1]) l++;
			} else if (sum < 0) {
				l++;
			} else {
				r--;
			}
		}
	}
	return ans;
};
// @leet end
