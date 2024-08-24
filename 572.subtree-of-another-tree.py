# @leet start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        queue = [root]
        while len(queue) > 0:
            length = len(queue)
            for i in range(0, length):
                node = queue.pop(0)
                if node.val == subRoot.val and self.dfs(node, subRoot):
                    return True
                if node.left is not None:
                    queue.append(node.left)
                if node.right is not None:
                    queue.append(node.right)
        return False

    def dfs(self, node1: Optional[TreeNode], node2: Optional[TreeNode]) -> bool:
        if node1 is None and node2 is None:
            return True
        if node1 is None or node2 is None or node1.val != node2.val:
            return False
        return self.dfs(node1.left, node2.left) and self.dfs(node1.right, node2.right)


# @leet end
