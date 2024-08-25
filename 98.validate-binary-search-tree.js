// @leet start
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
 * @return {boolean}
 */
var isValidBST = function(root) {
	return helper(root, -Infinity, Infinity);
};
var helper = function(root, left, right) {
	if (!root) return true;
	if (root.val <= left || root.val >= right) return false;
	return (
		helper(root.left, left, root.val) && helper(root.right, root.val, right)
	);
};
// @leet end
