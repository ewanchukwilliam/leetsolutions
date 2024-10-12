// @leet start
int min(int a, int b) {
  if (a < b) {
    return a;
  }
  return b;
}
int max(int a, int b) {
  if (a < b) {
    return b;
  }
  return a;
}
int maxProduct(int *nums, int numsSize) {
	int mini=nums[0];
	int maxi=nums[0];
	int answer=nums[0];
	for (int i = 1; i < numsSize; i++) {
		int temp = min(nums[i], min(nums[i] * maxi , nums[i] * mini));
		maxi = max(nums[i], max(nums[i] * maxi , nums[i] * mini));
		mini = temp;
		answer = max(answer, maxi);
	}
	return answer;

}
// @leet end
