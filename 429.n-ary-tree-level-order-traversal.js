// @leet start
/**
 * // Definition for a _Node.
 * function _Node(val,children) {
 *    this.val = val;
 *    this.children = children;
 * };
 */

/**
 * @param {_Node|null} root
 * @return {number[][]}
 */
var levelOrder = function(root) {
	if (!root) {
		return [];
	}
	var ans = [];
	var queue = [root];
	while (queue.length > 0) {
		var level = [];
		var len = queue.length;
		for (let i = 0; i < len; i++) {
			var node = queue.shift();
			level.push(node.val);
			if (node.left !== null) queue.push(node.left);
			if (node.right !== null) queue.push(node.right);
		}
		ans.push(level);
	}
	return ans;
};
// @leet end
