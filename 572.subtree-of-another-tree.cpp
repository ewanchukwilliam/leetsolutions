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
    std::deque<TreeNode *> queue;
    queue.push_back(root);
    while (queue.size() > 0) {
      TreeNode *node = queue.front();
      queue.pop_front();
      if (node->val == subRoot->val && isSame(node, subRoot)) {
        return true;
      }
      if (node->left) queue.push_back(node->left);
      if (node->right) queue.push_back(node->right);
    }
		return false;
  }
  bool isSame(TreeNode *node1, TreeNode *node2) {
    if (!node1 && !node2) {
      return true;
    }
    if (!node1 || !node2 || node1->val != node2->val) {
      return false;
    }
    return isSame(node1->left, node2->left) && isSame(node1->right, node2->right);
  }
};
// @leet end
