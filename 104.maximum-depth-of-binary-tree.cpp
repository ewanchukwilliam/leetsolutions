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
using namespace std;
class Solution {
public:
  int maxDepth(TreeNode *root) { return depth(root, 0); }
  int depth(TreeNode *root, int count) {
    if (!root)
      return count;
    count++;
    return max(depth(root->left, count), depth(root->right, count));
  }
};
// @leet end
