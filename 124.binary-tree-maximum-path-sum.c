// @leet start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max(int a, int b){
	if (a<b) {
		return b;
	}
	return a;
}
int dfs(struct TreeNode* root, int* answer){
	if (!root) return 0;
	int left = max(0,dfs(root->left,answer));
	int right = max(0,dfs(root->right,answer));
	*answer = max(*answer, root->val + left + right);
	return root->val + max(left,right);
}

int maxPathSum(struct TreeNode* root) {
	int answer= INT_MIN;
	dfs(root, &answer);
	return answer;
}
// @leet end
