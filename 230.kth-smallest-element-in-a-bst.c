// @leet start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void dfs(struct TreeNode *root, int k, int *count, int *answer) {
  if (!root)
    return;
  dfs(root->left, k, count, answer);
  (*count)++;
  if (*count == k) {
    *answer = root->val;
    return;
  }
  dfs(root->right, k, count, answer);
}
int kthSmallest(struct TreeNode *root, int k) {
  int count = 0;
  int answer = 0;
  dfs(root, k, &count, &answer);
  return answer;
}
// @leet end
