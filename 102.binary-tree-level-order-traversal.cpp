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
#include <vector>
class Solution {
public:
  vector<vector<int>> levelOrder(TreeNode *root) {
    if (!root)
      return {};
    std::vector<std::vector<int>> answer;
    std::deque<TreeNode*> queue;
    queue.push_back(root);
    while (queue.size() > 0) {
      std::vector<int> list;
      int length = queue.size();
      for (int i = 0; i < length; i++) {
        TreeNode *node = queue.front();
        queue.pop_front();
        if (node->left)
          queue.push_back(node->left);
        if (node->right)
          queue.push_back(node->right);
        list.push_back(node->val);
      }
      answer.push_back(list);
    }
    return answer;
  }
};
// @leet end
