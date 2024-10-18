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
var kthSmallest = function(root, k) {
		var count = [0];
		var answer = [0];
		dfs(root, k, count, answer);
		return answer[0];
};
function dfs(root, k, count, answer){
		if (!root) {
			return;
		}
		dfs(root.left, k, count, answer);
		count[0]++;
		if (count[0]==k) {
			answer[0]=root.val;
				return;
		}
		dfs(root.right, k, count, answer);
}
// @leet end
