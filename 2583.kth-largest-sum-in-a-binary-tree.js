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
var kthLargestLevelSum = function(root, k) {
	var queue = [root];
	var levels = [];
	while (queue.length) {
		var length = queue.length;
		var sum = 0;
		for (let i = 0; i < length; i++) {
			const node = queue.shift();
			sum += node.val;
			if (node.left) queue.push(node.left);
			if (node.right) queue.push(node.right);
		}
		levels.push(sum);
	}
	if (k > levels.length) {
		return -1;
	}
	return levels.sort((a, b) => a - b)[levels.length - k];
};
// @leet end
