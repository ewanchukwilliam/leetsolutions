// @leet start
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
  public int maxDepth(TreeNode root) { 
		return dfs(root, 0);
	}

  public int dfs(TreeNode root, int depth) {
    if (root == null) {
      return depth--;
    }
    depth++;
    return Math.max(dfs(root.left, depth), dfs(root.right, depth));
  };
}
// @leet end
