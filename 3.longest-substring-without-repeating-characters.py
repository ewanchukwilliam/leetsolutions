# @leet start
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        hash={}
        last=0
        ans=0
        for i in range(0,len(s)):
            char=s[i]
            if char in hash and hash.get(char)>=last:
                last=hash.get(char)
            hash[char]=i
            ans=max(ans, i-last+1)
        return ans
        
# @leet end
