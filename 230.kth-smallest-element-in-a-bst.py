# @leet start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k) -> int:
        count = [0]
        answer = [0]
        self.dfs(root, k, count, answer)
        return answer[0]

    def dfs(self, root, k, count, answer):
        if root is None:
            return
        self.dfs(root.left, k, count, answer)
        count[0] += 1
        if count[0] == k:
            answer[0] = root.val
            return
        self.dfs(root.right, k, count, answer)


# @leet end
