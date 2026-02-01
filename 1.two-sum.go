// @leet start
func twoSum(nums []int, target int) []int {
	for i := 0; i < len(nums); i++ {
		for n := i+1; n < len(nums); n++ {
			if nums[i]+nums[n]==target {
				return []int{i,n} 
			}
		}
	}
		return[]int{}
}
// @leet end
