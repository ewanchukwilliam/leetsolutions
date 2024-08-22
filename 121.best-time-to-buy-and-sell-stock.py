# @leet start
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        low = prices[0]
        price = 0
        for i in range(0, len(prices)):
            if prices[i] < low:
                low = prices[i]
            if prices[i] - low > price:
                price = prices[i] - low
        return price


# @leet end
