// @leet start

import java.sql.Array;

class Solution {
  public int[] productExceptSelf(int[] nums) {
    int length = nums.length;
    int[] answer = new int[length];
    int multi = 1;
    for (int i = 0; i < length; i++) {
      answer[i] = multi;
      multi *= nums[i];
    }
    multi = 1;
    for (int i = length - 1; i >= 0; i--) {
      answer[i] *= multi;
      multi *= nums[i];
    }
    return answer;
  }
}
// @leet end
