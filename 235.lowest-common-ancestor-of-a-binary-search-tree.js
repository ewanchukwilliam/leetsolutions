// @leet start
/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */

/**
 * @param {TreeNode} root
 * @param {TreeNode} p
 * @param {TreeNode} q
 * @return {TreeNode}
 */
var lowestCommonAncestor = function(root, p, q) {
	var queue = [root];
	var answer = root;
	while (queue.length) {
		var node = queue.shift();
		if (node.left !== null) queue.push(node.left);
		if (node.right !== null) queue.push(node.right);
		if (contains(node, p) && contains(node, q)) answer = node;
	}
	return answer;
};
var contains = function(root, val) {
	if (!root) return false;
	if (root === val) {
		return true;
	}
	return contains(root.left, val) || contains(root.right, val);
};

// @leet end
