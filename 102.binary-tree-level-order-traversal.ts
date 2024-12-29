// @leet start
/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     val: number
 *     left: TreeNode | null
 *     right: TreeNode | null
 *     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.left = (left===undefined ? null : left)
 *         this.right = (right===undefined ? null : right)
 *     }
 * }
 */

function levelOrder(root: TreeNode | null): number[][] {
	let queue = [];
	let result = [];
	if (!root) {
		return result;
	}
	queue.push(root);
	while (queue.length) {
		let level = [];
		let size = queue.length;
		for (let i = 0; i < size; i++) {
			let node = queue.shift();
			level.push(node.val);
			if (node.left) {
				queue.push(node.left);
			}
			if (node.right) {
				queue.push(node.right);
			}
		}
		result.push(level);
	}
	return result;
}
// @leet end
