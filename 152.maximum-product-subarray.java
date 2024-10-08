// @leet start
class Solution {
    public int maxProduct(int[] nums) {
		int min = nums[0];
		int max = nums[0];
		int answer = nums[0];
		for (int i = 1; i < nums.length; i++) {
			int num = nums[i];
			int temp = Math.min(num, Math.min(num * min, num * max));
			max = Math.max(num, Math.max(num * min, num * max));
			min = temp;
			answer = Math.max(answer, max);
		}
		return answer;
    }
}
// @leet end
