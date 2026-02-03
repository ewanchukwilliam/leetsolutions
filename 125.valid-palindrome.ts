// @leet start
function isPalindrome(s: string): boolean {
	s = s.replace(/[^A-Za-z0-9]/g, "").toLowerCase();
	let l = 0;
	let r = s.length - 1;
	while (l < r) {
		if (s.charAt(l) !== s.charAt(r)) return false;
		l++;
		r--;
	}
	return true;
}
// @leet end
