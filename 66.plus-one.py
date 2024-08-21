# @leet start
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        carry = 1
        for i in range(len(digits) - 1, -1, -1):
            current = digits[i] + carry
            digits[i] = current % 10
            if current // 10 > 0:
                carry = 1
            else:
                carry = 0
        if carry == 1:
            digits.insert(0, carry)
        return digits


# @leet end
