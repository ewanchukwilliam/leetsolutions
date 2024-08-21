// @leet start
/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
	if (s.length<=1) {
		return s.length
	}
	var hash = new Map()
	var answer = 0;
	var left = 0;
	var right = 0;
	while (right<s.length) {
		if (!hash.has(s[right])) {
			hash.set(s[right],true)
		}else{
			while (s[left]!==s[right]) {
				hash.delete(s[left])
				left++;
			}
			left++;
		}
		answer = Math.max(answer,right-left+1)
		right++;
	}
	return answer
};
// @leet end
