// @leet start
/**
 * @param {string} s
 * @return {string}
 */
var checkpal = function(l, ans, r, s) {
	while (l >= 0 && r < s.length) {
		if (s[l] === s[r]) {
			ans = s[l] + ans + s[r];
			l--;
			r++;
		} else {
			return ans;
		}
	}
	return ans;
};
var longestPalindrome = function(s) {
	let realans = "";
	let ans = "";
	for (let i = 0; i < s.length; i++) {
		ans = s[i];
		let l = i - 1;
		let r = i + 1;
		let check = checkpal(l, ans, r, s);
		if (check.length > realans.length) {
			realans = check;
		}
		ans = "";
		l = i;
		r = i + 1;
		check = checkpal(l, ans, r, s);
		if (check.length > realans.length) {
			realans = check;
		}
	}
	return realans;
};
// @leet end
