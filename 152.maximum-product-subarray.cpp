// @leet start
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
  int maxProduct(vector<int> &nums) {
    int maxtemp = nums[0];
    int mintemp = nums[0];
    int answer = nums[0];
    for (int i = 1; i < nums.size(); i++) {
      int current = nums[i];
      int temp = max(current, maxtemp * current, mintemp * current);
      mintemp = min(current, current * mintemp, maxtemp * current);
      maxtemp = temp;
      answer = max(INT_MIN, answer, maxtemp);
    }
    return answer;
  }
  int max(int a, int b, int c) {
    int max = a;
    if (max < b)
      max = b;
    if (max < c)
      max = c;
    return max;
  }
  int min(int a, int b, int c) {
    int max = a;
    if (max > b)
      max = b;
    if (max > c)
      max = c;
    return max;
  }
};
// @leet end
