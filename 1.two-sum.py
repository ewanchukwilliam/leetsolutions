# @leet start
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash={}
        for i in range(0,len(nums)):
            hash[nums[i]]=i

        for i in range(0,len(nums)):
            val = hash.get(target-nums[i])
            if val is not None and val is not i:
                return [val, i]
        return []
        
# @leet end
