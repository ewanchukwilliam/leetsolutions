# @leet start
class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        ans = 1
        for k in range(1, min(m, n)):
            ans = ans * (m + n - 1 - k) // k
        return ans

# @leet end
