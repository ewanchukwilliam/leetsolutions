// @leet start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
  int kthSmallest(TreeNode *root, int k) {
    int count = 0;
    int answer = 0;
    dfs(root, k, &count, &answer);
    return answer;
  }
  void dfs(TreeNode *root, int k, int *count, int *answer) {
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
};
// @leet end
