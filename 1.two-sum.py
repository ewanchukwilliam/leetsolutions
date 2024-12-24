# @leet start
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dictlist = {}
        for i in range(len(nums)):
            if target - nums[i] in dictlist:
                return [i, dictlist[target - nums[i]]]
            dictlist[nums[i]] = i
        return []


# @leet end
