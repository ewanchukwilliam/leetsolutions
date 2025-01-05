// @leet start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
	char** answer = (char**)malloc(n * sizeof(char*));
	for (int i = 1; i <= n; i++) {
		char* str = (char*)malloc(9 * sizeof(char));
		if (i % 3 == 0 && i % 5 == 0 && i >= 5) {
			sprintf(str, "FizzBuzz");
		} else if (i % 3 == 0 && i >= 3) {
			sprintf(str, "Fizz");
		} else if (i % 5 == 0 && i >= 5) {
			sprintf(str, "Buzz");
		} else {
			sprintf(str, "%d", i);
		}
		answer[i - 1] = str;
	}
	*returnSize = n;
	return answer;
}
// @leet end
