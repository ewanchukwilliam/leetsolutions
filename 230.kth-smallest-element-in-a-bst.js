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
	var stack = [];
	var current = root;
	while (true) {
		while (current !== null) {
			stack.push(current);
			current = current.left;
		}
		current = stack.pop();
		k--;
		if (k === 0) return current.val;
		current = current.right;
	}
};
// @leet end
