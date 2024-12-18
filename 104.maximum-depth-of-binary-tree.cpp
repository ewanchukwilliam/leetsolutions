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
    return depth(root, 1);
  }
	int depth(TreeNode * root, int answer) {
		if (!root) {
			return answer - 1;
		}
		answer++;
		return max(depth(root->left, answer), depth(root->right, answer));
	}
};
// @leet end
