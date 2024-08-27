// @leet start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

#include <deque>
class Solution {
public:
  TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    deque<TreeNode *> queue = {root};
    TreeNode *answer = root;
    while (queue.size()) {
      TreeNode *node = queue.front();
      queue.pop_front();
      if (node->left)
        queue.push_back(node->left);
      if (node->right)
        queue.push_back(node->right);
      if (contains(node, p) && contains(node, q))
        answer = node;
    }
		return answer;
  }
  bool contains(TreeNode *root, TreeNode *val) {
    if (!root) return false;
		if (root == val) return true;
    return contains(root->left, val) || contains(root->right, val);
  }
};
// @leet end
