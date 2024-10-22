# @leet start
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        answer = {}
        for num in nums:
            if num in answer:
                return True
            answer[num] = 1
        return False


# @leet end
