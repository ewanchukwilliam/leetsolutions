// @leet start

class Solution {
  public int[] productExceptSelf(int[] nums) {
    int[] left = new int[nums.length];
    int[] right = new int[nums.length];
    right[0] = 1;
    left[0] = 1;
    int lefty = 1;
    int righty = 1;
    for (int i = 0; i < nums.length; i++) {
      right[nums.length - i - 1] = righty;
      left[i] = lefty;
      lefty *= nums[i];
      righty *= nums[nums.length - i - 1];
    }
    int[] answer = new int[nums.length];
    for (int i = 0; i < nums.length; i++) {
      answer[i] = left[i] * right[i];
    }
    return answer;
  }
}
// @leet end
