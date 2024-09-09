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
  int maxDepth(TreeNode *root) {
    if (!root) {
      return 0;
    }
    std::deque<TreeNode *> queue;
    queue.push_back(root);
    int answer = 0;
    while (queue.size()) {
      int len = queue.size();
      answer++;
      for (int i = 0; i < len; i++) {
        TreeNode *node = queue.front();
        queue.pop_front();
        if (node->left)
          queue.push_back(node->left);
        if (node->right)
          queue.push_back(node->right);
      }
    }
    return answer;
  }
};
// @leet end
