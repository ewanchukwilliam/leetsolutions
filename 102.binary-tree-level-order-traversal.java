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
  public List<List<Integer>> levelOrder(TreeNode root) {
    if (root == null) {
      return new ArrayList<>(); // Return an empty list if the root is null
    }
    Queue<TreeNode> queue = new LinkedList<>();
    queue.offer(root);
    List<List<Integer>> answer = new ArrayList<>();
		

    while (!queue.isEmpty()) {
      int length = queue.size();
      List<Integer> row = new ArrayList<>();
      for (int i = 0; i < length; i++) {
        TreeNode node = queue.remove();
        row.add(node.val);
        if (node.left != null) {
          queue.offer(node.left);
        }
        if (node.right != null) {
          queue.offer(node.right);
        }
      }
      answer.add(row);
    }
    return answer;
  }
}
// @leet end
