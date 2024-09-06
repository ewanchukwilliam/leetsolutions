// @leet start
/**
 /* * Definition for a binary tree node. */
/* struct TreeNode { */
/*   int val; */
/*   TreeNode *left; */
/*   TreeNode *right; */
/*   TreeNode() : val(0), left(nullptr), right(nullptr) {} */
/*   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {} */
/*   TreeNode(int x, TreeNode *left, TreeNode *right) */
/*       : val(x), left(left), right(right) {} */
/* }; */
/* */
using namespace std;
class Solution {
public:
  bool evaluateTree(TreeNode *root) {

    if (!root->left && !root->right) {
      return root->val;
    } else {
      bool right = evaluateTree(root->right);
      bool left = evaluateTree(root->left);
      if (root->val == 2) {
        return right || left;
      } else if (root->val == 3) {
        return right && left;
      }
    }
    return false;
  }
};
// @leet end
