// @leet start
function twoSum(nums: number[], target: number): number[] {
	const map = new Map<any, any>;
	for (let i = 0; i < nums.length; i++) {
		const num = nums[i];
		map.set(num, i);
	}
	for (let i = 0; i < nums.length; i++) {
		const num = nums[i];
		if (map.has(target-num) && map.get(target-num)!== i) {
			return [ map.get(target-num), i]
		}
	}
	return []
	
    
};
// @leet end
