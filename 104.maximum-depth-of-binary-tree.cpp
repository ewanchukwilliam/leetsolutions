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
#include <algorithm>
class Solution {
public:
  int maxDepth(TreeNode *root) { return dfs(root, 0); }
  int dfs(TreeNode *root, int answer) {
    if (!root) {
      return answer--;
    }
    answer++;
    return std::max(dfs(root->left, answer), dfs(root->right, answer));
  }
};
// @leet end
