# @leet start
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        length = len(nums)
        answer = [1] * length
        multiple = 1
        for i in range(length):
            answer[i] = multiple
            multiple *= nums[i]
        multiple = 1
        for i in range(length - 1, -1, -1):
            answer[i] *= multiple
            multiple *= nums[i]
        return answer


# @leet end
