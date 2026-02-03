// @leet start
function lengthOfLongestSubstring(s: string): number {
	let last:number = 0;
	let soln:number = 0;
	let map:Map<string,number> = new Map<string,number>();

	for (let i = 0; i < s.length; i++) {
		const char = s[i];
		if (map.has(char) && map.get(char)!>=last) {
			last=map.get(char)!+1;
		}
		map.set(char,i);
		soln=Math.max(soln, i-last+1);
	}
	return soln;
};
// @leet end
//
