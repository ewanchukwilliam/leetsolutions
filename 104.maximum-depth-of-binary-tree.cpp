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
  int maxDepth(TreeNode *root) { return dfs(root, 1); }
  int dfs(TreeNode *root, int answer) {
    if (!root) {
      return answer - 1;
    }
    answer++;
    return max(dfs(root->left, answer), dfs(root->right, answer));
  }
};
// @leet end
