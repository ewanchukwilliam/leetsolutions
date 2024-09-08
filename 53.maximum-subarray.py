# @leet start
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        subarr = []
        temp = 0
        for i in range(0, len(nums)):
            subarr.append(temp)
            temp += nums[i]
        subarr.append(temp)
        answer = -inf
        mindif = 0
        for i in range(1, len(subarr)):
            answer = max(answer, subarr[i] - mindif)
            mindif = min(mindif, subarr[i])
        return answer


# @leet end
