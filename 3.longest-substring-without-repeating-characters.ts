// @leet start

type values = {
	last: number;
	ans: number;
	map: Map<string, number>;
};

function lengthOfLongestSubstring(s: string): number {
	let vals: values = {
		last: 0,
		ans: 0,
		map: new Map<string, number>(),
	};
	for (let i = 0; i < s.length; i++) {
		const char = s[i];
		if (vals.map.has(char) && vals.map.get(char)! >= vals.last) {
			vals.last = vals.map.get(char)! + 1;
		}
		vals.map.set(char, i);
		vals.ans = Math.max(vals.ans, i - vals.last + 1);
	}
	return vals.ans;
}
// @leet end
//
