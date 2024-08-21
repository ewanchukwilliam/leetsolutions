// @leet start
/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var setZeroes = function(matrix) {
	var rh = {};
	var ch = {};
	for (let i = 0; i < matrix.length; i++) {
		for (let n = 0; n < matrix[i].length; n++) {
			const num = matrix[i][n];
			if (num === 0) {
				rh[i] = true;
				ch[n] = true;
			}
		}
	}
	for (const r in rh) {
		for (let i = 0; i < matrix[r].length; i++) {
			matrix[r][i] = 0;
		}
	}
	for (const c in ch) {
		for (let i = 0; i < matrix.length; i++) {
			matrix[i][c] = 0;
		}
	}
};
// @leet end
