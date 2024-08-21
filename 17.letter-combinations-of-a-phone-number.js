// @leet start
/**
 * @param {string} digits
 * @return {string[]}
 */
var numletter = [];
for (let i = 2; i <= 9; i++) {
	let ascii = "a".charCodeAt(0) + (i - 2) * 3;
	if (i === 8 || i === 9) {
		ascii++;
	}
	numletter[i] = [
		String.fromCharCode(ascii),
		String.fromCharCode(ascii + 1),
		String.fromCharCode(ascii + 2),
	];
	if (i === 7 || i === 9) {
		numletter[i].push(String.fromCharCode(ascii + 3));
	}
}
function letterCombinations(digits) {
	if (digits.length === 0) return [];
	let allCombinations = [];
	function backtrack(index, path) {
		if (index === digits.length) {
			allCombinations.push(path.join(""));
			return;
		}
		let digit = digits[index];
		let letters = numletter[parseInt(digit)];
		for (let letter of letters) {
			path.push(letter);
			backtrack(index + 1, path);
			path.pop();
		}
	}
	backtrack(0, []);
	return allCombinations;
}
// @leet end
