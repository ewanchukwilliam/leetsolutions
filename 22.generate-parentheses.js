// @leet start
/**
 * @param {number} n
 * @return {string[]}
 */
var isvalid = function(s) {
	var stack = [];
	for (let i = 0; i < s.length; i++) {
		const key = s[i];
		switch (key) {
			case "(":
				stack.push(key);
				break;
			case ")":
				if (stack.pop() !== "(") return false;
				break;
			default:
				break;
		}
	}
	return true;
};
var generateParenthesis = function(n) {
	let result = [];
	function backtracking(string, open, close) {
		if (string.length === 2 * n) {
			if (isvalid(string)) {
				result.push(string);
			}
			return;
		}
		if (open < n) {
			backtracking(string + "(", open + 1, close);
		}
		if (close < n) {
			backtracking(string + ")", open, close + 1);
		}
	}
	backtracking("", 0, 0);
	return result;
};
// @leet end
