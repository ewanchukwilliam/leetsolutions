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
	if (!root) {
		return 0;
	}
	var queue = [root];
	var answer = 0;
	while (queue.length) {
		var len = queue.length;
		answer++;
		for (let i = 0; i < len; i++) {
			var node = queue.shift();
			if (node.left !== null) queue.push(node.left);
			if (node.right !== null) queue.push(node.right);
		}
	}
	return answer;
};
// @leet end
