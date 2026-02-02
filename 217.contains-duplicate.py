# @leet start
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        group={}
        for num in nums:
            if num in group: return True
            group[num]=num
        return False
        
# @leet end
