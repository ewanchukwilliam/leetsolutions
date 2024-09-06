// @leet start
/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
	let answer = "";
	if (strs.length === 1) {
		return strs[0];
	}
	for (let i = 0; i < strs[0].length; i++) {
		for (let n = 0; n < strs.length; n++) {
			if (strs[0][i] !== strs[n][i]) {
				return answer;
			}
		}
		answer += strs[0][i];
	}
	return answer;
};
// @leet end
