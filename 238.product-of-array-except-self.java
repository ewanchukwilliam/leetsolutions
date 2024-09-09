// @leet start
class Solution {
	public int[] productExceptSelf(int[] nums) {
		int[] forward = new int[nums.length];
		int[] reverse = new int[nums.length];
		int forw = 1;
		int rev = 1;
		for (int i = 0; i < nums.length; i++) {
			forward[i] = forw;
			reverse[i] = rev;
			forw *= nums[i];
			rev *= nums[nums.length - 1 - i];
		}
		int[] answer = new int[nums.length];
		for (int i = 0; i < nums.length; i++) {
			answer[i] = forward[i] * reverse[nums.length - 1 - i];
		}
		return answer;
	}
}
// @leet end
