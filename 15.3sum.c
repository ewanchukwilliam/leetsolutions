// @leet start
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */
int cmp(const void *a, const void *b) { return *(int *)a - *(int *)b; }

int **threeSum(int *nums, int numsSize, int *returnSize,
               int **returnColumnSizes) {
    int cap = 32;
    int **res = malloc(sizeof(int *) * cap);
    *returnColumnSizes = malloc(sizeof(int) * cap);
    *returnSize = 0;
    qsort(nums, numsSize, sizeof(int), cmp);
    for (int k = 0; k < numsSize - 2; k++) {
        if (nums[k] > 0)
            break;
        if (k != 0 && nums[k] == nums[k - 1])
            continue;
        int target = 0 - nums[k];
        int i = k + 1, j = numsSize - 1;
        while (i < j) {
            int sum = nums[i] + nums[j];
            if (sum < target)
                i++;
            else if (sum > target)
                j--;
            else {
                if (*returnSize == cap) {
                    cap *= 2;
					res = realloc(res, sizeof(int *) * cap);
                    *returnColumnSizes =
                        realloc(*returnColumnSizes, sizeof(int) * cap);
                }
                res[*returnSize] = (int *)malloc(sizeof(int) * 3);
                (*returnColumnSizes)[*returnSize] = 3;
                res[*returnSize][0] = nums[k];
                res[*returnSize][1] = nums[i];
                res[*returnSize][2] = nums[j];
                (*returnSize)++;
                while (i < j && nums[i] == nums[i + 1])
                    i++;
                while (i < j && nums[j] == nums[j - 1])
                    j--;
                i++;
                j--;
            }
        }
    }
    return res;
}
// @leet end
