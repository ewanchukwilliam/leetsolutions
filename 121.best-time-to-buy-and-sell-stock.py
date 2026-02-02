# @leet start
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l = 0
        r = 0
        sol = 0
        while l < len(prices) and r < len(prices):
            if prices[l] > prices[r]:
                l = r
            temp= prices[r] - prices[l] 
            if temp> sol:
                sol = temp
            r += 1
        return sol


# @leet end
