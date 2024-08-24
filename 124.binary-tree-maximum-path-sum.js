/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var maxPathSum = function(root) {
	return maxpath(root, 0);
};
var maxpath = function(root, ans) {
	if (!root) {
		return ans;
	}
	ans += root.val;
	return Math.max(maxpath(root.left, ans), maxpath(root.right, ans));
};
