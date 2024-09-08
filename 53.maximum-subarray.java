// @leet start
class Solution {
  public int maxSubArray(int[] nums) {
    int[] subarr = new int[nums.length + 1];
    int temp = 0;
    for (int i = 0; i < nums.length; i++) {
      subarr[i] = temp;
      temp += nums[i];
    }
    subarr[nums.length] = temp;
    int answer = Integer.MIN_VALUE;
    int mindif = 0;
    for (int i = 1; i < subarr.length; i++) {
      answer = Math.max(answer, subarr[i] - mindif);
      mindif = Math.min(mindif, subarr[i]);
    }
    return answer;
  }
}
// @leet end
