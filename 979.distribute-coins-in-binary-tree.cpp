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
#include <cstdlib>
#include <iostream>

using namespace std;
class Solution {
public:
  int distributeCoins(TreeNode *root) {
		int moves=0;
		distribute(root,moves);
		return moves;
  }
	int distribute(TreeNode *root,int& moves){
		if (!root) {return 0;};
		int left = distribute(root->left, moves);
		int right = distribute(root->right, moves);
		moves+=abs(left)+abs(right);	
		return root->val+left +right -1;
	}
};
// @leet end
