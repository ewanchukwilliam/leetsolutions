// @leet start
#include <cmath>
class Solution {
public:
  double myPow(double x, int n) {
    if (n == 0)
      return 1;
    double ans = 1;
    long long N = n;
    if (N < 0) {
      x = 1 / x;
      if (N == INT_MIN) {
        N = -(N + 1);
        ans = x;
      } else {
        N = -N; 
      }
    }
    while (N > 0) {
      if (N % 2 == 1) {
        ans *= x;
      }
      x *= x;
      N /= 2;
    }
    return ans;
  }
};
// @leet end
