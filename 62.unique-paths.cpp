// @leet start
class Solution {
public:
  int uniquePaths(int m, int n) {
    long int ans = 1;
    int max = std::min(n, m);
    for (int i = 1; i < max; i++) {
      ans = ans * (m + n - 1 - i) / i;
    }
    return ans;
  }
};
// @leet end
