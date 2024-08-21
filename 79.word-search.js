// @leet start
/**
 * @param {character[][]} board
 * @param {string} word
 * @return {boolean}
 */
var exist = function(board, word) {
	for (let i = 0; i < board.length; i++) {
		for (let n = 0; n < board[i].length; n++) {
			const letter = board[i][n];
			if (letter === word[0]) {
				if (searchW(board, word, i, n, 0)) {
					return true;
				}
			}
		}
	}
	return false;
};
var searchW = function(board, word, i, n, index) {
	if (index === word.length) {
		return true;
	}
	if (
		i < 0 ||
		n < 0 ||
		i >= board.length ||
		n >= board[i].length ||
		board[i][n] !== word[index]
	) {
		return false;
	}
	let temp = word[index];
	board[i][n] = "#";
	var found =
		searchW(board, word, i - 1, n, index + 1) ||
		searchW(board, word, i + 1, n, index + 1) ||
		searchW(board, word, i, n - 1, index + 1) ||
		searchW(board, word, i, n + 1, index + 1);
	board[i][n] = temp;
	return found;
};
// @leet end
