// @leet start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool dfs(struct TreeNode *p, struct TreeNode *q) {
  if (!p && !q) {
    return true;
  }
  if (!p || !q || p->val != q->val) {
    return false;
  }
  return dfs(p->left, q->left) && dfs(p->right, q->right);
}
bool isSubtree(struct TreeNode *root, struct TreeNode *subRoot) {
  if (!root) {
    return false;
  }
  if (root->val == subRoot->val && dfs(root, subRoot)) {
    return true;
  }
  return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}
// @leet end
