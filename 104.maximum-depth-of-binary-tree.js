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
 * @return {number}
 */
var maxDepth = function(root) {
	return dfs(root, 0);
};
var dfs = function(root, answer) {
	if (!root) {
		return answer--;
	}
	answer++;
	return Math.max(dfs(root.left, answer), dfs(root.right, answer));
};
// @leet end
