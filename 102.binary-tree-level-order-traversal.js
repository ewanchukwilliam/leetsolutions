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
 * @return {number[][]}
 */
var levelOrder = function(root) {
	if (!root) return [];
	var queue = [root];
	var answer = [];
	while (queue.length > 0) {
		var length = queue.length;
		var list = [];
		for (let i = 0; i < length; i++) {
			node = queue.shift();
			if (node.left !== null) queue.push(node.left);
			if (node.right !== null) queue.push(node.right);
			list.push(node.val);
		}
		answer.push(list);
	}
	return answer;
};
// @leet end
