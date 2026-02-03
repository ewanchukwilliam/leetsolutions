# @leet start
class Solution:
    def isPalindrome(self, s: str) -> bool:
        s="".join(char.lower() for char in s if char.isalnum())
        l=0
        r=len(s)-1
        while l<r:
            if s[r]!=s[l]:
                return False
            l+=1
            r-=1
        return True
        
# @leet end
