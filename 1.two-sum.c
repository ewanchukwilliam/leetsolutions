// @leet start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
  // Allocate memory for the return array
  int *result = (int *)malloc(2 * sizeof(int));
  for (int i = 0; i < numsSize; i++) {
    for (int j = i + 1; j < numsSize; j++) {
      if (nums[i] + nums[j] == target) {
        result[0] = i;
        result[1] = j; // Set the return size
        return result;                 // Return the array with indices
      }
    }
  }
  return NULL;
}
// @leet end
