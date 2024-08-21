// @leet start
/**
 * @param {number[][]} matrix
 * @return {number[]}
 */
var spiralOrder = function(matrix) {
	var ans = [];
	var bound = 0;
	var rowLen = matrix.length;
	var colLen = matrix[0].length;
	var size = colLen * rowLen;
	while (ans.length < size) {
		for (let i = bound; i < colLen - bound && ans.length < size; i++) {
			ans.push(matrix[bound][i]);
		}
		for (let i = bound + 1; i < rowLen - bound && ans.length < size; i++) {
			ans.push(matrix[i][colLen - 1 - bound]);
		}
		for (let i = colLen - 2 - bound; i >= bound && ans.length < size; i--) {
			ans.push(matrix[rowLen - 1 - bound][i]);
		}
		for (let i = rowLen - 2 - bound; i > bound && ans.length < size; i--) {
			ans.push(matrix[i][bound]);
		}
		bound++;
	}
	return ans;
};
// @leet end
