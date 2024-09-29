# @leet start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        return self.dfs(root, 0)+1
    def dfs(self, root: Optional[TreeNode], answer) -> int:
        if root is None:
            answer -= 1
            return answer
        answer += 1
        return max(self.dfs(root.left, answer), self.dfs(root.right, answer))


# @leet end
