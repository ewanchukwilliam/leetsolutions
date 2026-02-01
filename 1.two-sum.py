# @leet start
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash={}
        for i,num in enumerate(nums):
            seek=target-num
            if seek in hash:
                return hash[seek], i
            hash[num]=i
        return []


        
# @leet end
