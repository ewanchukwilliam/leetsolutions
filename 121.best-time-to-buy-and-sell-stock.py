# @leet start
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l=0
        r=0
        answer=0
        while r< len(prices):
            if prices[l]<prices[r]:
                answer=max(answer,prices[r]-prices[l])
            else:
                l=r
            r+=1
        return answer

        
# @leet end
