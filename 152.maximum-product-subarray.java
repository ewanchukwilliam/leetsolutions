// @leet start
class Solution {
    public int maxProduct(int[] nums) {
		int mini = nums[0];
		int maxi = nums[0];
		int answer  = nums[0];
		for(int i = 1; i< nums.length; i++){
			int temp = Math.min(nums[i],  Math.min(nums[i] * mini, nums[i] * maxi));
			maxi = Math.max(nums[i],  Math.max(nums[i] * mini, nums[i] * maxi));
			mini = temp;
			answer = Math.max(answer, maxi);
		}
		return answer;
    }
}
// @leet end
