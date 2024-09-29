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
class Solution {
public:
  int maxDepth(TreeNode *root) {
    int answer = 0;
    return dfs(root, answer);
  }
  int dfs(TreeNode *root, int answer) {
    if (!root) {
      return answer--;
    }
    answer++;
    return max(dfs(root->left, answer),dfs(root->right, answer));
  }
};
// @leet end
