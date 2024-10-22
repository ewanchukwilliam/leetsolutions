# @leet start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthLargestLevelSum(self, root: Optional[TreeNode], k: int) -> int:
        queue = deque([root])
        levels = []
        while queue:
            length = len(queue)
            sum = 0
            for i in range(0, length):
                node = queue.popleft()
                sum += node.val
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
            levels.append(sum)
        if len(levels) < k:
            return -1
        levels.sort
        return levels[len(levels) - k]


# @leet end
