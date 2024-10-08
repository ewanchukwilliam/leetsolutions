// @leet start
int max(int a, int b) {
  if (a < b) {
    return b;
  }
  return a;
}

int maxSubArray(int *nums, int numsSize) {
  int temp = nums[0];
  int answer = nums[0];
  for (int i = 1; i < numsSize; i++) {
    temp = max(nums[i], nums[i] + temp);
    answer = max(answer, temp);
  }
  return answer;
}

// @leet end
