# @leet start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        return  self.bfs(root)
        # return  self.dfs(root)

    def dfs(self, root):
        if root is None:
            return None
        root.left, root.right = root.right, root.left
        self.dfs(root.left)
        self.dfs(root.right)
        return root

    def bfs(self, root):
        queue = [root]
        while queue:
            node = queue.pop(0)
            if node is None:
                continue
            node.left, node.right = node.right, node.left
            queue.append(node.left)
            queue.append(node.right)
        return root

# @leet end
