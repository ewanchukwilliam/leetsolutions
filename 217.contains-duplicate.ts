// @leet start
function containsDuplicate(nums: number[]): boolean {
	let map =  new Set<number>();
	return nums.some((num)=>{
		if(map.has(num))return true;
		map.add(num)
		return false
	})
};
// @leet end
