// @leet start
#include <cmath>
class Solution {
public:
  bool judgeSquareSum(int c) {
    long left = 0;
    long right = sqrt(c);

    while (left <= right) {
      long current_sum = left * left + right * right;
      if (current_sum == c) {
        return true;
      } else if (current_sum < c) {
        left++;
      } else {
        right--;
      }
    }

    return false;
  }
};
// @leet end
