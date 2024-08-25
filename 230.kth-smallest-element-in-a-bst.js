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
	var state = {
		count: 0,
		answer: -1,
	};
	helper(root, k, state);
	return state.answer;
};
var helper = function(root, k, state) {
	if (!root || state.answer !== -1) return;
	helper(root.left, k, state);
	state.count++;
	if (state.count == k) {
		state.answer = root.val;
	}
	helper(root.right, k, state);
};
// @leet end
