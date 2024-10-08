# @leet start
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        left = []
        right = []
        lefty = 1
        righty = 1
        for i in range(0, len(nums)):
            left.append(lefty)
            right.append(righty)
            lefty *= nums[i]
            righty *= nums[len(nums) - i - 1]

        answer = []
        for i in range(0, len(nums)):
            answer.append(left[i] * right[len(nums) - i - 1])
        return answer


# @leet end
