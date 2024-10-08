// @leet start

int min(int a, int b){
	if (a>b) {
		return b;
	}
	return a;
}
int max(int a, int b){
	if (a<b) {
		return b;
	}
	return a;
}

int maxProduct(int *nums, int numsSize) {
	int Max = nums[0];
	int Min = nums[0];
	int answer = nums[0];
	for (int i = 1; i <= numsSize-1; i++) {
		int num = nums[i];
		int temp = min(num, min(num * Min , num * Max));
		Max = max(num, max(num * Min , num * Max));
		Min = temp;
		answer = max(answer, Max);
	}
	return answer;
}
// @leet end
