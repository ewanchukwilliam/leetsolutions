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
 * @param {TreeNode} subRoot
 * @return {boolean}
 */
var isSubtree = function(root, subRoot) {
	var queue = [root];
	while (queue.length) {
		var len = queue.length;
		for (let i = 0; i < len; i++) {
			var node = queue.shift();
			if (node.val === subRoot.val && match(node, subRoot)) return true;
			if (node.left !== null) queue.push(node.left);
			if (node.right !== null) queue.push(node.right);
		}
	}
	return false;
};
var match = function(node1, node2) {
	if (!node1 && !node2) return true;
	if (!node1 || !node2 || node1.val !== node2.val) return false;
	return match(node1.left, node2.left) && match(node1.right, node2.right);
};
// @leet end
