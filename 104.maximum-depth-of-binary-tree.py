# @leet start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        return self.depth(root, 0)

    def depth(self, root, ans):
        if root is None:
            return ans
        ans += 1
        return max(self.depth(root.left, ans), self.depth(root.right, ans))


# @leet end
