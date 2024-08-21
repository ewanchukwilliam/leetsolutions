// @leet start
/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var subsetsWithDup = function(nums) {
	var sublen = 1 << nums.length;
	var ans = [];
	var hash = new Map();
	nums = nums.sort((a,b) => a-b)
	for (let i = 0; i < sublen; i++) {
		var sub = [];
		for (let n = 0; n < nums.length; n++) {
			if (i & (1 << n)) {
				sub.push(nums[n]);
			}
		}
		var substr = sub.join(",");
		if (!hash[substr]) {
			ans.push(sub);
			hash[substr] = true;
		}
	}
	return ans;
};
// @leet end
