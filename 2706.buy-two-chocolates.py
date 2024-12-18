# @leet start
class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        choc1 = inf
        choc2 = choc1
        for price in prices:
            if price < choc1:
                choc2 = choc1
                choc1 = price
            elif price < choc2:
                choc2 = price

        total = money - (choc1 + choc2)
        if total < 0:
            return money
        return total


# @leet end
