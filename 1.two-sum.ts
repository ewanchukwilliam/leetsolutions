// @leet start
function twoSum(nums: number[], target: number): number[] {
	const map = new Map<number, number>();
	for (let i = 0; i < nums.length; i++) {
		const seek = target - nums[i];
		if (map.has(seek)) {
			return [map.get(seek)!, i];
		}
		map.set(nums[i], i);
	}
	return [];
}
// @leet end
