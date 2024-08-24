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
#include <vector>
class Solution {
public:
  int maxDepth(TreeNode *root) { return depth(root, 0); }
  int depth(TreeNode *root, int ans) {
    if (!root) {
      return ans;
    }
    ans++;
    return std::max(depth(root->left, ans), depth(root->right, ans));
  }
};
// @leet end
