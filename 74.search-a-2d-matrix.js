// @leet start
/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var searchMatrix = function(matrix, target) {
	var l = 0;
	var r = matrix.length - 1;
	while (l <= r) {
		var m = Math.floor((l + r) / 2);
		var row = matrix[m];
		var end = row.length - 1;
		if (target < row[0]) {
			r = m - 1;
		} else if (target > row[end]) {
			l = m + 1;
		} else if (row[0] <= target && target <= row[end]) {
			l = r + 1;
			var L = 0;
			var R = end;
			while (L <= R) {
				var M = Math.floor((L + R) / 2);
				if (row[M] === target) {
					return true;
				}
				if (target < row[M]) {
					R = M - 1;
				} else if (target > row[M]) {
					L = M + 1;
				}
			}
		}
	}
	return false;
};
// @leet end
