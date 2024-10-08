// @leet start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *productExceptSelf(int *nums, int numsSize, int *returnSize) {
  int left[numsSize];
  int lefty = 1;
  int right[numsSize];
  int righty = 1;
  for (int i = 0; i < numsSize; i++) {
    left[i] = lefty;
    right[i] = righty;
    lefty *= nums[i];
    righty *= nums[numsSize - 1 - i];
  }
  int *answer = (int *)malloc(sizeof(int) * numsSize);

  for (int i = 0; i < numsSize; i++) {
    answer[i] = left[i] * right[numsSize - 1 - i];
  }

  *returnSize = numsSize;

  return answer;
}
// @leet end
