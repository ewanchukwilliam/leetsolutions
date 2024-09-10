# @leet start
class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        maxtemp = nums[0]
        mintemp = nums[0]
        answer = nums[0]
        for i in range(1, len(nums)):
            num = nums[i]
            temp = max(num, num * maxtemp, num * mintemp)
            mintemp = min(num, num * maxtemp, num * mintemp)
            maxtemp = temp
            answer = max(answer, maxtemp)
        return answer


# @leet end
