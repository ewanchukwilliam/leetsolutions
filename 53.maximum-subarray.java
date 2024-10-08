// @leet start
class Solution {
    public int maxSubArray(int[] nums) {
		int temp=nums[0];
		int answer=nums[0];
		for (int i = 1; i < nums.length; i++) {
			temp = Math.max(nums[i], nums[i] + temp);
			answer = Math.max(answer, temp);
		}
		return answer;
        
    }
}
// @leet end
