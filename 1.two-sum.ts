// @leet start
function twoSum(nums: number[], target: number): number[] {
	const map = new Map<any, any>();
	for (let i = 0; i < nums.length; i++) {
		const num = nums[i];
		map.set(num, i);
	}
	for (let i = 0; i < nums.length; i++) {
		const need = target - nums[i];
		if (map.has(need) && map.get(need) !== i) {
			return [map.get(need), i];
		}
	}
	return [];
}
// @leet end
