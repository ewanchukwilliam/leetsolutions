// @leet start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
  *returnSize = 2;
  int *answer = (int *)malloc(sizeof(int) * 2);
  for (int i = 0; i < numsSize; i++) {
    for (int n = i + 1; n < numsSize; n++) {
      if (nums[n] + nums[i] == target) {
        answer[0] = i;
        answer[1] = n;
        return answer;
      }
    }
  }
  return answer;
}
// @leet end
