// @leet start
/**
 * @param {string} s
 * @return {number}
 */
var longestPalindrome = function(s) {
	let map = new Map();
	let count = 0;
	for (let i = 0; i < s.length; i++) {
		const char = s[i];
		if (map.has(char)) {
			count += 2;
			map.delete(char);
		} else {
			map.set(char, 1);
		}
	}
	if (map.size > 0) {
		count += 1;
	}
	return count;
};
// @leet end
