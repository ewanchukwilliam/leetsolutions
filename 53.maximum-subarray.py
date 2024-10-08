# @leet start
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        temp = nums[0]
        answer = nums[0]
        for i in range(1, len(nums)):
            num = nums[i]
            temp = max(num, num + temp)
            answer = max(answer, temp)
        return answer


# @leet end
