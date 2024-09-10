// @leet start
int maxProduct(int *nums, int numsSize) {
  int maxtemp = nums[0];
  int mintemp = nums[0];
  int answer = nums[0];
  for (int i = 1; i < numsSize; i++) {
    int num = nums[i];
    int temp = Maximum(num, num * maxtemp, num * mintemp);
    mintemp = Minimum(num, num * maxtemp, num * mintemp);
    maxtemp = temp;
    if (answer < maxtemp)
      answer = maxtemp;
  }
  return answer;
}
int Maximum(int a, int b, int c) {
  int max = a;
  if (max < b)
    max = b;
  if (max < c)
    max = c;
  return max;
}
int Minimum(int a, int b, int c) {
  int min = a;
  if (min > b)
    min = b;
  if (min > c)
    min = c;
  return min;
}
// @leet end
