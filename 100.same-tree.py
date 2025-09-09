# @leet start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        return self.dfs(p, q) and self.bfds(p, q)

    def dfs(self, p, q):
        if p is None and q is None:
            return True
        if p is None or q is None:
            return False
        if p.val != q.val:
            return False
        return self.dfs(p.left, q.left) and self.dfs(p.right, q.right)

    def bfds(self, p, q):
        queue = [p, q]
        while queue:
            p, q = queue.pop(0), queue.pop(0)
            if p is None and q is None:
                continue
            if p is None or q is None:
                return False
            if p.val != q.val:
                return False
            queue.append(p.left)
            queue.append(q.left)
            queue.append(p.right)
            queue.append(q.right)
        return True

# @leet end
