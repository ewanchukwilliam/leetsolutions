// @leet start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int n = i + 1; n < numsSize; n++) {
            if (nums[i] + nums[n] == target) {
                int *answer = (int *)malloc(2 * sizeof(int));
                answer[0] = i;
                answer[1] = n;
                *returnSize = 2;
                return answer;
            }
        }
    }
	*returnSize = 0;
    return NULL;
}
// @leet end
