// @leet start
class Solution {
	public int maxProduct(int[] nums) {
		int maxtemp = nums[0];
		int mintemp = nums[0];
		int answer = nums[0];
		for (int i = 1; i < nums.length; i++) {
			int current = nums[i];
			int temp = Max(current, current * maxtemp, current * mintemp);
			mintemp = Min(current, current * maxtemp, current * mintemp);
			maxtemp = temp;
			answer = Math.max(answer, maxtemp);
		}
		return answer;
	}

	public int Max(int a, int b, int c) {
		int max = a;
		if (max < b)
			max = b;
		if (max < c)
			max = c;
		return max;
	}

	public int Min(int a, int b, int c) {
		int min = a;
		if (min > b)
			min = b;
		if (min > c)
			min = c;
		return min;
	}
}
// @leet end
