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
	if(!root)return false;
	if(root.val == subRoot.val && dfs(root,subRoot))return true;
	return isSubtree(root.left,subRoot) || isSubtree(root.right,subRoot);
};
var dfs = function(p,q){
	if(!p && !q)return true;
	if(!p || !q || p.val != q.val)return false;
	return dfs(p.left,q.left) && dfs(p.right,q.right);
}
// @leet end
