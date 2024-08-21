// @leet start
/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var subsets = function(nums) {
	var ans = [];
	var top = 1 << nums.length;
	for (let i = 0; i < top; i++) {
		var sub = [];
		for (let n = 0; n < nums.length; n++) {
			if (i & (1 << n)) {
				sub.push(nums[n]);
			}
		}
		ans.push(sub);
	}
	return ans;
};
// @leet end
