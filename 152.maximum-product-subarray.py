# @leet start
class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        mini = nums[0]
        maxi = nums[0]
        answer = nums[0]
        for i in range(1, len(nums)):
            temp = min(nums[i], nums[i] * mini, nums[i] * maxi)
            maxi = max(nums[i], nums[i] * mini, nums[i] * maxi)
            mini = temp
            answer = max(answer, maxi)
        return answer


# @leet end
