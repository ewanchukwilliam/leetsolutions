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
	var ans = [];
	var queue = [root];
	while (queue.length) {
		var list = [];
		var len = queue.length;
		for (let i = 0; i < len; i++) {
			var node = queue.shift();
			list.push(node.val);
			if (node.left !== null) queue.push(node.left);
			if (node.right !== null) queue.push(node.right);
		}
		ans.push(list);
	}
	return ans;
};
// @leet end
