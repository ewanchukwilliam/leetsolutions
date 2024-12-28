class Solution:
    def longestPalindrome(self, s: str) -> int:
        nums = {}
        for i in s:
            nums[i] = nums.get(i, 0) + 1
        answer = 0
        has_odd = False
        for count in nums.values():
            if count % 2 == 1:
                has_odd = True
                answer += count - 1
            else:
                answer += count
        return answer + (1 if has_odd else 0)
