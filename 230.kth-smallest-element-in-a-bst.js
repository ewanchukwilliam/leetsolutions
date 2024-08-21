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
 * @param {number} k
 * @return {number}
 */
var kthSmallest = function(root, k) {
	var ans = null;
	var count = 0
	var search = function(root) {
		if (!root || ans) return;
		search(root.left);
		count++;
		if (count === k) ans = root.val;
		search(root.right);
	};
	search(root)
	return ans;
};
// @leet end
