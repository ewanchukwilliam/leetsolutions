// @leet start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max(int a, int b) {
  if (a < b) {
    return b;
  }
  return a;
}

int dfs(struct TreeNode *root, int answer) {
  if (!root) {
    return answer - 1;
  }
  answer++;
  return max(dfs(root->left, answer), dfs(root->right, answer));
}

int maxDepth(struct TreeNode *root) { return dfs(root, 1); }
// @leet end
