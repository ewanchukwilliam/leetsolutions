// @leet start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *finalPrices(int *prices, int pricesSize, int *returnSize) {
  int *answer = (int *)malloc(pricesSize * sizeof(int));
  *returnSize = pricesSize;
  for (int i = 0; i < pricesSize; i++) {
    int j = i + 1;
    while (j < pricesSize && prices[i] < prices[j])
      j++;
    if (j == pricesSize) {
      answer[i] = prices[i];
    } else {
      answer[i] = prices[i] - prices[j];
    }
  }
  return answer;
}
// @leet end
