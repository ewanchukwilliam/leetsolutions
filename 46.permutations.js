// @leet start
/**
 * @param {number[]} nums
 * @return {number[][]}
 */
class TreeNode {
	constructor(value) {
		this.value = value;
		this.children = [];
	}
	addChild(value) {
		this.children.push(value);
	}
}
var permute = function(nums) {
	var temp = new TreeNode(null);
	var tree = createTree(temp, nums);
	var list = [];
	var ans = [];
	dfs(tree, list, ans);
	return ans;
};

var dfs = function(tree, list, ans) {
	if (tree.value !== null) {
		list.push(tree.value);
	}
	if (tree.value !== null && tree.children.length === 0) {
		ans.push([...list]);
	}
	for (const child of tree.children) {
		dfs(child, list, ans);
	}
	if (tree.value !== null) {
		list.pop();
	}
};

var createTree = function(node, nums) {
	if (nums.length === 0) {
		return node;
	}
	for (let i = 0; i < nums.length; i++) {
		const num = nums[i];
		var child = new TreeNode(num);
		var temp = copyList(nums, i);
		createTree(child, temp);
		node.addChild(child);
	}
	return node;
};

var copyList = function(list, n) {
	var copy = [];
	for (let i = 0; i < list.length; i++) {
		const num = list[i];
		if (i !== n) {
			copy.push(num);
		}
	}
	return copy;
};
// @leet end
