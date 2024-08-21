// @leet start
/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var rotate = function(matrix) {
	var ccur = 0;
	var r1 = 0;
	var c1 = matrix.length - 1;
	var c2 = matrix.length - 1;
	var c3 = 0;
	var cur = 0;
	var prev = 0;
	var boundary = 0;
	var count = 0;
	while (true) {
		cur = matrix[boundary][ccur];
		prev = matrix[r1 + count][c1];
		matrix[r1 + count][c1] = cur;
		cur = prev;
		prev = matrix[c1][c2 - count];
		matrix[c1][c2 - count] = cur;
		cur = prev;
		prev = matrix[c2 - count][c3];
		matrix[c2 - count][c3] = cur;
		cur = prev;
		prev = matrix[c3][r1 + count];
		matrix[c3][r1 + count] = cur;
		ccur++;
		if (ccur === matrix.length - 1 - boundary) {
			boundary++;
			count = boundary;
			ccur = boundary;
			c1 = matrix.length - 1 - boundary;
			c3 = boundary;
		} else {
			count++;
		}
		if (boundary >= Math.floor(matrix.length / 2)) {
			break;
		}
	}
	return matrix;
};
// @leet end
