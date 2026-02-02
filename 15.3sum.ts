// @leet start
function threeSum(nums: number[]): number[][] {
	nums.sort((a, b) => a - b);
	const res: number[][] = [];
	for (let i = 0; i < nums.length - 2; i++) {
		const num = nums[i];
		if (i > 0 && nums[i] === nums[i - 1]) continue;
		if (nums[i] > 0) break;
		let l: number = i + 1;
		let r: number = nums.length - 1;
		while (l < r) {
			let sum: number = nums[l] + nums[r] + nums[i];
			if (sum === 0) {
				res.push([nums[l], nums[r], nums[i]]);
				l++;
				r--;
				while (l < r && nums[l] === nums[l - 1]) l++;
				while (l < r && nums[r] === nums[r + 1]) r--;
			} else if (sum < 0) {
				l++;
			} else {
				r--;
			}
		}
	}
	return res;
}
// @leet end
