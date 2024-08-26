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
#include <stack>
class Solution {
public:
  int kthSmallest(TreeNode *root, int k) {
    stack<TreeNode *> stack;
    TreeNode *current = root;
    while (true) {
      while (current) {
        stack.push(current);
        current = current->left;
      }
      current = stack.top();
      stack.pop();
      k--;
      if (k == 0)
        return current->val;
      current = current->right;
    }
  }
};
// @leet end
