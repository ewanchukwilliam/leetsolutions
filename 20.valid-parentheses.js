// @leet start
/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
	let stack = [];
	for (let i = 0; i < s.length; i++) {
		const key = s[i];
		switch (key) {
			case "{":
			case "(":
			case "[":
				stack.push(key);
				break;
			case "}":
				if (stack.pop() !== "{") return false;
				break;
			case ")":
				if (stack.pop() !== "(") return false;
				break;
			case "]":
				if (stack.pop() !== "[") return false;
				break;
			default:
				break;
		}
	}
	if (stack.length) {
		return false;
	}
	return true;
};
// @leet end
