# @leet start
class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        answer = []
        for i in range(len(prices)):
            j = i + 1
            while j < len(prices) and prices[i] < prices[j]:
                j += 1
            if j == len(prices):
                answer.append(prices[i])
            else:
                answer.append(prices[i] - prices[j])
        return answer


# @leet end
