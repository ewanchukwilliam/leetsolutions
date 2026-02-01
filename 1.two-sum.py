# @leet start
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash={}
        for i in range(0,len(nums)):
            hash[nums[i]]=i
        for i in range(0,len(nums)):
            temp = target -nums[i]
            if temp in hash and hash[temp]!=i:
                return [hash[temp],i]
        return [hash[temp],i]
        
# @leet end
