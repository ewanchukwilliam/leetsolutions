// @leet start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
	int* answer = (int*)malloc(sizeof(int)*2);
	*returnSize=2;
  for (int i = 0; i < numsSize; i++) {
    for (int n = i + 1; n < numsSize; n++) {
      if (nums[i] + nums[n] == target) {
        answer[0] = i;
        answer[1] = n;
        return answer;
      }
    }
  }
  return answer;
}
// @leet end
