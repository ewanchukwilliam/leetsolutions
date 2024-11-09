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
  int maxDepth(TreeNode *root) { return dfs(root, 0); }
  int dfs(TreeNode *root, int depth) {
    if (!root) {
      return depth;
    }
    depth++;
    return max(dfs(root->left, depth), dfs(root->right,depth));
  }
};
// @leet end
