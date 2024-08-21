// @leet start
/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
	let map = new Map()
	for (const str of strs) {
		const s = str.split('').sort().join('');
		if (!map[s]) map[s]=[]
		map[s].push(str)
	}
	return Object.values(map)
};
// @leet end
