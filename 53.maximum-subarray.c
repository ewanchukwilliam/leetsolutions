// @leet start
int maxSubArray(int *nums, int numsSize) {
  int subarr[numsSize + 1];
  int temp = 0;
  for (int i = 0; i < numsSize; i++) {
    subarr[i] = temp;
    temp += nums[i];
  }
  subarr[numsSize] = temp;
  int answer = INT_MIN;
  int mindif = 0;
  for (int i = 1; i < numsSize + 1; i++) {
    if (answer < subarr[i] - mindif) {
      answer = subarr[i] - mindif;
    }
    if (mindif > subarr[i]) {
      mindif = subarr[i];
    }
  }
  return answer;
}
// @leet end
