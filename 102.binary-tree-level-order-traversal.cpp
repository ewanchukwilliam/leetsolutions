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
		if (!root) {
			return {};
		}
		std::deque<TreeNode*> q;
		q.push_back(root);
		std::vector<std::vector<int>> answer;
		while (q.size()) {
			int len = q.size();
			std::vector<int>row;
			for (int i = 0; i < len; i++) {
				TreeNode* node = q.front();
				q.pop_front();
				row.push_back(node->val);
				if(node->left)q.push_back(node->left);
				if(node->right)q.push_back(node->right);
			}
			answer.push_back(row);
		}
		return answer;
  }
};
// @leet end
