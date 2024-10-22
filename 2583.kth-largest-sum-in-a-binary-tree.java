// @leet start

import java.util.Collections;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
  public long kthLargestLevelSum(TreeNode root, int k) {
    Queue<TreeNode> queue = new LinkedList<>();
    queue.offer(root);
    List<Long> levels = new ArrayList<>();
    while (!queue.isEmpty()) {
      int length = queue.size();
      long sum = 0;
      for (int i = 0; i < length; i++) {
        TreeNode node = queue.poll();
        sum += node.val;
        if (node.left != null) {
          queue.offer(node.left);
        }
        if (node.right != null) {
          queue.offer(node.right);
        }
      }
      levels.add(sum);
    }
		if (k>levels.size()) {
			return -1;
		}
    Collections.sort(levels);
    return levels.get(levels.size() - k);
  }
}
// @leet end
