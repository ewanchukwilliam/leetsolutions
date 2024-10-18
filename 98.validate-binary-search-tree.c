// @leet start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool dfs(struct TreeNode *root, long long low, long long high) {
  if (!root)
    return true;
  if (root->val <= low || root->val >= high)
    return false;
  return dfs(root->left, low, root->val) && dfs(root->right, root->val, high);
}
bool isValidBST(struct TreeNode *root) {
  return dfs(root, LLONG_MIN, LLONG_MAX);
}
// @leet end
