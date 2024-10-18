# @leet start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        return self.dfs(root, -inf, inf)

    def dfs(self, root: Optional[TreeNode], low, high) -> bool:
        if root is None:
            return True
        if root.val <= low or root.val >= high:
            return False
        return self.dfs(root.left, low, root.val) and self.dfs(
            root.right, root.val, high
        )


# @leet end
