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
#include <vector>
class Solution {
public:
  bool isSameTree(TreeNode *p, TreeNode *q) {
    std::vector<TreeNode *> queue1;
    queue1.push_back(p);
    std::vector<TreeNode *> queue2;
    queue2.push_back(q);
    while (queue1.size() > 0 && queue2.size() > 0) {
      TreeNode *node1 = queue1.front();
      queue1.erase(queue1.begin());
      TreeNode *node2 = queue2.front();
      queue2.erase(queue2.begin());
      if (!node1 && !node2) {
        continue;
      }
      if (!node1 || !node2) {
        return false;
      }
      if (node1->val != node2->val) {
        return false;
      }
      queue1.push_back(node1->left);
      queue1.push_back(node1->right);
      queue2.push_back(node2->left);
      queue2.push_back(node2->right);
    }
    return queue1.size() == queue2.size();
  }
};
// @leet end
