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
#include <deque>
class Solution {
public:
  bool isSubtree(TreeNode *root, TreeNode *subRoot) {
    if (!root) return false;
    if (root->val == subRoot->val && matches(root, subRoot)) return true;
    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
  }
  bool matches(TreeNode *p, TreeNode *q) {
    if (!p && !q) return true;
    if (!p || !q || p->val != q->val) return false;
    return matches(p->left, q->left) && matches(p->right, q->right);
  }
};
// @leet end
