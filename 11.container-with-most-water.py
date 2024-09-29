# @leet start
class Solution:
    def maxArea(self, height: List[int]) -> int:
        Left = 0
        Right = len(height) - 1
        answer = 0
        while Left < Right:
            answer = max(answer, (Right - Left) * min(height[Left], height[Right]))
            if height[Left] < height[Right]:
                Left += 1
            else:
                Right -= 1
        return answer


# @leet end
