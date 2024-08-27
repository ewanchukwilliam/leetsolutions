# @leet start
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        r = 0
        profit = 0
        min = inf
        while r < len(prices):
            if (prices[r] < min):
                min = prices[r]
            profit = max(profit, prices[r]-min)
            r+=1
        return profit
# @leet end
