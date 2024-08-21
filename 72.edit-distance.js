// @leet start
/**
 * @param {string} word1
 * @param {string} word2
 * @return {number}
 */
var minDistance = function(word1, word2) {
	var ans = 0;
	var dif = Math.abs(word1.length - word2.length);
	for (let i = 0; i < word1.length; i++) {
		var count = 0;
		var l2 = i;
		for (let n = i; n < word1.length; n++) {
			const let1 = word1[n];
			if (n < word2.length && l2 < word2.length) {
				const let2 = word2[l2];
				if (let1 === let2) {
					count++;
					ans = Math.max(ans, count);
					l2++;
				}
			} else {
				break;
			}
		}
	}
	return ans + dif;
};
// @leet end
