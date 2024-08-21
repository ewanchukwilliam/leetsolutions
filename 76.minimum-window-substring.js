// @leet start
/**
 * @param {string} s
 * @param {string} t
 * @return {string}
 */
var minWindow = function(s, t) {
	var l = 0;
	var r = 0;
	var tHash = new Map();
	for (let i = 0; i < t.length; i++) {
		const letter = t[i];
		if (!tHash.has(letter)) {
			tHash.set(letter, true);
		}
	}
	var ans = "";
	while (l < s.length) {
		var cur = "";
		r = l;
		if (tHash.has(s[l])) {
			while (r < s.length && tHash.has(s[r])) {
				cur = cur + s[r];
				r++;
			}
			l = r;
		} else {
			l++;
		}
		if (ans.length < cur.length) {
			ans = cur;
		}
	}
	return ans;
};
// @leet end
