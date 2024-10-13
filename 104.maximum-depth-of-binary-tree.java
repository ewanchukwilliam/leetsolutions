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
  public int maxDepth(TreeNode root) { return dfs(root, 1); }
  public int dfs(TreeNode root, int answer) {
    if (root == null) {
      return answer - 1;
    }
    answer++;
    return Math.max(dfs(root.left, answer), dfs(root.right, answer));
  }
}
// @leet end
