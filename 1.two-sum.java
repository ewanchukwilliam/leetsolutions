// @leet start
class Solution {
    public int[] twoSum(int[] nums, int target) {
		for (int i = 0; i < nums.length; i++) {
			for (int n = i+1; n < nums.length; n++) {
				if (nums[n]+nums[i]==target) {
					return new int[] { i,n };
				}
			}
		}
		return new int[0];
        
    }
}
// @leet end
