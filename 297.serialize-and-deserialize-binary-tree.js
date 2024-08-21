// @leet start
/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */

/**
 * Encodes a tree to a single string.
 *
 * @param {TreeNode} root
 * @return {string}
 */
var serialize = function(root) {
	var queue = [root];
	var ans = [];
	while (queue.length) {
		var len = queue.length;
		var level = [];
		for (let i = 0; i < len; i++) {
			var node = queue.shift();
			if (node !== null) {
				level.push(node.val);
				queue.push(node.left);
				queue.push(node.right);
			} else {
				level.push("#");
			}
		}
		ans.push(level);
	}
	return ans.map((innerArr) => innerArr.join(",")).join(",");
};

/**
 * Decodes your encoded data to tree.
 *
 * @param {string} data
 * @return {TreeNode}
 */
var deserialize = function(data) {
	if (data==="" ||data==="#") {
		return null 
	}
	var list = data
		.split(",")
		.map((value) => (value === "#" ? null : parseInt(value)));
	var root = new TreeNode(list.shift());
	var queue = [root];
	var i = 0;
	while (queue.length && i < list.length) {
		var node = queue.shift();
		if (list[i] !== null) {
			node.left = new TreeNode(list[i]);
			queue.push(node.left);
		}
		i++;
		if (list[i] !== null) {
			node.right = new TreeNode(list[i]);
			queue.push(node.right);
		}
		i++;
	}
	return root
};

/**
 * Your functions will be called as such:
 * deserialize(serialize(root));
 */
// @leet end
