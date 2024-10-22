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
  long long kthLargestLevelSum(TreeNode *root, int k) {
    std::deque<TreeNode *> queue;
    queue.push_back(root);
    std::vector<long long> levels;
    while (queue.size()) {
      int length = queue.size();
      long long sum = 0;
      for (int i = 0; i < length; i++) {
        TreeNode *node = queue.front();
        sum += node->val;
        queue.pop_front();
        if (node->left)
          queue.push_back(node->left);
        if (node->right)
          queue.push_back(node->right);
      }
      levels.push_back(sum);
    }
    if (k > levels.size()) {
      return -1;
    }
    sort(levels.begin(), levels.end());
    return levels[levels.size() - k];
  }
};
// @leet end
